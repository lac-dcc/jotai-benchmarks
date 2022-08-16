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
struct TYPE_3__ {int SPI_CRCPolynomial; int /*<<< orphan*/  SPI_FirstBit; int /*<<< orphan*/  SPI_BaudRatePrescaler; int /*<<< orphan*/  SPI_NSS; int /*<<< orphan*/  SPI_CPHA; int /*<<< orphan*/  SPI_CPOL; int /*<<< orphan*/  SPI_DataSize; int /*<<< orphan*/  SPI_Mode; int /*<<< orphan*/  SPI_Direction; } ;
typedef  TYPE_1__ SPI_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  SPI_BaudRatePrescaler_2 ; 
 int /*<<< orphan*/  SPI_CPHA_1Edge ; 
 int /*<<< orphan*/  SPI_CPOL_Low ; 
 int /*<<< orphan*/  SPI_DataSize_8b ; 
 int /*<<< orphan*/  SPI_Direction_2Lines_FullDuplex ; 
 int /*<<< orphan*/  SPI_FirstBit_MSB ; 
 int /*<<< orphan*/  SPI_Mode_Slave ; 
 int /*<<< orphan*/  SPI_NSS_Hard ; 

void SPI_StructInit(SPI_InitTypeDef* SPI_InitStruct)
{
/*--------------- Reset SPI init structure parameters values -----------------*/
  /* Initialize the SPI_Direction member */
  SPI_InitStruct->SPI_Direction = SPI_Direction_2Lines_FullDuplex;
  /* initialize the SPI_Mode member */
  SPI_InitStruct->SPI_Mode = SPI_Mode_Slave;
  /* initialize the SPI_DataSize member */
  SPI_InitStruct->SPI_DataSize = SPI_DataSize_8b;
  /* Initialize the SPI_CPOL member */
  SPI_InitStruct->SPI_CPOL = SPI_CPOL_Low;
  /* Initialize the SPI_CPHA member */
  SPI_InitStruct->SPI_CPHA = SPI_CPHA_1Edge;
  /* Initialize the SPI_NSS member */
  SPI_InitStruct->SPI_NSS = SPI_NSS_Hard;
  /* Initialize the SPI_BaudRatePrescaler member */
  SPI_InitStruct->SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2;
  /* Initialize the SPI_FirstBit member */
  SPI_InitStruct->SPI_FirstBit = SPI_FirstBit_MSB;
  /* Initialize the SPI_CRCPolynomial member */
  SPI_InitStruct->SPI_CRCPolynomial = 7;
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
          int _len_SPI_InitStruct0 = 1;
          struct TYPE_3__ * SPI_InitStruct = (struct TYPE_3__ *) malloc(_len_SPI_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SPI_InitStruct0; _i0++) {
            SPI_InitStruct[_i0].SPI_CRCPolynomial = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_FirstBit = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_BaudRatePrescaler = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_NSS = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_CPHA = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_CPOL = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_DataSize = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        SPI_InitStruct[_i0].SPI_Direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SPI_StructInit(SPI_InitStruct);
          free(SPI_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
