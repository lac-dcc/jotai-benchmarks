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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__* FSMC_WriteTimingStruct; TYPE_1__* FSMC_ReadWriteTimingStruct; int /*<<< orphan*/  FSMC_WriteBurst; int /*<<< orphan*/  FSMC_ExtendedMode; int /*<<< orphan*/  FSMC_WaitSignal; int /*<<< orphan*/  FSMC_WriteOperation; int /*<<< orphan*/  FSMC_WaitSignalActive; int /*<<< orphan*/  FSMC_WrapMode; int /*<<< orphan*/  FSMC_WaitSignalPolarity; int /*<<< orphan*/  FSMC_AsynchronousWait; int /*<<< orphan*/  FSMC_BurstAccessMode; int /*<<< orphan*/  FSMC_MemoryDataWidth; int /*<<< orphan*/  FSMC_MemoryType; int /*<<< orphan*/  FSMC_DataAddressMux; int /*<<< orphan*/  FSMC_Bank; } ;
struct TYPE_6__ {int FSMC_AddressSetupTime; int FSMC_AddressHoldTime; int FSMC_DataSetupTime; int FSMC_BusTurnAroundDuration; int FSMC_CLKDivision; int FSMC_DataLatency; void* FSMC_AccessMode; } ;
struct TYPE_5__ {int FSMC_AddressSetupTime; int FSMC_AddressHoldTime; int FSMC_DataSetupTime; int FSMC_BusTurnAroundDuration; int FSMC_CLKDivision; int FSMC_DataLatency; void* FSMC_AccessMode; } ;
typedef  TYPE_3__ FSMC_NORSRAMInitTypeDef ;

/* Variables and functions */
 void* FSMC_AccessMode_A ; 
 int /*<<< orphan*/  FSMC_AsynchronousWait_Disable ; 
 int /*<<< orphan*/  FSMC_Bank1_NORSRAM1 ; 
 int /*<<< orphan*/  FSMC_BurstAccessMode_Disable ; 
 int /*<<< orphan*/  FSMC_DataAddressMux_Enable ; 
 int /*<<< orphan*/  FSMC_ExtendedMode_Disable ; 
 int /*<<< orphan*/  FSMC_MemoryDataWidth_8b ; 
 int /*<<< orphan*/  FSMC_MemoryType_SRAM ; 
 int /*<<< orphan*/  FSMC_WaitSignalActive_BeforeWaitState ; 
 int /*<<< orphan*/  FSMC_WaitSignalPolarity_Low ; 
 int /*<<< orphan*/  FSMC_WaitSignal_Enable ; 
 int /*<<< orphan*/  FSMC_WrapMode_Disable ; 
 int /*<<< orphan*/  FSMC_WriteBurst_Disable ; 
 int /*<<< orphan*/  FSMC_WriteOperation_Enable ; 

