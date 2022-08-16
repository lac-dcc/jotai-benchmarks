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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct brcms_c_info {TYPE_2__** bandstate; TYPE_1__* stf; } ;
typedef  void* s8 ;
typedef  scalar_t__ s32 ;
struct TYPE_4__ {void* band_stf_stbc_tx; } ;
struct TYPE_3__ {int txstreams; } ;

/* Variables and functions */
 scalar_t__ AUTO ; 
 size_t BAND_2G_INDEX ; 
 size_t BAND_5G_INDEX ; 
 scalar_t__ OFF ; 
 scalar_t__ ON ; 

__attribute__((used)) static bool brcms_c_stf_stbc_tx_set(struct brcms_c_info *wlc, s32 int_val)
{
	if ((int_val != AUTO) && (int_val != OFF) && (int_val != ON))
		return false;

	if ((int_val == ON) && (wlc->stf->txstreams == 1))
		return false;

	wlc->bandstate[BAND_2G_INDEX]->band_stf_stbc_tx = (s8) int_val;
	wlc->bandstate[BAND_5G_INDEX]->band_stf_stbc_tx = (s8) int_val;

	return true;
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
          long int_val = 100;
          int _len_wlc0 = 1;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__bandstate0 = 1;
          wlc[_i0].bandstate = (struct TYPE_4__ **) malloc(_len_wlc__i0__bandstate0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_wlc__i0__bandstate0; _j0++) {
            int _len_wlc__i0__bandstate1 = 1;
            wlc[_i0].bandstate[_j0] = (struct TYPE_4__ *) malloc(_len_wlc__i0__bandstate1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_wlc__i0__bandstate1; _j1++) {
                  }
          }
          int _len_wlc__i0__stf0 = 1;
          wlc[_i0].stf = (struct TYPE_3__ *) malloc(_len_wlc__i0__stf0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wlc__i0__stf0; _j0++) {
            wlc[_i0].stf->txstreams = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brcms_c_stf_stbc_tx_set(wlc,int_val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(*(wlc[_aux].bandstate));
        free(wlc[_aux].bandstate);
          }
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].stf);
          }
          free(wlc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
