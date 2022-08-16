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
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int /*<<< orphan*/  mode; } ;

/* Variables and functions */
 int /*<<< orphan*/  NL80211_IFTYPE_MONITOR ; 

__attribute__((used)) static void adm8211_remove_interface(struct ieee80211_hw *dev,
				     struct ieee80211_vif *vif)
{
	struct adm8211_priv *priv = dev->priv;
	priv->mode = NL80211_IFTYPE_MONITOR;
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
          int _len_dev0 = 1;
          struct ieee80211_hw * dev = (struct ieee80211_hw *) malloc(_len_dev0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__priv0 = 1;
          dev[_i0].priv = (struct adm8211_priv *) malloc(_len_dev__i0__priv0*sizeof(struct adm8211_priv));
          for(int _j0 = 0; _j0 < _len_dev__i0__priv0; _j0++) {
            dev[_i0].priv->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adm8211_remove_interface(dev,vif);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].priv);
          }
          free(dev);
          free(vif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
