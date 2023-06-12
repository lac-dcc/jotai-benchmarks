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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int length; char* buf; } ;
typedef  TYPE_1__ strbuf_t ;

/* Variables and functions */

__attribute__((used)) static inline char *strbuf_string(strbuf_t *s, int *len)
{
    if (len)
        *len = s->length;

    return s->buf;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf0 = 1;
          s[_i0].buf = (char *) malloc(_len_s__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = strbuf_string(s,len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          free(s);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf0 = 1;
          s[_i0].buf = (char *) malloc(_len_s__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = strbuf_string(s,len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          free(s);
          free(len);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf0 = 1;
          s[_i0].buf = (char *) malloc(_len_s__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = strbuf_string(s,len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          free(s);
          free(len);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
