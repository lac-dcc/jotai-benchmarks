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
struct TYPE_3__ {int TIM_Pulse; int /*<<< orphan*/  TIM_OCNIdleState; int /*<<< orphan*/  TIM_OCIdleState; void* TIM_OCNPolarity; void* TIM_OCPolarity; int /*<<< orphan*/  TIM_OutputNState; int /*<<< orphan*/  TIM_OutputState; int /*<<< orphan*/  TIM_OCMode; } ;
typedef  TYPE_1__ TIM_OCInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  TIM_OCIdleState_Reset ; 
 int /*<<< orphan*/  TIM_OCMode_Timing ; 
 int /*<<< orphan*/  TIM_OCNIdleState_Reset ; 
 void* TIM_OCPolarity_High ; 
 int /*<<< orphan*/  TIM_OutputNState_Disable ; 
 int /*<<< orphan*/  TIM_OutputState_Disable ; 

void TIM_OCStructInit(TIM_OCInitTypeDef* TIM_OCInitStruct)
{
  /* Set the default configuration */
  TIM_OCInitStruct->TIM_OCMode = TIM_OCMode_Timing;
  TIM_OCInitStruct->TIM_OutputState = TIM_OutputState_Disable;
  TIM_OCInitStruct->TIM_OutputNState = TIM_OutputNState_Disable;
  TIM_OCInitStruct->TIM_Pulse = 0x00000000;
  TIM_OCInitStruct->TIM_OCPolarity = TIM_OCPolarity_High;
  TIM_OCInitStruct->TIM_OCNPolarity = TIM_OCPolarity_High;
  TIM_OCInitStruct->TIM_OCIdleState = TIM_OCIdleState_Reset;
  TIM_OCInitStruct->TIM_OCNIdleState = TIM_OCNIdleState_Reset;
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
          int _len_TIM_OCInitStruct0 = 1;
          struct TYPE_3__ * TIM_OCInitStruct = (struct TYPE_3__ *) malloc(_len_TIM_OCInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIM_OCInitStruct0; _i0++) {
            TIM_OCInitStruct[_i0].TIM_Pulse = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_OCInitStruct[_i0].TIM_OCNIdleState = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_OCInitStruct[_i0].TIM_OCIdleState = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_OCInitStruct[_i0].TIM_OutputNState = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_OCInitStruct[_i0].TIM_OutputState = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM_OCInitStruct[_i0].TIM_OCMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TIM_OCStructInit(TIM_OCInitStruct);
          free(TIM_OCInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
