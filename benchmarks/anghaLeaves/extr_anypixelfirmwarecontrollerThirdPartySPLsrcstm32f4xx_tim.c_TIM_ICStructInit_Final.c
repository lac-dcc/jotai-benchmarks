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
struct TYPE_3__ {int TIM_ICFilter; int /*<<< orphan*/  TIM_ICPrescaler; int /*<<< orphan*/  TIM_ICSelection; int /*<<< orphan*/  TIM_ICPolarity; int /*<<< orphan*/  TIM_Channel; } ;
typedef  TYPE_1__ TIM_ICInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  TIM_Channel_1 ; 
 int /*<<< orphan*/  TIM_ICPSC_DIV1 ; 
 int /*<<< orphan*/  TIM_ICPolarity_Rising ; 
 int /*<<< orphan*/  TIM_ICSelection_DirectTI ; 

void TIM_ICStructInit(TIM_ICInitTypeDef* TIM_ICInitStruct)
{
  /* Set the default configuration */
  TIM_ICInitStruct->TIM_Channel = TIM_Channel_1;
  TIM_ICInitStruct->TIM_ICPolarity = TIM_ICPolarity_Rising;
  TIM_ICInitStruct->TIM_ICSelection = TIM_ICSelection_DirectTI;
  TIM_ICInitStruct->TIM_ICPrescaler = TIM_ICPSC_DIV1;
  TIM_ICInitStruct->TIM_ICFilter = 0x00;
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
          int _len_TIM_ICInitStruct0 = 1;
          struct TYPE_3__ * TIM_ICInitStruct = (struct TYPE_3__ *) malloc(_len_TIM_ICInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIM_ICInitStruct0; _i0++) {
            TIM_ICInitStruct[_i0].TIM_ICFilter = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_ICInitStruct[_i0].TIM_ICPrescaler = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_ICInitStruct[_i0].TIM_ICSelection = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_ICInitStruct[_i0].TIM_ICPolarity = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_ICInitStruct[_i0].TIM_Channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIM_ICStructInit(TIM_ICInitStruct);
          free(TIM_ICInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
