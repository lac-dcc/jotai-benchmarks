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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u16 ;
struct tid_group {int dummy; } ;
struct hfi1_ctxtdata {struct tid_group* groups; } ;

/* Variables and functions */

__attribute__((used)) static inline u16
hfi1_tid_group_to_idx(struct hfi1_ctxtdata *rcd, struct tid_group *grp)
{
	return grp - &rcd->groups[0];
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
          int _len_rcd0 = 1;
          struct hfi1_ctxtdata * rcd = (struct hfi1_ctxtdata *) malloc(_len_rcd0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__groups0 = 1;
          rcd[_i0].groups = (struct tid_group *) malloc(_len_rcd__i0__groups0*sizeof(struct tid_group));
          for(int _j0 = 0; _j0 < _len_rcd__i0__groups0; _j0++) {
            rcd[_i0].groups->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_grp0 = 1;
          struct tid_group * grp = (struct tid_group *) malloc(_len_grp0*sizeof(struct tid_group));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hfi1_tid_group_to_idx(rcd,grp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].groups);
          }
          free(rcd);
          free(grp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rcd0 = 65025;
          struct hfi1_ctxtdata * rcd = (struct hfi1_ctxtdata *) malloc(_len_rcd0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__groups0 = 1;
          rcd[_i0].groups = (struct tid_group *) malloc(_len_rcd__i0__groups0*sizeof(struct tid_group));
          for(int _j0 = 0; _j0 < _len_rcd__i0__groups0; _j0++) {
            rcd[_i0].groups->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_grp0 = 65025;
          struct tid_group * grp = (struct tid_group *) malloc(_len_grp0*sizeof(struct tid_group));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hfi1_tid_group_to_idx(rcd,grp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].groups);
          }
          free(rcd);
          free(grp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rcd0 = 100;
          struct hfi1_ctxtdata * rcd = (struct hfi1_ctxtdata *) malloc(_len_rcd0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__groups0 = 1;
          rcd[_i0].groups = (struct tid_group *) malloc(_len_rcd__i0__groups0*sizeof(struct tid_group));
          for(int _j0 = 0; _j0 < _len_rcd__i0__groups0; _j0++) {
            rcd[_i0].groups->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_grp0 = 100;
          struct tid_group * grp = (struct tid_group *) malloc(_len_grp0*sizeof(struct tid_group));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hfi1_tid_group_to_idx(rcd,grp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].groups);
          }
          free(rcd);
          free(grp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
