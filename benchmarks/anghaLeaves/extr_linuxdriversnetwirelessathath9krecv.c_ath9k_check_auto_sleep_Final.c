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
struct ath_softc {TYPE_2__* sc_ah; scalar_t__ ps_enabled; } ;
struct TYPE_3__ {int hw_caps; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;

/* Variables and functions */
 int ATH9K_HW_CAP_AUTOSLEEP ; 

__attribute__((used)) static inline bool ath9k_check_auto_sleep(struct ath_softc *sc)
{
	return sc->ps_enabled &&
	       (sc->sc_ah->caps.hw_caps & ATH9K_HW_CAP_AUTOSLEEP);
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
          int _len_sc0 = 1;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__sc_ah0 = 1;
          sc[_i0].sc_ah = (struct TYPE_4__ *) malloc(_len_sc__i0__sc_ah0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__sc_ah0; _j0++) {
            sc[_i0].sc_ah->caps.hw_caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].ps_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath9k_check_auto_sleep(sc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].sc_ah);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
