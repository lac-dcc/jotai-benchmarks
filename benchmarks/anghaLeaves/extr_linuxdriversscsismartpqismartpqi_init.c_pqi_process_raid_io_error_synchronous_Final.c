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
struct pqi_raid_error_info {int data_out_result; int /*<<< orphan*/  status; } ;

/* Variables and functions */
 int EIO ; 
 int PQI_CMD_STATUS_ABORTED ; 
#define  PQI_DATA_IN_OUT_ABORTED 130 
#define  PQI_DATA_IN_OUT_GOOD 129 
#define  PQI_DATA_IN_OUT_UNDERFLOW 128 
 int /*<<< orphan*/  SAM_STAT_CHECK_CONDITION ; 
 int /*<<< orphan*/  SAM_STAT_GOOD ; 

__attribute__((used)) static int pqi_process_raid_io_error_synchronous(struct pqi_raid_error_info
						*error_info)
{
	int rc = -EIO;

	switch (error_info->data_out_result) {
	case PQI_DATA_IN_OUT_GOOD:
		if (error_info->status == SAM_STAT_GOOD)
			rc = 0;
		break;
	case PQI_DATA_IN_OUT_UNDERFLOW:
		if (error_info->status == SAM_STAT_GOOD ||
			error_info->status == SAM_STAT_CHECK_CONDITION)
			rc = 0;
		break;
	case PQI_DATA_IN_OUT_ABORTED:
		rc = PQI_CMD_STATUS_ABORTED;
		break;
	}

	return rc;
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
          int _len_error_info0 = 65025;
          struct pqi_raid_error_info * error_info = (struct pqi_raid_error_info *) malloc(_len_error_info0*sizeof(struct pqi_raid_error_info));
          for(int _i0 = 0; _i0 < _len_error_info0; _i0++) {
              error_info[_i0].data_out_result = ((-2 * (next_i()%2)) + 1) * next_i();
          error_info[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pqi_process_raid_io_error_synchronous(error_info);
          printf("%d\n", benchRet); 
          free(error_info);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_error_info0 = 100;
          struct pqi_raid_error_info * error_info = (struct pqi_raid_error_info *) malloc(_len_error_info0*sizeof(struct pqi_raid_error_info));
          for(int _i0 = 0; _i0 < _len_error_info0; _i0++) {
              error_info[_i0].data_out_result = ((-2 * (next_i()%2)) + 1) * next_i();
          error_info[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pqi_process_raid_io_error_synchronous(error_info);
          printf("%d\n", benchRet); 
          free(error_info);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_error_info0 = 1;
          struct pqi_raid_error_info * error_info = (struct pqi_raid_error_info *) malloc(_len_error_info0*sizeof(struct pqi_raid_error_info));
          for(int _i0 = 0; _i0 < _len_error_info0; _i0++) {
              error_info[_i0].data_out_result = ((-2 * (next_i()%2)) + 1) * next_i();
          error_info[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pqi_process_raid_io_error_synchronous(error_info);
          printf("%d\n", benchRet); 
          free(error_info);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
