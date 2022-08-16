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
struct TYPE_3__ {int SDIO_DataTimeOut; int SDIO_DataLength; int /*<<< orphan*/  SDIO_DPSM; int /*<<< orphan*/  SDIO_TransferMode; int /*<<< orphan*/  SDIO_TransferDir; int /*<<< orphan*/  SDIO_DataBlockSize; } ;
typedef  TYPE_1__ SDIO_DataInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  SDIO_DPSM_Disable ; 
 int /*<<< orphan*/  SDIO_DataBlockSize_1b ; 
 int /*<<< orphan*/  SDIO_TransferDir_ToCard ; 
 int /*<<< orphan*/  SDIO_TransferMode_Block ; 

void SDIO_DataStructInit(SDIO_DataInitTypeDef* SDIO_DataInitStruct)
{
  /* SDIO_DataInitStruct members default value */
  SDIO_DataInitStruct->SDIO_DataTimeOut = 0xFFFFFFFF;
  SDIO_DataInitStruct->SDIO_DataLength = 0x00;
  SDIO_DataInitStruct->SDIO_DataBlockSize = SDIO_DataBlockSize_1b;
  SDIO_DataInitStruct->SDIO_TransferDir = SDIO_TransferDir_ToCard;
  SDIO_DataInitStruct->SDIO_TransferMode = SDIO_TransferMode_Block;  
  SDIO_DataInitStruct->SDIO_DPSM = SDIO_DPSM_Disable;
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
          int _len_SDIO_DataInitStruct0 = 1;
          struct TYPE_3__ * SDIO_DataInitStruct = (struct TYPE_3__ *) malloc(_len_SDIO_DataInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SDIO_DataInitStruct0; _i0++) {
            SDIO_DataInitStruct[_i0].SDIO_DataTimeOut = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_DataInitStruct[_i0].SDIO_DataLength = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_DataInitStruct[_i0].SDIO_DPSM = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_DataInitStruct[_i0].SDIO_TransferMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_DataInitStruct[_i0].SDIO_TransferDir = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_DataInitStruct[_i0].SDIO_DataBlockSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SDIO_DataStructInit(SDIO_DataInitStruct);
          free(SDIO_DataInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
