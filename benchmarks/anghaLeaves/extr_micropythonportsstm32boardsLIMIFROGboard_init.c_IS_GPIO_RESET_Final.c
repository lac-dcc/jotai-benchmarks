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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int uint32_t ;
typedef  int uint16_t ;
struct TYPE_3__ {int IDR; } ;
typedef  TYPE_1__ GPIO_TypeDef ;
typedef  scalar_t__ GPIO_PinState ;

/* Variables and functions */
 scalar_t__ GPIO_PIN_RESET ; 
 scalar_t__ GPIO_PIN_SET ; 

__attribute__((used)) static inline int  IS_GPIO_RESET(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
    GPIO_PinState bitstatus;
      if((GPIOx->IDR & GPIO_Pin) != (uint32_t)GPIO_PIN_RESET)
            {
                    bitstatus = GPIO_PIN_SET;
                      }
        else
              {
                      bitstatus = GPIO_PIN_RESET;
                        }
          return (bitstatus==GPIO_PIN_RESET);
}

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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int GPIO_Pin = 100;
        
          int _len_GPIOx0 = 1;
          struct TYPE_3__ * GPIOx = (struct TYPE_3__ *) malloc(_len_GPIOx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_GPIOx0; _i0++) {
              GPIOx[_i0].IDR = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IS_GPIO_RESET(GPIOx,GPIO_Pin);
          printf("%d\n", benchRet); 
          free(GPIOx);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int GPIO_Pin = 255;
        
          int _len_GPIOx0 = 65025;
          struct TYPE_3__ * GPIOx = (struct TYPE_3__ *) malloc(_len_GPIOx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_GPIOx0; _i0++) {
              GPIOx[_i0].IDR = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IS_GPIO_RESET(GPIOx,GPIO_Pin);
          printf("%d\n", benchRet); 
          free(GPIOx);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int GPIO_Pin = 10;
        
          int _len_GPIOx0 = 100;
          struct TYPE_3__ * GPIOx = (struct TYPE_3__ *) malloc(_len_GPIOx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_GPIOx0; _i0++) {
              GPIOx[_i0].IDR = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IS_GPIO_RESET(GPIOx,GPIO_Pin);
          printf("%d\n", benchRet); 
          free(GPIOx);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int GPIO_Pin = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_GPIOx0 = 1;
          struct TYPE_3__ * GPIOx = (struct TYPE_3__ *) malloc(_len_GPIOx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_GPIOx0; _i0++) {
              GPIOx[_i0].IDR = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IS_GPIO_RESET(GPIOx,GPIO_Pin);
          printf("%d\n", benchRet); 
          free(GPIOx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
