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
struct mwifiex_sta_node {int is_11n_enabled; } ;
struct mwifiex_private {scalar_t__ bss_role; scalar_t__ bss_mode; TYPE_1__* adapter; int /*<<< orphan*/  ap_11n_enabled; } ;
struct TYPE_2__ {int /*<<< orphan*/  adhoc_11n_enabled; } ;

/* Variables and functions */
 scalar_t__ MWIFIEX_BSS_ROLE_UAP ; 
 scalar_t__ NL80211_IFTYPE_ADHOC ; 

__attribute__((used)) static inline int mwifiex_is_sta_11n_enabled(struct mwifiex_private *priv,
					     struct mwifiex_sta_node *node)
{
	if (!node || ((priv->bss_role == MWIFIEX_BSS_ROLE_UAP) &&
		      !priv->ap_11n_enabled) ||
	    ((priv->bss_mode == NL80211_IFTYPE_ADHOC) &&
	     !priv->adapter->adhoc_11n_enabled))
		return 0;

	return node->is_11n_enabled;
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
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].bss_role = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].bss_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__adapter0 = 1;
          priv[_i0].adapter = (struct TYPE_2__ *) malloc(_len_priv__i0__adapter0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter0; _j0++) {
            priv[_i0].adapter->adhoc_11n_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].ap_11n_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 1;
          struct mwifiex_sta_node * node = (struct mwifiex_sta_node *) malloc(_len_node0*sizeof(struct mwifiex_sta_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].is_11n_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_is_sta_11n_enabled(priv,node);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].adapter);
          }
          free(priv);
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
