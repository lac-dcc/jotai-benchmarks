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
struct dpu_hw_cdm_ops {int /*<<< orphan*/  disable; int /*<<< orphan*/  enable; int /*<<< orphan*/  setup_cdwn; int /*<<< orphan*/  setup_csc_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  dpu_hw_cdm_disable ; 
 int /*<<< orphan*/  dpu_hw_cdm_enable ; 
 int /*<<< orphan*/  dpu_hw_cdm_setup_cdwn ; 
 int /*<<< orphan*/  dpu_hw_cdm_setup_csc_10bit ; 

__attribute__((used)) static void _setup_cdm_ops(struct dpu_hw_cdm_ops *ops,
	unsigned long features)
{
	ops->setup_csc_data = dpu_hw_cdm_setup_csc_10bit;
	ops->setup_cdwn = dpu_hw_cdm_setup_cdwn;
	ops->enable = dpu_hw_cdm_enable;
	ops->disable = dpu_hw_cdm_disable;
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
          unsigned long features = 100;
          int _len_ops0 = 1;
          struct dpu_hw_cdm_ops * ops = (struct dpu_hw_cdm_ops *) malloc(_len_ops0*sizeof(struct dpu_hw_cdm_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].disable = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].enable = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_cdwn = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_csc_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _setup_cdm_ops(ops,features);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
