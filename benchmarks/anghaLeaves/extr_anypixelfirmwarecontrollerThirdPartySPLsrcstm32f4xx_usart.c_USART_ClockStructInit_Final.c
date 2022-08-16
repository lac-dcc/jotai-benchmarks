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
struct TYPE_3__ {int /*<<< orphan*/  USART_LastBit; int /*<<< orphan*/  USART_CPHA; int /*<<< orphan*/  USART_CPOL; int /*<<< orphan*/  USART_Clock; } ;
typedef  TYPE_1__ USART_ClockInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  USART_CPHA_1Edge ; 
 int /*<<< orphan*/  USART_CPOL_Low ; 
 int /*<<< orphan*/  USART_Clock_Disable ; 
 int /*<<< orphan*/  USART_LastBit_Disable ; 

void USART_ClockStructInit(USART_ClockInitTypeDef* USART_ClockInitStruct)
{
  /* USART_ClockInitStruct members default value */
  USART_ClockInitStruct->USART_Clock = USART_Clock_Disable;
  USART_ClockInitStruct->USART_CPOL = USART_CPOL_Low;
  USART_ClockInitStruct->USART_CPHA = USART_CPHA_1Edge;
  USART_ClockInitStruct->USART_LastBit = USART_LastBit_Disable;
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
          int _len_USART_ClockInitStruct0 = 1;
          struct TYPE_3__ * USART_ClockInitStruct = (struct TYPE_3__ *) malloc(_len_USART_ClockInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_USART_ClockInitStruct0; _i0++) {
            USART_ClockInitStruct[_i0].USART_LastBit = ((-2 * (next_i()%2)) + 1) * next_i();
        USART_ClockInitStruct[_i0].USART_CPHA = ((-2 * (next_i()%2)) + 1) * next_i();
        USART_ClockInitStruct[_i0].USART_CPOL = ((-2 * (next_i()%2)) + 1) * next_i();
        USART_ClockInitStruct[_i0].USART_Clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          USART_ClockStructInit(USART_ClockInitStruct);
          free(USART_ClockInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
