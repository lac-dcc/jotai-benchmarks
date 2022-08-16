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
struct TYPE_3__ {int /*<<< orphan*/  HASH_HMACKeyType; int /*<<< orphan*/  HASH_DataType; int /*<<< orphan*/  HASH_AlgoMode; int /*<<< orphan*/  HASH_AlgoSelection; } ;
typedef  TYPE_1__ HASH_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  HASH_AlgoMode_HASH ; 
 int /*<<< orphan*/  HASH_AlgoSelection_SHA1 ; 
 int /*<<< orphan*/  HASH_DataType_32b ; 
 int /*<<< orphan*/  HASH_HMACKeyType_ShortKey ; 

void HASH_StructInit(HASH_InitTypeDef* HASH_InitStruct)
{
  /* Initialize the HASH_AlgoSelection member */
  HASH_InitStruct->HASH_AlgoSelection = HASH_AlgoSelection_SHA1;

  /* Initialize the HASH_AlgoMode member */
  HASH_InitStruct->HASH_AlgoMode = HASH_AlgoMode_HASH;

  /* Initialize the HASH_DataType member */
  HASH_InitStruct->HASH_DataType = HASH_DataType_32b;

  /* Initialize the HASH_HMACKeyType member */
  HASH_InitStruct->HASH_HMACKeyType = HASH_HMACKeyType_ShortKey;
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
          int _len_HASH_InitStruct0 = 1;
          struct TYPE_3__ * HASH_InitStruct = (struct TYPE_3__ *) malloc(_len_HASH_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_HASH_InitStruct0; _i0++) {
            HASH_InitStruct[_i0].HASH_HMACKeyType = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_InitStruct[_i0].HASH_DataType = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_InitStruct[_i0].HASH_AlgoMode = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_InitStruct[_i0].HASH_AlgoSelection = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HASH_StructInit(HASH_InitStruct);
          free(HASH_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
