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

/* Type definitions */
typedef  int /*<<< orphan*/  HRESULT ;
typedef  int /*<<< orphan*/  Direct3DSwapChain9_INT ;
typedef  int /*<<< orphan*/  D3DPRESENT_PARAMETERS ;

/* Variables and functions */
 int /*<<< orphan*/  D3D_OK ; 

HRESULT Direct3DSwapChain9_Reset(Direct3DSwapChain9_INT* pThisSwapChain, D3DPRESENT_PARAMETERS* pPresentationParameters)
{
    // TODO: Do all the dirty work...
    return D3D_OK;
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
          int _len_pThisSwapChain0 = 1;
          int * pThisSwapChain = (int *) malloc(_len_pThisSwapChain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pThisSwapChain0; _i0++) {
            pThisSwapChain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pPresentationParameters0 = 1;
          int * pPresentationParameters = (int *) malloc(_len_pPresentationParameters0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pPresentationParameters0; _i0++) {
            pPresentationParameters[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Direct3DSwapChain9_Reset(pThisSwapChain,pPresentationParameters);
          printf("%d\n", benchRet); 
          free(pThisSwapChain);
          free(pPresentationParameters);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