void FSMC_NORSRAMStructInit(FSMC_NORSRAMInitTypeDef* FSMC_NORSRAMInitStruct)
{  
  /* Reset NOR/SRAM Init structure parameters values */
  FSMC_NORSRAMInitStruct->FSMC_Bank = FSMC_Bank1_NORSRAM1;
  FSMC_NORSRAMInitStruct->FSMC_DataAddressMux = FSMC_DataAddressMux_Enable;
  FSMC_NORSRAMInitStruct->FSMC_MemoryType = FSMC_MemoryType_SRAM;
  FSMC_NORSRAMInitStruct->FSMC_MemoryDataWidth = FSMC_MemoryDataWidth_8b;
  FSMC_NORSRAMInitStruct->FSMC_BurstAccessMode = FSMC_BurstAccessMode_Disable;
  FSMC_NORSRAMInitStruct->FSMC_AsynchronousWait = FSMC_AsynchronousWait_Disable;
  FSMC_NORSRAMInitStruct->FSMC_WaitSignalPolarity = FSMC_WaitSignalPolarity_Low;
  FSMC_NORSRAMInitStruct->FSMC_WrapMode = FSMC_WrapMode_Disable;
  FSMC_NORSRAMInitStruct->FSMC_WaitSignalActive = FSMC_WaitSignalActive_BeforeWaitState;
  FSMC_NORSRAMInitStruct->FSMC_WriteOperation = FSMC_WriteOperation_Enable;
  FSMC_NORSRAMInitStruct->FSMC_WaitSignal = FSMC_WaitSignal_Enable;
  FSMC_NORSRAMInitStruct->FSMC_ExtendedMode = FSMC_ExtendedMode_Disable;
  FSMC_NORSRAMInitStruct->FSMC_WriteBurst = FSMC_WriteBurst_Disable;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_AddressSetupTime = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_AddressHoldTime = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_DataSetupTime = 0xFF;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_BusTurnAroundDuration = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_CLKDivision = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_DataLatency = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_ReadWriteTimingStruct->FSMC_AccessMode = FSMC_AccessMode_A; 
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_AddressSetupTime = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_AddressHoldTime = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_DataSetupTime = 0xFF;
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_BusTurnAroundDuration = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_CLKDivision = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_DataLatency = 0xF;
  FSMC_NORSRAMInitStruct->FSMC_WriteTimingStruct->FSMC_AccessMode = FSMC_AccessMode_A;
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
          int _len_FSMC_NORSRAMInitStruct0 = 1;
          struct TYPE_7__ * FSMC_NORSRAMInitStruct = (struct TYPE_7__ *) malloc(_len_FSMC_NORSRAMInitStruct0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_FSMC_NORSRAMInitStruct0; _i0++) {
              int _len_FSMC_NORSRAMInitStruct__i0__FSMC_WriteTimingStruct0 = 1;
          FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct = (struct TYPE_6__ *) malloc(_len_FSMC_NORSRAMInitStruct__i0__FSMC_WriteTimingStruct0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_FSMC_NORSRAMInitStruct__i0__FSMC_WriteTimingStruct0; _j0++) {
            FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct->FSMC_AddressSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct->FSMC_AddressHoldTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct->FSMC_DataSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct->FSMC_BusTurnAroundDuration = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct->FSMC_CLKDivision = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteTimingStruct->FSMC_DataLatency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FSMC_NORSRAMInitStruct__i0__FSMC_ReadWriteTimingStruct0 = 1;
          FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct = (struct TYPE_5__ *) malloc(_len_FSMC_NORSRAMInitStruct__i0__FSMC_ReadWriteTimingStruct0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_FSMC_NORSRAMInitStruct__i0__FSMC_ReadWriteTimingStruct0; _j0++) {
            FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct->FSMC_AddressSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct->FSMC_AddressHoldTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct->FSMC_DataSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct->FSMC_BusTurnAroundDuration = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct->FSMC_CLKDivision = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_ReadWriteTimingStruct->FSMC_DataLatency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteBurst = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_ExtendedMode = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WaitSignal = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WriteOperation = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WaitSignalActive = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WrapMode = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_WaitSignalPolarity = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_AsynchronousWait = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_BurstAccessMode = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_MemoryDataWidth = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_MemoryType = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_DataAddressMux = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_NORSRAMInitStruct[_i0].FSMC_Bank = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FSMC_NORSRAMStructInit(FSMC_NORSRAMInitStruct);
          for(int _aux = 0; _aux < _len_FSMC_NORSRAMInitStruct0; _aux++) {
          free(FSMC_NORSRAMInitStruct[_aux].FSMC_WriteTimingStruct);
          }
          for(int _aux = 0; _aux < _len_FSMC_NORSRAMInitStruct0; _aux++) {
          free(FSMC_NORSRAMInitStruct[_aux].FSMC_ReadWriteTimingStruct);
          }
          free(FSMC_NORSRAMInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
