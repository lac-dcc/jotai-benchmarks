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
typedef  int /*<<< orphan*/  u8 ;
struct il_priv {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int
il3945_set_tkip_dynamic_key_info(struct il_priv *il,
				 struct ieee80211_key_conf *keyconf, u8 sta_id)
{
	return -EOPNOTSUPP;
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
          int sta_id = 100;
          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_keyconf0 = 1;
          struct ieee80211_key_conf * keyconf = (struct ieee80211_key_conf *) malloc(_len_keyconf0*sizeof(struct ieee80211_key_conf));
          for(int _i0 = 0; _i0 < _len_keyconf0; _i0++) {
            keyconf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il3945_set_tkip_dynamic_key_info(il,keyconf,sta_id);
          printf("%d\n", benchRet); 
          free(il);
          free(keyconf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
