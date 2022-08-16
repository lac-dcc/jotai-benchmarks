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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  DMA_M2M; int /*<<< orphan*/  DMA_Priority; int /*<<< orphan*/  DMA_Mode; int /*<<< orphan*/  DMA_MemoryDataSize; int /*<<< orphan*/  DMA_PeripheralDataSize; int /*<<< orphan*/  DMA_MemoryInc; int /*<<< orphan*/  DMA_PeripheralInc; scalar_t__ DMA_BufferSize; int /*<<< orphan*/  DMA_DIR; scalar_t__ DMA_MemoryBaseAddr; scalar_t__ DMA_PeripheralBaseAddr; } ;
typedef  TYPE_1__ DMA_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  DMA_DIR_PeripheralSRC ; 
 int /*<<< orphan*/  DMA_M2M_Disable ; 
 int /*<<< orphan*/  DMA_MemoryDataSize_Byte ; 
 int /*<<< orphan*/  DMA_MemoryInc_Disable ; 
 int /*<<< orphan*/  DMA_Mode_Normal ; 
 int /*<<< orphan*/  DMA_PeripheralDataSize_Byte ; 
 int /*<<< orphan*/  DMA_PeripheralInc_Disable ; 
 int /*<<< orphan*/  DMA_Priority_Low ; 

void DMA_StructInit(DMA_InitTypeDef* DMA_InitStruct)
{
/*-------------- Reset DMA init structure parameters values ------------------*/
  /* Initialize the DMA_PeripheralBaseAddr member */
  DMA_InitStruct->DMA_PeripheralBaseAddr = 0;
  /* Initialize the DMA_MemoryBaseAddr member */
  DMA_InitStruct->DMA_MemoryBaseAddr = 0;
  /* Initialize the DMA_DIR member */
  DMA_InitStruct->DMA_DIR = DMA_DIR_PeripheralSRC;
  /* Initialize the DMA_BufferSize member */
  DMA_InitStruct->DMA_BufferSize = 0;
  /* Initialize the DMA_PeripheralInc member */
  DMA_InitStruct->DMA_PeripheralInc = DMA_PeripheralInc_Disable;
  /* Initialize the DMA_MemoryInc member */
  DMA_InitStruct->DMA_MemoryInc = DMA_MemoryInc_Disable;
  /* Initialize the DMA_PeripheralDataSize member */
  DMA_InitStruct->DMA_PeripheralDataSize = DMA_PeripheralDataSize_Byte;
  /* Initialize the DMA_MemoryDataSize member */
  DMA_InitStruct->DMA_MemoryDataSize = DMA_MemoryDataSize_Byte;
  /* Initialize the DMA_Mode member */
  DMA_InitStruct->DMA_Mode = DMA_Mode_Normal;
  /* Initialize the DMA_Priority member */
  DMA_InitStruct->DMA_Priority = DMA_Priority_Low;
  /* Initialize the DMA_M2M member */
  DMA_InitStruct->DMA_M2M = DMA_M2M_Disable;
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
          int _len_DMA_InitStruct0 = 1;
          struct TYPE_3__ * DMA_InitStruct = (struct TYPE_3__ *) malloc(_len_DMA_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DMA_InitStruct0; _i0++) {
            DMA_InitStruct[_i0].DMA_M2M = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_Priority = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_MemoryDataSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_PeripheralDataSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_MemoryInc = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_PeripheralInc = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_BufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_DIR = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_MemoryBaseAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct[_i0].DMA_PeripheralBaseAddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DMA_StructInit(DMA_InitStruct);
          free(DMA_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
