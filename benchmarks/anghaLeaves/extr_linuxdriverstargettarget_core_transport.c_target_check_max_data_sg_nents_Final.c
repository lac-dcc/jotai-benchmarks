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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int u32 ;
struct TYPE_4__ {unsigned int block_size; } ;
struct se_device {unsigned int prot_length; TYPE_2__ dev_attrib; } ;
struct se_cmd {unsigned int data_length; int se_cmd_flags; unsigned int residual_count; unsigned int prot_length; TYPE_1__* se_tfo; } ;
typedef  int /*<<< orphan*/  sense_reason_t ;
struct TYPE_3__ {unsigned int max_data_sg_nents; } ;

/* Variables and functions */
 unsigned int PAGE_SIZE ; 
 int SCF_OVERFLOW_BIT ; 
 int SCF_UNDERFLOW_BIT ; 
 int /*<<< orphan*/  TCM_NO_SENSE ; 

__attribute__((used)) static sense_reason_t
target_check_max_data_sg_nents(struct se_cmd *cmd, struct se_device *dev,
			       unsigned int size)
{
	u32 mtl;

	if (!cmd->se_tfo->max_data_sg_nents)
		return TCM_NO_SENSE;
	/*
	 * Check if fabric enforced maximum SGL entries per I/O descriptor
	 * exceeds se_cmd->data_length.  If true, set SCF_UNDERFLOW_BIT +
	 * residual_count and reduce original cmd->data_length to maximum
	 * length based on single PAGE_SIZE entry scatter-lists.
	 */
	mtl = (cmd->se_tfo->max_data_sg_nents * PAGE_SIZE);
	if (cmd->data_length > mtl) {
		/*
		 * If an existing CDB overflow is present, calculate new residual
		 * based on CDB size minus fabric maximum transfer length.
		 *
		 * If an existing CDB underflow is present, calculate new residual
		 * based on original cmd->data_length minus fabric maximum transfer
		 * length.
		 *
		 * Otherwise, set the underflow residual based on cmd->data_length
		 * minus fabric maximum transfer length.
		 */
		if (cmd->se_cmd_flags & SCF_OVERFLOW_BIT) {
			cmd->residual_count = (size - mtl);
		} else if (cmd->se_cmd_flags & SCF_UNDERFLOW_BIT) {
			u32 orig_dl = size + cmd->residual_count;
			cmd->residual_count = (orig_dl - mtl);
		} else {
			cmd->se_cmd_flags |= SCF_UNDERFLOW_BIT;
			cmd->residual_count = (cmd->data_length - mtl);
		}
		cmd->data_length = mtl;
		/*
		 * Reset sbc_check_prot() calculated protection payload
		 * length based upon the new smaller MTL.
		 */
		if (cmd->prot_length) {
			u32 sectors = (mtl / dev->dev_attrib.block_size);
			cmd->prot_length = dev->prot_length * sectors;
		}
	}
	return TCM_NO_SENSE;
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
          unsigned int size = 100;
          int _len_cmd0 = 1;
          struct se_cmd * cmd = (struct se_cmd *) malloc(_len_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].data_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].se_cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].residual_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].prot_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__se_tfo0 = 1;
          cmd[_i0].se_tfo = (struct TYPE_3__ *) malloc(_len_cmd__i0__se_tfo0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__se_tfo0; _j0++) {
            cmd[_i0].se_tfo->max_data_sg_nents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev0 = 1;
          struct se_device * dev = (struct se_device *) malloc(_len_dev0*sizeof(struct se_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].prot_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_attrib.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = target_check_max_data_sg_nents(cmd,dev,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].se_tfo);
          }
          free(cmd);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
