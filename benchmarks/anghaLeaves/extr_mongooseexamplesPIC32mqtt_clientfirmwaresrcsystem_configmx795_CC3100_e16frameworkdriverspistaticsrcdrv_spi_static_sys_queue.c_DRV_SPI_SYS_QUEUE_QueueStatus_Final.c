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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_STATUS ;
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_RESULT ;
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_INVALID_PARAMETER ; 

DRV_SPI_SYS_QUEUE_RESULT DRV_SPI_SYS_QUEUE_QueueStatus(DRV_SPI_SYS_QUEUE_HANDLE queue, DRV_SPI_SYS_QUEUE_STATUS * status)
{
#if _SPI_DRV_SYS_QUEUE_TRACKING
    if ((queue <= 0) && (queue >= DRV_SPI_SYS_QUEUE_MAX_ERROR))
    {
        return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * pQueue = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)queue;

    if (pQueue->pNext != NULL)
    {
        return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
    }
    if (status == NULL)
    {
        return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
    }

    status->numAllocOps = pQueue->numAllocOps;
    status->numFreeOps = pQueue->numFreeOps;
    status->numDequeueOps = pQueue->numDequeueOps;
    status->numEnqueueOps = pQueue->numEnqueueOps;
    status->numReserved = pQueue->numReserved;
    status->numAlloc = pQueue->numAlloc;
    status->numEnqueued = pQueue->numEnqueued;
    status->numReserveLW = pQueue->numReserveLW;
    status->numAllocHW = pQueue->numAllocHW;
    status->numEnqueuedHW = pQueue->numEnqueuedHW;
    return DRV_SPI_SYS_QUEUE_SUCCESS;
#else
    return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
#endif

}

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
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int queue = 100;
        
          int _len_status0 = 1;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = DRV_SPI_SYS_QUEUE_QueueStatus(queue,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int queue = 255;
        
          int _len_status0 = 65025;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = DRV_SPI_SYS_QUEUE_QueueStatus(queue,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int queue = 10;
        
          int _len_status0 = 100;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = DRV_SPI_SYS_QUEUE_QueueStatus(queue,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_status0 = 1;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = DRV_SPI_SYS_QUEUE_QueueStatus(queue,status);
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
