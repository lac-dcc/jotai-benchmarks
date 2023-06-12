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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct il_priv {int dummy; } ;
struct ieee80211_rate {int bitrate; int hw_value; int hw_value_short; int /*<<< orphan*/  flags; } ;
struct TYPE_2__ {int ieee; scalar_t__ plcp; } ;

/* Variables and functions */
 int /*<<< orphan*/  IEEE80211_RATE_SHORT_PREAMBLE ; 
 int IL_FIRST_CCK_RATE ; 
 int IL_LAST_CCK_RATE ; 
 scalar_t__ RATE_1M_PLCP ; 
 int RATE_COUNT_LEGACY ; 
 TYPE_1__* il_rates ; 

__attribute__((used)) static void
il4965_init_hw_rates(struct il_priv *il, struct ieee80211_rate *rates)
{
	int i;

	for (i = 0; i < RATE_COUNT_LEGACY; i++) {
		rates[i].bitrate = il_rates[i].ieee * 5;
		rates[i].hw_value = i;	/* Rate scaling will work on idxes */
		rates[i].hw_value_short = i;
		rates[i].flags = 0;
		if ((i >= IL_FIRST_CCK_RATE) && (i <= IL_LAST_CCK_RATE)) {
			/*
			 * If CCK != 1M then set short preamble rate flag.
			 */
			rates[i].flags |=
			    (il_rates[i].plcp ==
			     RATE_1M_PLCP) ? 0 : IEEE80211_RATE_SHORT_PREAMBLE;
		}
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_il0 = 65025;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
              il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rates0 = 65025;
          struct ieee80211_rate * rates = (struct ieee80211_rate *) malloc(_len_rates0*sizeof(struct ieee80211_rate));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
              rates[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].hw_value_short = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          il4965_init_hw_rates(il,rates);
          free(il);
          free(rates);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_il0 = 100;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
              il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rates0 = 100;
          struct ieee80211_rate * rates = (struct ieee80211_rate *) malloc(_len_rates0*sizeof(struct ieee80211_rate));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
              rates[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].hw_value_short = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          il4965_init_hw_rates(il,rates);
          free(il);
          free(rates);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
              il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rates0 = 1;
          struct ieee80211_rate * rates = (struct ieee80211_rate *) malloc(_len_rates0*sizeof(struct ieee80211_rate));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
              rates[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].hw_value_short = ((-2 * (next_i()%2)) + 1) * next_i();
          rates[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          il4965_init_hw_rates(il,rates);
          free(il);
          free(rates);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
