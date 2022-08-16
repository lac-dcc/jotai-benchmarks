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
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_RESULT ;
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_MANAGER_STATUS ;
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_MANAGER_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_INVALID_PARAMETER ; 

DRV_SPI_SYS_QUEUE_RESULT DRV_SPI_SYS_QUEUE_QueueManagerStatus(DRV_SPI_SYS_QUEUE_MANAGER_HANDLE queueManager, DRV_SPI_SYS_QUEUE_MANAGER_STATUS * status)
{
#if _SPI_DRV_SYS_QUEUE_TRACKING
    if ((queueManager <= 0) && (queueManager >= DRV_SPI_SYS_QUEUE_MAX_ERROR))
    {
        return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
    }
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * pQueueManager = (DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA *)queueManager;

    status->numAllocOps = pQueueManager->numAllocOps;
    status->numFreeOps = pQueueManager->numFreeOps;
    status->numQueueCreateOps = pQueueManager->numQueueCreateOps;
    status->numQueueDestroyOps = pQueueManager->numQueueDestroyOps;
    status->numReserveElements = pQueueManager->numReserveElements;
    status->numFreeElements = pQueueManager->numFreeElements;
    status->freeElementsLW = pQueueManager->freeElementsLW;
    status->reserveElementsLW = pQueueManager->reserveElementsLW;
    status->outOfMemoryErrors = pQueueManager->outOfMemoryErrors;
    status->numQueues = pQueueManager->numQueues;
    status->numQueuesHW = pQueueManager->numQueuesHW;
    return DRV_SPI_SYS_QUEUE_SUCCESS;
#else
    return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
#endif
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
          int queueManager = 100;
          int _len_status0 = 1;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DRV_SPI_SYS_QUEUE_QueueManagerStatus(queueManager,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int queueManager = 10;
          int _len_status0 = 100;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DRV_SPI_SYS_QUEUE_QueueManagerStatus(queueManager,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
