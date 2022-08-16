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
struct TYPE_3__ {int /*<<< orphan*/  GPIO_PuPd; int /*<<< orphan*/  GPIO_OType; int /*<<< orphan*/  GPIO_Speed; int /*<<< orphan*/  GPIO_Mode; int /*<<< orphan*/  GPIO_Pin; } ;
typedef  TYPE_1__ GPIO_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  GPIO_Mode_IN ; 
 int /*<<< orphan*/  GPIO_OType_PP ; 
 int /*<<< orphan*/  GPIO_Pin_All ; 
 int /*<<< orphan*/  GPIO_PuPd_NOPULL ; 
 int /*<<< orphan*/  GPIO_Speed_2MHz ; 

void GPIO_StructInit(GPIO_InitTypeDef* GPIO_InitStruct)
{
  /* Reset GPIO init structure parameters values */
  GPIO_InitStruct->GPIO_Pin  = GPIO_Pin_All;
  GPIO_InitStruct->GPIO_Mode = GPIO_Mode_IN;
  GPIO_InitStruct->GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStruct->GPIO_OType = GPIO_OType_PP;
  GPIO_InitStruct->GPIO_PuPd = GPIO_PuPd_NOPULL;
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
          int _len_GPIO_InitStruct0 = 1;
          struct TYPE_3__ * GPIO_InitStruct = (struct TYPE_3__ *) malloc(_len_GPIO_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_GPIO_InitStruct0; _i0++) {
            GPIO_InitStruct[_i0].GPIO_PuPd = ((-2 * (next_i()%2)) + 1) * next_i();
        GPIO_InitStruct[_i0].GPIO_OType = ((-2 * (next_i()%2)) + 1) * next_i();
        GPIO_InitStruct[_i0].GPIO_Speed = ((-2 * (next_i()%2)) + 1) * next_i();
        GPIO_InitStruct[_i0].GPIO_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        GPIO_InitStruct[_i0].GPIO_Pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          GPIO_StructInit(GPIO_InitStruct);
          free(GPIO_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
