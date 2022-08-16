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
struct TYPE_3__ {int /*<<< orphan*/  I2S_CPOL; int /*<<< orphan*/  I2S_AudioFreq; int /*<<< orphan*/  I2S_MCLKOutput; int /*<<< orphan*/  I2S_DataFormat; int /*<<< orphan*/  I2S_Standard; int /*<<< orphan*/  I2S_Mode; } ;
typedef  TYPE_1__ I2S_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  I2S_AudioFreq_Default ; 
 int /*<<< orphan*/  I2S_CPOL_Low ; 
 int /*<<< orphan*/  I2S_DataFormat_16b ; 
 int /*<<< orphan*/  I2S_MCLKOutput_Disable ; 
 int /*<<< orphan*/  I2S_Mode_SlaveTx ; 
 int /*<<< orphan*/  I2S_Standard_Phillips ; 

void I2S_StructInit(I2S_InitTypeDef* I2S_InitStruct)
{
/*--------------- Reset I2S init structure parameters values -----------------*/
  /* Initialize the I2S_Mode member */
  I2S_InitStruct->I2S_Mode = I2S_Mode_SlaveTx;

  /* Initialize the I2S_Standard member */
  I2S_InitStruct->I2S_Standard = I2S_Standard_Phillips;

  /* Initialize the I2S_DataFormat member */
  I2S_InitStruct->I2S_DataFormat = I2S_DataFormat_16b;

  /* Initialize the I2S_MCLKOutput member */
  I2S_InitStruct->I2S_MCLKOutput = I2S_MCLKOutput_Disable;

  /* Initialize the I2S_AudioFreq member */
  I2S_InitStruct->I2S_AudioFreq = I2S_AudioFreq_Default;

  /* Initialize the I2S_CPOL member */
  I2S_InitStruct->I2S_CPOL = I2S_CPOL_Low;
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
          int _len_I2S_InitStruct0 = 1;
          struct TYPE_3__ * I2S_InitStruct = (struct TYPE_3__ *) malloc(_len_I2S_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_I2S_InitStruct0; _i0++) {
            I2S_InitStruct[_i0].I2S_CPOL = ((-2 * (next_i()%2)) + 1) * next_i();
        I2S_InitStruct[_i0].I2S_AudioFreq = ((-2 * (next_i()%2)) + 1) * next_i();
        I2S_InitStruct[_i0].I2S_MCLKOutput = ((-2 * (next_i()%2)) + 1) * next_i();
        I2S_InitStruct[_i0].I2S_DataFormat = ((-2 * (next_i()%2)) + 1) * next_i();
        I2S_InitStruct[_i0].I2S_Standard = ((-2 * (next_i()%2)) + 1) * next_i();
        I2S_InitStruct[_i0].I2S_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          I2S_StructInit(I2S_InitStruct);
          free(I2S_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
