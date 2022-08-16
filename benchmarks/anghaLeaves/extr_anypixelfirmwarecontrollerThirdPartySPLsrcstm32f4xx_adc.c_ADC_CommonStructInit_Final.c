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
struct TYPE_3__ {int /*<<< orphan*/  ADC_TwoSamplingDelay; int /*<<< orphan*/  ADC_DMAAccessMode; int /*<<< orphan*/  ADC_Prescaler; int /*<<< orphan*/  ADC_Mode; } ;
typedef  TYPE_1__ ADC_CommonInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  ADC_DMAAccessMode_Disabled ; 
 int /*<<< orphan*/  ADC_Mode_Independent ; 
 int /*<<< orphan*/  ADC_Prescaler_Div2 ; 
 int /*<<< orphan*/  ADC_TwoSamplingDelay_5Cycles ; 

void ADC_CommonStructInit(ADC_CommonInitTypeDef* ADC_CommonInitStruct)
{
  /* Initialize the ADC_Mode member */
  ADC_CommonInitStruct->ADC_Mode = ADC_Mode_Independent;

  /* initialize the ADC_Prescaler member */
  ADC_CommonInitStruct->ADC_Prescaler = ADC_Prescaler_Div2;

  /* Initialize the ADC_DMAAccessMode member */
  ADC_CommonInitStruct->ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled;

  /* Initialize the ADC_TwoSamplingDelay member */
  ADC_CommonInitStruct->ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;
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
          int _len_ADC_CommonInitStruct0 = 1;
          struct TYPE_3__ * ADC_CommonInitStruct = (struct TYPE_3__ *) malloc(_len_ADC_CommonInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ADC_CommonInitStruct0; _i0++) {
            ADC_CommonInitStruct[_i0].ADC_TwoSamplingDelay = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_CommonInitStruct[_i0].ADC_DMAAccessMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_CommonInitStruct[_i0].ADC_Prescaler = ((-2 * (next_i()%2)) + 1) * next_i();
        ADC_CommonInitStruct[_i0].ADC_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ADC_CommonStructInit(ADC_CommonInitStruct);
          free(ADC_CommonInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
