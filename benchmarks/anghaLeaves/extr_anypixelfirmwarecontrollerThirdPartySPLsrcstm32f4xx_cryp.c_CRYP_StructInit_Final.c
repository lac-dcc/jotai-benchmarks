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
struct TYPE_3__ {int /*<<< orphan*/  CRYP_KeySize; int /*<<< orphan*/  CRYP_DataType; int /*<<< orphan*/  CRYP_AlgoMode; int /*<<< orphan*/  CRYP_AlgoDir; } ;
typedef  TYPE_1__ CRYP_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  CRYP_AlgoDir_Encrypt ; 
 int /*<<< orphan*/  CRYP_AlgoMode_TDES_ECB ; 
 int /*<<< orphan*/  CRYP_DataType_32b ; 
 int /*<<< orphan*/  CRYP_KeySize_128b ; 

void CRYP_StructInit(CRYP_InitTypeDef* CRYP_InitStruct)
{
  /* Initialize the CRYP_AlgoDir member */
  CRYP_InitStruct->CRYP_AlgoDir = CRYP_AlgoDir_Encrypt;

  /* initialize the CRYP_AlgoMode member */
  CRYP_InitStruct->CRYP_AlgoMode = CRYP_AlgoMode_TDES_ECB;

  /* initialize the CRYP_DataType member */
  CRYP_InitStruct->CRYP_DataType = CRYP_DataType_32b;
  
  /* Initialize the CRYP_KeySize member */
  CRYP_InitStruct->CRYP_KeySize = CRYP_KeySize_128b;
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
          int _len_CRYP_InitStruct0 = 1;
          struct TYPE_3__ * CRYP_InitStruct = (struct TYPE_3__ *) malloc(_len_CRYP_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_CRYP_InitStruct0; _i0++) {
            CRYP_InitStruct[_i0].CRYP_KeySize = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_InitStruct[_i0].CRYP_DataType = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_InitStruct[_i0].CRYP_AlgoMode = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_InitStruct[_i0].CRYP_AlgoDir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_StructInit(CRYP_InitStruct);
          free(CRYP_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
