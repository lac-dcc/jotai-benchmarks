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
struct TYPE_3__ {scalar_t__ CRYP_Key3Right; scalar_t__ CRYP_Key3Left; scalar_t__ CRYP_Key2Right; scalar_t__ CRYP_Key2Left; scalar_t__ CRYP_Key1Right; scalar_t__ CRYP_Key1Left; scalar_t__ CRYP_Key0Right; scalar_t__ CRYP_Key0Left; } ;
typedef  TYPE_1__ CRYP_KeyInitTypeDef ;

/* Variables and functions */

void CRYP_KeyStructInit(CRYP_KeyInitTypeDef* CRYP_KeyInitStruct)
{
  CRYP_KeyInitStruct->CRYP_Key0Left  = 0;
  CRYP_KeyInitStruct->CRYP_Key0Right = 0;
  CRYP_KeyInitStruct->CRYP_Key1Left  = 0;
  CRYP_KeyInitStruct->CRYP_Key1Right = 0;
  CRYP_KeyInitStruct->CRYP_Key2Left  = 0;
  CRYP_KeyInitStruct->CRYP_Key2Right = 0;
  CRYP_KeyInitStruct->CRYP_Key3Left  = 0;
  CRYP_KeyInitStruct->CRYP_Key3Right = 0;
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
          int _len_CRYP_KeyInitStruct0 = 1;
          struct TYPE_3__ * CRYP_KeyInitStruct = (struct TYPE_3__ *) malloc(_len_CRYP_KeyInitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_CRYP_KeyInitStruct0; _i0++) {
            CRYP_KeyInitStruct[_i0].CRYP_Key3Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key3Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_KeyStructInit(CRYP_KeyInitStruct);
          free(CRYP_KeyInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
