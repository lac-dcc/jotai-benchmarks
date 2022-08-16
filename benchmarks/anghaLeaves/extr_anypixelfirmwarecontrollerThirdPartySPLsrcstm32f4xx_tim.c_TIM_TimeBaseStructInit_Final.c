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
struct TYPE_3__ {int TIM_Period; int TIM_Prescaler; int TIM_RepetitionCounter; int /*<<< orphan*/  TIM_CounterMode; int /*<<< orphan*/  TIM_ClockDivision; } ;
typedef  TYPE_1__ TIM_TimeBaseInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  TIM_CKD_DIV1 ; 
 int /*<<< orphan*/  TIM_CounterMode_Up ; 

void TIM_TimeBaseStructInit(TIM_TimeBaseInitTypeDef* TIM_TimeBaseInitStruct)
{
  /* Set the default configuration */
  TIM_TimeBaseInitStruct->TIM_Period = 0xFFFFFFFF;
  TIM_TimeBaseInitStruct->TIM_Prescaler = 0x0000;
  TIM_TimeBaseInitStruct->TIM_ClockDivision = TIM_CKD_DIV1;
  TIM_TimeBaseInitStruct->TIM_CounterMode = TIM_CounterMode_Up;
  TIM_TimeBaseInitStruct->TIM_RepetitionCounter = 0x0000;
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
          int _len_TIM_TimeBaseInitStruct0 = 1;
          struct TYPE_3__ * TIM_TimeBaseInitStruct = (struct TYPE_3__ *) malloc(_len_TIM_TimeBaseInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIM_TimeBaseInitStruct0; _i0++) {
            TIM_TimeBaseInitStruct[_i0].TIM_Period = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_TimeBaseInitStruct[_i0].TIM_Prescaler = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_TimeBaseInitStruct[_i0].TIM_RepetitionCounter = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_TimeBaseInitStruct[_i0].TIM_CounterMode = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_TimeBaseInitStruct[_i0].TIM_ClockDivision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIM_TimeBaseStructInit(TIM_TimeBaseInitStruct);
          free(TIM_TimeBaseInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
