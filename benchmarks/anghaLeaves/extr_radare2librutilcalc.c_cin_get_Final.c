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
struct TYPE_3__ {char oc; char* calc_buf; size_t calc_i; } ;
typedef  TYPE_1__ RNumCalc ;
typedef  int /*<<< orphan*/  RNum ;

/* Variables and functions */

__attribute__((used)) static int cin_get(RNum *num, RNumCalc *nc, char *c) {
	if (nc->oc) {
		*c = nc->oc;
		nc->oc = 0;
	} else {
		if (!nc->calc_buf || !*nc->calc_buf) {
			return 0;
		}
		*c = nc->calc_buf[nc->calc_i];
		if (*c) {
			nc->calc_i++;
		} else {
			return 0;
		}
	}
	return 1;
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
          int _len_num0 = 1;
          int * num = (int *) malloc(_len_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nc0 = 1;
          struct TYPE_3__ * nc = (struct TYPE_3__ *) malloc(_len_nc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_nc0; _i0++) {
            nc[_i0].oc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nc__i0__calc_buf0 = 1;
          nc[_i0].calc_buf = (char *) malloc(_len_nc__i0__calc_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_nc__i0__calc_buf0; _j0++) {
            nc[_i0].calc_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        nc[_i0].calc_i = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          char * c = (char *) malloc(_len_c0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cin_get(num,nc,c);
          printf("%d\n", benchRet); 
          free(num);
          for(int _aux = 0; _aux < _len_nc0; _aux++) {
          free(nc[_aux].calc_buf);
          }
          free(nc);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
