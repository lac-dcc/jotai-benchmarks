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
struct TYPE_3__ {int SDIO_Argument; int SDIO_CmdIndex; int /*<<< orphan*/  SDIO_CPSM; int /*<<< orphan*/  SDIO_Wait; int /*<<< orphan*/  SDIO_Response; } ;
typedef  TYPE_1__ SDIO_CmdInitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  SDIO_CPSM_Disable ; 
 int /*<<< orphan*/  SDIO_Response_No ; 
 int /*<<< orphan*/  SDIO_Wait_No ; 

void SDIO_CmdStructInit(SDIO_CmdInitTypeDef* SDIO_CmdInitStruct)
{
  /* SDIO_CmdInitStruct members default value */
  SDIO_CmdInitStruct->SDIO_Argument = 0x00;
  SDIO_CmdInitStruct->SDIO_CmdIndex = 0x00;
  SDIO_CmdInitStruct->SDIO_Response = SDIO_Response_No;
  SDIO_CmdInitStruct->SDIO_Wait = SDIO_Wait_No;
  SDIO_CmdInitStruct->SDIO_CPSM = SDIO_CPSM_Disable;
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
          int _len_SDIO_CmdInitStruct0 = 1;
          struct TYPE_3__ * SDIO_CmdInitStruct = (struct TYPE_3__ *) malloc(_len_SDIO_CmdInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SDIO_CmdInitStruct0; _i0++) {
            SDIO_CmdInitStruct[_i0].SDIO_Argument = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_CmdInitStruct[_i0].SDIO_CmdIndex = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_CmdInitStruct[_i0].SDIO_CPSM = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_CmdInitStruct[_i0].SDIO_Wait = ((-2 * (next_i()%2)) + 1) * next_i();
        SDIO_CmdInitStruct[_i0].SDIO_Response = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SDIO_CmdStructInit(SDIO_CmdInitStruct);
          free(SDIO_CmdInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
