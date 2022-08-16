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
struct LZXstate {int R0; int R1; int R2; scalar_t__* LENGTH_len; scalar_t__* MAINTREE_len; scalar_t__ window_posn; scalar_t__ intel_started; scalar_t__ intel_curpos; int /*<<< orphan*/  block_type; scalar_t__ block_remaining; scalar_t__ frames_read; scalar_t__ header_read; } ;

/* Variables and functions */
 int DECR_OK ; 
 int /*<<< orphan*/  LZX_BLOCKTYPE_INVALID ; 
 int LZX_LENGTH_MAXSYMBOLS ; 
 int LZX_LENTABLE_SAFETY ; 
 int LZX_MAINTREE_MAXSYMBOLS ; 

int LZXreset(struct LZXstate *pState)
{
    int i;

    pState->R0  =  pState->R1  = pState->R2 = 1;
    pState->header_read     = 0;
    pState->frames_read     = 0;
    pState->block_remaining = 0;
    pState->block_type      = LZX_BLOCKTYPE_INVALID;
    pState->intel_curpos    = 0;
    pState->intel_started   = 0;
    pState->window_posn     = 0;

    for (i = 0; i < LZX_MAINTREE_MAXSYMBOLS + LZX_LENTABLE_SAFETY; i++) pState->MAINTREE_len[i] = 0;
    for (i = 0; i < LZX_LENGTH_MAXSYMBOLS + LZX_LENTABLE_SAFETY; i++)   pState->LENGTH_len[i]   = 0;

    return DECR_OK;
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
          int _len_pState0 = 1;
          struct LZXstate * pState = (struct LZXstate *) malloc(_len_pState0*sizeof(struct LZXstate));
          for(int _i0 = 0; _i0 < _len_pState0; _i0++) {
            pState[_i0].R0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].R1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].R2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pState__i0__LENGTH_len0 = 1;
          pState[_i0].LENGTH_len = (long *) malloc(_len_pState__i0__LENGTH_len0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pState__i0__LENGTH_len0; _j0++) {
            pState[_i0].LENGTH_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pState__i0__MAINTREE_len0 = 1;
          pState[_i0].MAINTREE_len = (long *) malloc(_len_pState__i0__MAINTREE_len0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pState__i0__MAINTREE_len0; _j0++) {
            pState[_i0].MAINTREE_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pState[_i0].window_posn = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].intel_started = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].intel_curpos = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].block_type = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].block_remaining = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].frames_read = ((-2 * (next_i()%2)) + 1) * next_i();
        pState[_i0].header_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LZXreset(pState);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pState0; _aux++) {
          free(pState[_aux].LENGTH_len);
          }
          for(int _aux = 0; _aux < _len_pState0; _aux++) {
          free(pState[_aux].MAINTREE_len);
          }
          free(pState);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
