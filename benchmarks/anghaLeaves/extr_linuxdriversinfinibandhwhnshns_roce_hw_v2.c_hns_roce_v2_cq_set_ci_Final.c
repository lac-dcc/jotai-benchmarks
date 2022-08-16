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
typedef  int u32 ;
struct hns_roce_cq {int* set_ci_db; } ;

/* Variables and functions */

__attribute__((used)) static void hns_roce_v2_cq_set_ci(struct hns_roce_cq *hr_cq, u32 cons_index)
{
	*hr_cq->set_ci_db = cons_index & 0xffffff;
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
          int cons_index = 100;
          int _len_hr_cq0 = 1;
          struct hns_roce_cq * hr_cq = (struct hns_roce_cq *) malloc(_len_hr_cq0*sizeof(struct hns_roce_cq));
          for(int _i0 = 0; _i0 < _len_hr_cq0; _i0++) {
              int _len_hr_cq__i0__set_ci_db0 = 1;
          hr_cq[_i0].set_ci_db = (int *) malloc(_len_hr_cq__i0__set_ci_db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hr_cq__i0__set_ci_db0; _j0++) {
            hr_cq[_i0].set_ci_db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hns_roce_v2_cq_set_ci(hr_cq,cons_index);
          for(int _aux = 0; _aux < _len_hr_cq0; _aux++) {
          free(hr_cq[_aux].set_ci_db);
          }
          free(hr_cq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
