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
       0            big-arr-10x\n\
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
struct TYPE_3__ {unsigned long* __bits; } ;
typedef  TYPE_1__ sigset_t ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int _NSIG ; 
 int /*<<< orphan*/  errno ; 

int sigdelset(sigset_t *set, int sig)
{
	unsigned s = sig-1;
	if (s >= _NSIG-1 || sig-32U < 3) {
		errno = EINVAL;
		return -1;
	}
	set->__bits[s/8/sizeof *set->__bits] &=~(1UL<<(s&8*sizeof *set->__bits-1));
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int sig = 10;
        
          int _len_set0 = 100;
          struct TYPE_3__ * set = (struct TYPE_3__ *) malloc(_len_set0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
              int _len_set__i0____bits0 = 1;
          set[_i0].__bits = (unsigned long *) malloc(_len_set__i0____bits0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_set__i0____bits0; _j0++) {
            set[_i0].__bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = sigdelset(set,sig);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_set0; _aux++) {
          free(set[_aux].__bits);
          }
          free(set);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
