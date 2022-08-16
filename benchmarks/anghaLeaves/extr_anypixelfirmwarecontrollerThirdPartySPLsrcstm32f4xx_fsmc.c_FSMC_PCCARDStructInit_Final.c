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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int FSMC_TCLRSetupTime; int FSMC_TARSetupTime; TYPE_3__* FSMC_IOSpaceTimingStruct; TYPE_2__* FSMC_AttributeSpaceTimingStruct; TYPE_1__* FSMC_CommonSpaceTimingStruct; int /*<<< orphan*/  FSMC_Waitfeature; } ;
struct TYPE_8__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
struct TYPE_7__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
struct TYPE_6__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
typedef  TYPE_4__ FSMC_PCCARDInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  FSMC_Waitfeature_Disable ; 

void FSMC_PCCARDStructInit(FSMC_PCCARDInitTypeDef* FSMC_PCCARDInitStruct)
{
  /* Reset PCCARD Init structure parameters values */
  FSMC_PCCARDInitStruct->FSMC_Waitfeature = FSMC_Waitfeature_Disable;
  FSMC_PCCARDInitStruct->FSMC_TCLRSetupTime = 0x0;
  FSMC_PCCARDInitStruct->FSMC_TARSetupTime = 0x0;
  FSMC_PCCARDInitStruct->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;	
  FSMC_PCCARDInitStruct->FSMC_IOSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_IOSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_IOSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  FSMC_PCCARDInitStruct->FSMC_IOSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
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
          int _len_FSMC_PCCARDInitStruct0 = 1;
          struct TYPE_9__ * FSMC_PCCARDInitStruct = (struct TYPE_9__ *) malloc(_len_FSMC_PCCARDInitStruct0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_FSMC_PCCARDInitStruct0; _i0++) {
            FSMC_PCCARDInitStruct[_i0].FSMC_TCLRSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_TARSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_FSMC_PCCARDInitStruct__i0__FSMC_IOSpaceTimingStruct0 = 1;
          FSMC_PCCARDInitStruct[_i0].FSMC_IOSpaceTimingStruct = (struct TYPE_8__ *) malloc(_len_FSMC_PCCARDInitStruct__i0__FSMC_IOSpaceTimingStruct0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_FSMC_PCCARDInitStruct__i0__FSMC_IOSpaceTimingStruct0; _j0++) {
            FSMC_PCCARDInitStruct[_i0].FSMC_IOSpaceTimingStruct->FSMC_SetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_IOSpaceTimingStruct->FSMC_WaitSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_IOSpaceTimingStruct->FSMC_HoldSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_IOSpaceTimingStruct->FSMC_HiZSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FSMC_PCCARDInitStruct__i0__FSMC_AttributeSpaceTimingStruct0 = 1;
          FSMC_PCCARDInitStruct[_i0].FSMC_AttributeSpaceTimingStruct = (struct TYPE_7__ *) malloc(_len_FSMC_PCCARDInitStruct__i0__FSMC_AttributeSpaceTimingStruct0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_FSMC_PCCARDInitStruct__i0__FSMC_AttributeSpaceTimingStruct0; _j0++) {
            FSMC_PCCARDInitStruct[_i0].FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FSMC_PCCARDInitStruct__i0__FSMC_CommonSpaceTimingStruct0 = 1;
          FSMC_PCCARDInitStruct[_i0].FSMC_CommonSpaceTimingStruct = (struct TYPE_6__ *) malloc(_len_FSMC_PCCARDInitStruct__i0__FSMC_CommonSpaceTimingStruct0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_FSMC_PCCARDInitStruct__i0__FSMC_CommonSpaceTimingStruct0; _j0++) {
            FSMC_PCCARDInitStruct[_i0].FSMC_CommonSpaceTimingStruct->FSMC_SetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
        FSMC_PCCARDInitStruct[_i0].FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        FSMC_PCCARDInitStruct[_i0].FSMC_Waitfeature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FSMC_PCCARDStructInit(FSMC_PCCARDInitStruct);
          for(int _aux = 0; _aux < _len_FSMC_PCCARDInitStruct0; _aux++) {
          free(FSMC_PCCARDInitStruct[_aux].FSMC_IOSpaceTimingStruct);
          }
          for(int _aux = 0; _aux < _len_FSMC_PCCARDInitStruct0; _aux++) {
          free(FSMC_PCCARDInitStruct[_aux].FSMC_AttributeSpaceTimingStruct);
          }
          for(int _aux = 0; _aux < _len_FSMC_PCCARDInitStruct0; _aux++) {
          free(FSMC_PCCARDInitStruct[_aux].FSMC_CommonSpaceTimingStruct);
          }
          free(FSMC_PCCARDInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
