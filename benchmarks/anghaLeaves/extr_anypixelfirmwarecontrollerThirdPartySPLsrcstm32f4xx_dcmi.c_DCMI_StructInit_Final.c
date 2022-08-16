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
struct TYPE_3__ {int /*<<< orphan*/  DCMI_ExtendedDataMode; int /*<<< orphan*/  DCMI_CaptureRate; int /*<<< orphan*/  DCMI_HSPolarity; int /*<<< orphan*/  DCMI_VSPolarity; int /*<<< orphan*/  DCMI_PCKPolarity; int /*<<< orphan*/  DCMI_SynchroMode; int /*<<< orphan*/  DCMI_CaptureMode; } ;
typedef  TYPE_1__ DCMI_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  DCMI_CaptureMode_Continuous ; 
 int /*<<< orphan*/  DCMI_CaptureRate_All_Frame ; 
 int /*<<< orphan*/  DCMI_ExtendedDataMode_8b ; 
 int /*<<< orphan*/  DCMI_HSPolarity_Low ; 
 int /*<<< orphan*/  DCMI_PCKPolarity_Falling ; 
 int /*<<< orphan*/  DCMI_SynchroMode_Hardware ; 
 int /*<<< orphan*/  DCMI_VSPolarity_Low ; 

void DCMI_StructInit(DCMI_InitTypeDef* DCMI_InitStruct)
{
  /* Set the default configuration */
  DCMI_InitStruct->DCMI_CaptureMode = DCMI_CaptureMode_Continuous;
  DCMI_InitStruct->DCMI_SynchroMode = DCMI_SynchroMode_Hardware;
  DCMI_InitStruct->DCMI_PCKPolarity = DCMI_PCKPolarity_Falling;
  DCMI_InitStruct->DCMI_VSPolarity = DCMI_VSPolarity_Low;
  DCMI_InitStruct->DCMI_HSPolarity = DCMI_HSPolarity_Low;
  DCMI_InitStruct->DCMI_CaptureRate = DCMI_CaptureRate_All_Frame;
  DCMI_InitStruct->DCMI_ExtendedDataMode = DCMI_ExtendedDataMode_8b;
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
          int _len_DCMI_InitStruct0 = 1;
          struct TYPE_3__ * DCMI_InitStruct = (struct TYPE_3__ *) malloc(_len_DCMI_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DCMI_InitStruct0; _i0++) {
            DCMI_InitStruct[_i0].DCMI_ExtendedDataMode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_InitStruct[_i0].DCMI_CaptureRate = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_InitStruct[_i0].DCMI_HSPolarity = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_InitStruct[_i0].DCMI_VSPolarity = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_InitStruct[_i0].DCMI_PCKPolarity = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_InitStruct[_i0].DCMI_SynchroMode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_InitStruct[_i0].DCMI_CaptureMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DCMI_StructInit(DCMI_InitStruct);
          free(DCMI_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
