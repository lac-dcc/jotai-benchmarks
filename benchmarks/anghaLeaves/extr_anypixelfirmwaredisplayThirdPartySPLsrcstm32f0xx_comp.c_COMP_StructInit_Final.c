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
struct TYPE_3__ {int /*<<< orphan*/  COMP_Mode; int /*<<< orphan*/  COMP_Hysteresis; int /*<<< orphan*/  COMP_OutputPol; int /*<<< orphan*/  COMP_Output; int /*<<< orphan*/  COMP_InvertingInput; } ;
typedef  TYPE_1__ COMP_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  COMP_Hysteresis_No ; 
 int /*<<< orphan*/  COMP_InvertingInput_1_4VREFINT ; 
 int /*<<< orphan*/  COMP_Mode_UltraLowPower ; 
 int /*<<< orphan*/  COMP_OutputPol_NonInverted ; 
 int /*<<< orphan*/  COMP_Output_None ; 

void COMP_StructInit(COMP_InitTypeDef* COMP_InitStruct)
{
  COMP_InitStruct->COMP_InvertingInput = COMP_InvertingInput_1_4VREFINT;
  COMP_InitStruct->COMP_Output = COMP_Output_None;
  COMP_InitStruct->COMP_OutputPol = COMP_OutputPol_NonInverted;
  COMP_InitStruct->COMP_Hysteresis = COMP_Hysteresis_No;
  COMP_InitStruct->COMP_Mode = COMP_Mode_UltraLowPower;
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
          int _len_COMP_InitStruct0 = 1;
          struct TYPE_3__ * COMP_InitStruct = (struct TYPE_3__ *) malloc(_len_COMP_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_COMP_InitStruct0; _i0++) {
            COMP_InitStruct[_i0].COMP_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        COMP_InitStruct[_i0].COMP_Hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        COMP_InitStruct[_i0].COMP_OutputPol = ((-2 * (next_i()%2)) + 1) * next_i();
        COMP_InitStruct[_i0].COMP_Output = ((-2 * (next_i()%2)) + 1) * next_i();
        COMP_InitStruct[_i0].COMP_InvertingInput = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          COMP_StructInit(COMP_InitStruct);
          free(COMP_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
