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
struct TYPE_3__ {int /*<<< orphan*/  ADC_ScanDirection; int /*<<< orphan*/  ADC_DataAlign; int /*<<< orphan*/  ADC_ExternalTrigConv; int /*<<< orphan*/  ADC_ExternalTrigConvEdge; int /*<<< orphan*/  ADC_ContinuousConvMode; int /*<<< orphan*/  ADC_Resolution; } ;
typedef  TYPE_1__ ADC_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  ADC_DataAlign_Right ; 
 int /*<<< orphan*/  ADC_ExternalTrigConvEdge_None ; 
 int /*<<< orphan*/  ADC_ExternalTrigConv_T1_TRGO ; 
 int /*<<< orphan*/  ADC_Resolution_12b ; 
 int /*<<< orphan*/  ADC_ScanDirection_Upward ; 
 int /*<<< orphan*/  DISABLE ; 

void ADC_StructInit(ADC_InitTypeDef* ADC_InitStruct)
{
  /* Reset ADC init structure parameters values */
  /* Initialize the ADC_Resolution member */
  ADC_InitStruct->ADC_Resolution = ADC_Resolution_12b;

   /* Initialize the ADC_ContinuousConvMode member */
  ADC_InitStruct->ADC_ContinuousConvMode = DISABLE;

  /* Initialize the ADC_ExternalTrigConvEdge member */
  ADC_InitStruct->ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;

  /* Initialize the ADC_ExternalTrigConv member */
  ADC_InitStruct->ADC_ExternalTrigConv = ADC_ExternalTrigConv_T1_TRGO;

  /* Initialize the ADC_DataAlign member */
  ADC_InitStruct->ADC_DataAlign = ADC_DataAlign_Right;

  /* Initialize the ADC_ScanDirection member */
  ADC_InitStruct->ADC_ScanDirection = ADC_ScanDirection_Upward;
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
          int _len_ADC_InitStruct0 = 1;
          struct TYPE_3__ * ADC_InitStruct = (struct TYPE_3__ *) malloc(_len_ADC_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ADC_InitStruct0; _i0++) {
            ADC_InitStruct[_i0].ADC_ScanDirection = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_InitStruct[_i0].ADC_DataAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_InitStruct[_i0].ADC_ExternalTrigConv = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_InitStruct[_i0].ADC_ExternalTrigConvEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_InitStruct[_i0].ADC_ContinuousConvMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_InitStruct[_i0].ADC_Resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ADC_StructInit(ADC_InitStruct);
          free(ADC_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
