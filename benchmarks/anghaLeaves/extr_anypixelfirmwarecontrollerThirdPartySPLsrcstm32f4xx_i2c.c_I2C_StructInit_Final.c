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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_3__ {int I2C_ClockSpeed; int /*<<< orphan*/  I2C_AcknowledgedAddress; int /*<<< orphan*/  I2C_Ack; scalar_t__ I2C_OwnAddress1; int /*<<< orphan*/  I2C_DutyCycle; int /*<<< orphan*/  I2C_Mode; } ;
typedef  TYPE_1__ I2C_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  I2C_Ack_Disable ; 
 int /*<<< orphan*/  I2C_AcknowledgedAddress_7bit ; 
 int /*<<< orphan*/  I2C_DutyCycle_2 ; 
 int /*<<< orphan*/  I2C_Mode_I2C ; 

void I2C_StructInit(I2C_InitTypeDef* I2C_InitStruct)
{
/*---------------- Reset I2C init structure parameters values ----------------*/
  /* initialize the I2C_ClockSpeed member */
  I2C_InitStruct->I2C_ClockSpeed = 5000;
  /* Initialize the I2C_Mode member */
  I2C_InitStruct->I2C_Mode = I2C_Mode_I2C;
  /* Initialize the I2C_DutyCycle member */
  I2C_InitStruct->I2C_DutyCycle = I2C_DutyCycle_2;
  /* Initialize the I2C_OwnAddress1 member */
  I2C_InitStruct->I2C_OwnAddress1 = 0;
  /* Initialize the I2C_Ack member */
  I2C_InitStruct->I2C_Ack = I2C_Ack_Disable;
  /* Initialize the I2C_AcknowledgedAddress member */
  I2C_InitStruct->I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_I2C_InitStruct0 = 65025;
          struct TYPE_3__ * I2C_InitStruct = (struct TYPE_3__ *) malloc(_len_I2C_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_I2C_InitStruct0; _i0++) {
              I2C_InitStruct[_i0].I2C_ClockSpeed = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_AcknowledgedAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_Ack = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_OwnAddress1 = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_DutyCycle = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          I2C_StructInit(I2C_InitStruct);
          free(I2C_InitStruct);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_I2C_InitStruct0 = 100;
          struct TYPE_3__ * I2C_InitStruct = (struct TYPE_3__ *) malloc(_len_I2C_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_I2C_InitStruct0; _i0++) {
              I2C_InitStruct[_i0].I2C_ClockSpeed = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_AcknowledgedAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_Ack = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_OwnAddress1 = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_DutyCycle = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          I2C_StructInit(I2C_InitStruct);
          free(I2C_InitStruct);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_I2C_InitStruct0 = 1;
          struct TYPE_3__ * I2C_InitStruct = (struct TYPE_3__ *) malloc(_len_I2C_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_I2C_InitStruct0; _i0++) {
              I2C_InitStruct[_i0].I2C_ClockSpeed = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_AcknowledgedAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_Ack = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_OwnAddress1 = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_DutyCycle = ((-2 * (next_i()%2)) + 1) * next_i();
          I2C_InitStruct[_i0].I2C_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          I2C_StructInit(I2C_InitStruct);
          free(I2C_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
