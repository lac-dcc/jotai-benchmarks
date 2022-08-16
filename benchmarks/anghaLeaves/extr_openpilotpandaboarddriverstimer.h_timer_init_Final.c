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
struct TYPE_3__ {int PSC; scalar_t__ SR; int /*<<< orphan*/  CR1; int /*<<< orphan*/  DIER; } ;
typedef  TYPE_1__ TIM_TypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  TIM_CR1_CEN ; 
 int /*<<< orphan*/  TIM_DIER_UIE ; 

void timer_init(TIM_TypeDef *TIM, int psc) {
  TIM->PSC = psc-1;
  TIM->DIER = TIM_DIER_UIE;
  TIM->CR1 = TIM_CR1_CEN;
  TIM->SR = 0;
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
          int psc = 100;
          int _len_TIM0 = 1;
          struct TYPE_3__ * TIM = (struct TYPE_3__ *) malloc(_len_TIM0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIM0; _i0++) {
            TIM[_i0].PSC = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM[_i0].SR = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM[_i0].CR1 = ((-2 * (next_i()%2)) + 1) * next_i();
        TIM[_i0].DIER = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          timer_init(TIM,psc);
          free(TIM);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
