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

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
struct esas2r_target {int dummy; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;

/* Variables and functions */

__attribute__((used)) static inline u16 esas2r_targ_get_id(struct esas2r_target *t,
				     struct esas2r_adapter *a)
{
	return (u16)(uintptr_t)(t - a->targetdb);
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
          int _len_t0 = 65025;
          struct esas2r_target * t = (struct esas2r_target *) malloc(_len_t0*sizeof(struct esas2r_target));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_a0 = 65025;
          struct esas2r_adapter * a = (struct esas2r_adapter *) malloc(_len_a0*sizeof(struct esas2r_adapter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__targetdb0 = 1;
          a[_i0].targetdb = (struct esas2r_target *) malloc(_len_a__i0__targetdb0*sizeof(struct esas2r_target));
          for(int _j0 = 0; _j0 < _len_a__i0__targetdb0; _j0++) {
              a[_i0].targetdb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = esas2r_targ_get_id(t,a);
          printf("%d\n", benchRet); 
          free(t);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].targetdb);
          }
          free(a);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_t0 = 100;
          struct esas2r_target * t = (struct esas2r_target *) malloc(_len_t0*sizeof(struct esas2r_target));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_a0 = 100;
          struct esas2r_adapter * a = (struct esas2r_adapter *) malloc(_len_a0*sizeof(struct esas2r_adapter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__targetdb0 = 1;
          a[_i0].targetdb = (struct esas2r_target *) malloc(_len_a__i0__targetdb0*sizeof(struct esas2r_target));
          for(int _j0 = 0; _j0 < _len_a__i0__targetdb0; _j0++) {
              a[_i0].targetdb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = esas2r_targ_get_id(t,a);
          printf("%d\n", benchRet); 
          free(t);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].targetdb);
          }
          free(a);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_t0 = 1;
          struct esas2r_target * t = (struct esas2r_target *) malloc(_len_t0*sizeof(struct esas2r_target));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_a0 = 1;
          struct esas2r_adapter * a = (struct esas2r_adapter *) malloc(_len_a0*sizeof(struct esas2r_adapter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__targetdb0 = 1;
          a[_i0].targetdb = (struct esas2r_target *) malloc(_len_a__i0__targetdb0*sizeof(struct esas2r_target));
          for(int _j0 = 0; _j0 < _len_a__i0__targetdb0; _j0++) {
              a[_i0].targetdb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = esas2r_targ_get_id(t,a);
          printf("%d\n", benchRet); 
          free(t);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].targetdb);
          }
          free(a);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
