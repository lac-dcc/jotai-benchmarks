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
typedef  int /*<<< orphan*/  u32 ;
struct scsi_sgl_task_params {int /*<<< orphan*/  total_buffer_size; } ;
struct scsi_dif_task_params {int /*<<< orphan*/  dif_on_network; } ;
struct iscsi_task_params {int /*<<< orphan*/  rx_io_size; int /*<<< orphan*/  tx_io_size; } ;
typedef  enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;

/* Variables and functions */
 int ISCSI_TASK_TYPE_INITIATOR_WRITE ; 
 int ISCSI_TASK_TYPE_TARGET_READ ; 

__attribute__((used)) static u32 calc_rw_task_size(struct iscsi_task_params *task_params,
			     enum iscsi_task_type task_type,
			     struct scsi_sgl_task_params *sgl_task_params,
			     struct scsi_dif_task_params *dif_task_params)
{
	u32 io_size;

	if (task_type == ISCSI_TASK_TYPE_INITIATOR_WRITE ||
	    task_type == ISCSI_TASK_TYPE_TARGET_READ)
		io_size = task_params->tx_io_size;
	else
		io_size = task_params->rx_io_size;

	if (!io_size)
		return 0;

	if (!dif_task_params)
		return io_size;

	return !dif_task_params->dif_on_network ?
	       io_size : sgl_task_params->total_buffer_size;
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
          enum iscsi_task_type task_type = 0;
          int _len_task_params0 = 1;
          struct iscsi_task_params * task_params = (struct iscsi_task_params *) malloc(_len_task_params0*sizeof(struct iscsi_task_params));
          for(int _i0 = 0; _i0 < _len_task_params0; _i0++) {
            task_params[_i0].rx_io_size = ((-2 * (next_i()%2)) + 1) * next_i();
        task_params[_i0].tx_io_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sgl_task_params0 = 1;
          struct scsi_sgl_task_params * sgl_task_params = (struct scsi_sgl_task_params *) malloc(_len_sgl_task_params0*sizeof(struct scsi_sgl_task_params));
          for(int _i0 = 0; _i0 < _len_sgl_task_params0; _i0++) {
            sgl_task_params[_i0].total_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dif_task_params0 = 1;
          struct scsi_dif_task_params * dif_task_params = (struct scsi_dif_task_params *) malloc(_len_dif_task_params0*sizeof(struct scsi_dif_task_params));
          for(int _i0 = 0; _i0 < _len_dif_task_params0; _i0++) {
            dif_task_params[_i0].dif_on_network = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_rw_task_size(task_params,task_type,sgl_task_params,dif_task_params);
          printf("%d\n", benchRet); 
          free(task_params);
          free(sgl_task_params);
          free(dif_task_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
