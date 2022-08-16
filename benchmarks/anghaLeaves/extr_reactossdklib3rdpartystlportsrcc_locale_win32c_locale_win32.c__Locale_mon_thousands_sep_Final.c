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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* thousands_sep; } ;
typedef  TYPE_1__ _Locale_monetary_t ;

/* Variables and functions */

char _Locale_mon_thousands_sep(_Locale_monetary_t * lmon)
{ return lmon->thousands_sep[0]; }


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
          int _len_lmon0 = 1;
          struct TYPE_3__ * lmon = (struct TYPE_3__ *) malloc(_len_lmon0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lmon0; _i0++) {
              int _len_lmon__i0__thousands_sep0 = 1;
          lmon[_i0].thousands_sep = (char *) malloc(_len_lmon__i0__thousands_sep0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_lmon__i0__thousands_sep0; _j0++) {
            lmon[_i0].thousands_sep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char benchRet = _Locale_mon_thousands_sep(lmon);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_lmon0; _aux++) {
          free(lmon[_aux].thousands_sep);
          }
          free(lmon);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
