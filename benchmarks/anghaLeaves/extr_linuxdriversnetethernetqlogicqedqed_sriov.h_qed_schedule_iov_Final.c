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
       1            big-arr-10x\n\
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
struct qed_hwfn {int dummy; } ;
typedef  enum qed_iov_wq_flag { ____Placeholder_qed_iov_wq_flag } qed_iov_wq_flag ;

/* Variables and functions */

__attribute__((used)) static inline void qed_schedule_iov(struct qed_hwfn *hwfn,
				    enum qed_iov_wq_flag flag)
{
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
          enum qed_iov_wq_flag flag = 0;
          int _len_hwfn0 = 1;
          struct qed_hwfn * hwfn = (struct qed_hwfn *) malloc(_len_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_hwfn0; _i0++) {
            hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_schedule_iov(hwfn,flag);
          free(hwfn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum qed_iov_wq_flag flag = 0;
          int _len_hwfn0 = 100;
          struct qed_hwfn * hwfn = (struct qed_hwfn *) malloc(_len_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_hwfn0; _i0++) {
            hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_schedule_iov(hwfn,flag);
          free(hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
