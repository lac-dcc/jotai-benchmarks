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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  union MPI2_REPLY_DESCRIPTORS_UNION {int dummy; } MPI2_REPLY_DESCRIPTORS_UNION ;
typedef  union MEGASAS_REQUEST_DESCRIPTOR_UNION {int dummy; } MEGASAS_REQUEST_DESCRIPTOR_UNION ;
typedef  int u16 ;
struct megasas_instance {int max_fw_cmds; scalar_t__ adapter_type; int max_mpt_cmds; scalar_t__ cur_can_queue; TYPE_1__* host; scalar_t__ max_scsi_cmds; struct fusion_context* ctrl_context; } ;
struct fusion_context {int reply_q_depth; int request_alloc_sz; int reply_alloc_sz; int io_frames_alloc_sz; } ;
struct TYPE_2__ {scalar_t__ can_queue; } ;

/* Variables and functions */
 scalar_t__ MEGASAS_FUSION_INTERNAL_CMDS ; 
 scalar_t__ MEGASAS_FUSION_IOCTL_CMDS ; 
 int MEGA_MPI2_RAID_DEFAULT_IO_FRAME_SIZE ; 
 int RAID_1_PEER_CMDS ; 
 scalar_t__ VENTURA_SERIES ; 

__attribute__((used)) static inline
void megasas_configure_queue_sizes(struct megasas_instance *instance)
{
	struct fusion_context *fusion;
	u16 max_cmd;

	fusion = instance->ctrl_context;
	max_cmd = instance->max_fw_cmds;

	if (instance->adapter_type == VENTURA_SERIES)
		instance->max_mpt_cmds = instance->max_fw_cmds * RAID_1_PEER_CMDS;
	else
		instance->max_mpt_cmds = instance->max_fw_cmds;

	instance->max_scsi_cmds = instance->max_fw_cmds -
			(MEGASAS_FUSION_INTERNAL_CMDS +
			MEGASAS_FUSION_IOCTL_CMDS);
	instance->cur_can_queue = instance->max_scsi_cmds;
	instance->host->can_queue = instance->cur_can_queue;

	fusion->reply_q_depth = 2 * ((max_cmd + 1 + 15) / 16) * 16;

	fusion->request_alloc_sz = sizeof(union MEGASAS_REQUEST_DESCRIPTOR_UNION) *
					  instance->max_mpt_cmds;
	fusion->reply_alloc_sz = sizeof(union MPI2_REPLY_DESCRIPTORS_UNION) *
					(fusion->reply_q_depth);
	fusion->io_frames_alloc_sz = MEGA_MPI2_RAID_DEFAULT_IO_FRAME_SIZE +
		(MEGA_MPI2_RAID_DEFAULT_IO_FRAME_SIZE
		 * (instance->max_mpt_cmds + 1)); /* Extra 1 for SMID 0 */
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
          int _len_instance0 = 1;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
            instance[_i0].max_fw_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].adapter_type = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].max_mpt_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].cur_can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_instance__i0__host0 = 1;
          instance[_i0].host = (struct TYPE_2__ *) malloc(_len_instance__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_instance__i0__host0; _j0++) {
            instance[_i0].host->can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        instance[_i0].max_scsi_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
            instance[_i0].ctrl_context->reply_q_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->request_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->reply_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->io_frames_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          megasas_configure_queue_sizes(instance);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].host);
          }
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_instance0 = 65025;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
            instance[_i0].max_fw_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].adapter_type = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].max_mpt_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].cur_can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_instance__i0__host0 = 1;
          instance[_i0].host = (struct TYPE_2__ *) malloc(_len_instance__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_instance__i0__host0; _j0++) {
            instance[_i0].host->can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        instance[_i0].max_scsi_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
            instance[_i0].ctrl_context->reply_q_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->request_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->reply_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->io_frames_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          megasas_configure_queue_sizes(instance);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].host);
          }
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_instance0 = 100;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
            instance[_i0].max_fw_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].adapter_type = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].max_mpt_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].cur_can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_instance__i0__host0 = 1;
          instance[_i0].host = (struct TYPE_2__ *) malloc(_len_instance__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_instance__i0__host0; _j0++) {
            instance[_i0].host->can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        instance[_i0].max_scsi_cmds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
            instance[_i0].ctrl_context->reply_q_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->request_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->reply_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].ctrl_context->io_frames_alloc_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          megasas_configure_queue_sizes(instance);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].host);
          }
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
