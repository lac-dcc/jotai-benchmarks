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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct cfg80211_scan_request {int n_channels; TYPE_1__** channels; } ;
struct TYPE_2__ {scalar_t__ hw_value; } ;

/* Variables and functions */
 scalar_t__ P2P_DMG_SOCIAL_CHANNEL ; 

bool wil_p2p_is_social_scan(struct cfg80211_scan_request *request)
{
	return (request->n_channels == 1) &&
	       (request->channels[0]->hw_value == P2P_DMG_SOCIAL_CHANNEL);
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
          int _len_request0 = 1;
          struct cfg80211_scan_request * request = (struct cfg80211_scan_request *) malloc(_len_request0*sizeof(struct cfg80211_scan_request));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
            request[_i0].n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_request__i0__channels0 = 1;
          request[_i0].channels = (struct TYPE_2__ **) malloc(_len_request__i0__channels0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_request__i0__channels0; _j0++) {
            int _len_request__i0__channels1 = 1;
            request[_i0].channels[_j0] = (struct TYPE_2__ *) malloc(_len_request__i0__channels1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_request__i0__channels1; _j1++) {
              request[_i0].channels[_j0]->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = wil_p2p_is_social_scan(request);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_request0; _aux++) {
          free(*(request[_aux].channels));
        free(request[_aux].channels);
          }
          free(request);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
