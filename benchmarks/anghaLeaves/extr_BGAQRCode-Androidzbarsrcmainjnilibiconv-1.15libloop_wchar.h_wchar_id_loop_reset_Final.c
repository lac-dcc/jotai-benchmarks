// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  iconv_t ;

/* Variables and functions */

__attribute__((used)) static size_t wchar_id_loop_reset (iconv_t icd,
                                   char* * outbuf, size_t *outbytesleft)
{
  return 0;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int icd = 100;
          int _len_outbuf0 = 1;
          char ** outbuf = (char **) malloc(_len_outbuf0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_outbuf0; _i0++) {
            int _len_outbuf1 = 1;
            outbuf[_i0] = (char *) malloc(_len_outbuf1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_outbuf1; _i1++) {
              outbuf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outbytesleft0 = 1;
          unsigned long * outbytesleft = (unsigned long *) malloc(_len_outbytesleft0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outbytesleft0; _i0++) {
            outbytesleft[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = wchar_id_loop_reset(icd,outbuf,outbytesleft);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_outbuf0; i1++) {
            int _len_outbuf1 = 1;
              free(outbuf[i1]);
          }
          free(outbuf);
          free(outbytesleft);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
