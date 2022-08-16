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
struct ieee80211_channel {scalar_t__ center_freq; } ;

/* Variables and functions */

__attribute__((used)) static bool hwsim_chans_compat(struct ieee80211_channel *c1,
			       struct ieee80211_channel *c2)
{
	if (!c1 || !c2)
		return false;

	return c1->center_freq == c2->center_freq;
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
          int _len_c10 = 1;
          struct ieee80211_channel * c1 = (struct ieee80211_channel *) malloc(_len_c10*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_c10; _i0++) {
            c1[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c20 = 1;
          struct ieee80211_channel * c2 = (struct ieee80211_channel *) malloc(_len_c20*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_c20; _i0++) {
            c2[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hwsim_chans_compat(c1,c2);
          printf("%d\n", benchRet); 
          free(c1);
          free(c2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
