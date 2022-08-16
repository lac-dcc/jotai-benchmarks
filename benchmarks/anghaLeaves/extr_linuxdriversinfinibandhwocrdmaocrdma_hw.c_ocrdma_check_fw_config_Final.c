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
struct ocrdma_fw_conf_rsp {int fn_mode; int /*<<< orphan*/  max_eq; int /*<<< orphan*/  base_eqid; } ;
struct ocrdma_dev {int /*<<< orphan*/  max_eq; int /*<<< orphan*/  base_eqid; } ;

/* Variables and functions */
 int EINVAL ; 
 int OCRDMA_FN_MODE_RDMA ; 

__attribute__((used)) static int ocrdma_check_fw_config(struct ocrdma_dev *dev,
				   struct ocrdma_fw_conf_rsp *conf)
{
	u32 fn_mode;

	fn_mode = conf->fn_mode & OCRDMA_FN_MODE_RDMA;
	if (fn_mode != OCRDMA_FN_MODE_RDMA)
		return -EINVAL;
	dev->base_eqid = conf->base_eqid;
	dev->max_eq = conf->max_eq;
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
          int _len_dev0 = 1;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].max_eq = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].base_eqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf0 = 1;
          struct ocrdma_fw_conf_rsp * conf = (struct ocrdma_fw_conf_rsp *) malloc(_len_conf0*sizeof(struct ocrdma_fw_conf_rsp));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].fn_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].max_eq = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].base_eqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_check_fw_config(dev,conf);
          printf("%d\n", benchRet); 
          free(dev);
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
