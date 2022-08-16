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
struct TYPE_3__ {int TIM_DeadTime; int /*<<< orphan*/  TIM_AutomaticOutput; int /*<<< orphan*/  TIM_BreakPolarity; int /*<<< orphan*/  TIM_Break; int /*<<< orphan*/  TIM_LOCKLevel; int /*<<< orphan*/  TIM_OSSIState; int /*<<< orphan*/  TIM_OSSRState; } ;
typedef  TYPE_1__ TIM_BDTRInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  TIM_AutomaticOutput_Disable ; 
 int /*<<< orphan*/  TIM_BreakPolarity_Low ; 
 int /*<<< orphan*/  TIM_Break_Disable ; 
 int /*<<< orphan*/  TIM_LOCKLevel_OFF ; 
 int /*<<< orphan*/  TIM_OSSIState_Disable ; 
 int /*<<< orphan*/  TIM_OSSRState_Disable ; 

void TIM_BDTRStructInit(TIM_BDTRInitTypeDef* TIM_BDTRInitStruct)
{
  /* Set the default configuration */
  TIM_BDTRInitStruct->TIM_OSSRState = TIM_OSSRState_Disable;
  TIM_BDTRInitStruct->TIM_OSSIState = TIM_OSSIState_Disable;
  TIM_BDTRInitStruct->TIM_LOCKLevel = TIM_LOCKLevel_OFF;
  TIM_BDTRInitStruct->TIM_DeadTime = 0x00;
  TIM_BDTRInitStruct->TIM_Break = TIM_Break_Disable;
  TIM_BDTRInitStruct->TIM_BreakPolarity = TIM_BreakPolarity_Low;
  TIM_BDTRInitStruct->TIM_AutomaticOutput = TIM_AutomaticOutput_Disable;
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
          int _len_TIM_BDTRInitStruct0 = 1;
          struct TYPE_3__ * TIM_BDTRInitStruct = (struct TYPE_3__ *) malloc(_len_TIM_BDTRInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIM_BDTRInitStruct0; _i0++) {
            TIM_BDTRInitStruct[_i0].TIM_DeadTime = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_BDTRInitStruct[_i0].TIM_AutomaticOutput = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_BDTRInitStruct[_i0].TIM_BreakPolarity = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_BDTRInitStruct[_i0].TIM_Break = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_BDTRInitStruct[_i0].TIM_LOCKLevel = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_BDTRInitStruct[_i0].TIM_OSSIState = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_BDTRInitStruct[_i0].TIM_OSSRState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIM_BDTRStructInit(TIM_BDTRInitStruct);
          free(TIM_BDTRInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
