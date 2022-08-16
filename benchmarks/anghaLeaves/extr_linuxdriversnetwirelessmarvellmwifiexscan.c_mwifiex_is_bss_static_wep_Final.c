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
struct TYPE_2__ {int /*<<< orphan*/  wpa2_enabled; int /*<<< orphan*/  wpa_enabled; scalar_t__ wep_enabled; } ;
struct mwifiex_private {TYPE_1__ sec_info; } ;
struct mwifiex_bssdescriptor {scalar_t__ privacy; } ;

/* Variables and functions */

__attribute__((used)) static bool
mwifiex_is_bss_static_wep(struct mwifiex_private *priv,
			  struct mwifiex_bssdescriptor *bss_desc)
{
	if (priv->sec_info.wep_enabled && !priv->sec_info.wpa_enabled &&
	    !priv->sec_info.wpa2_enabled && bss_desc->privacy) {
		return true;
	}
	return false;
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
            priv[_i0].sec_info.wpa2_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].sec_info.wpa_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].sec_info.wep_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bss_desc0 = 1;
          struct mwifiex_bssdescriptor * bss_desc = (struct mwifiex_bssdescriptor *) malloc(_len_bss_desc0*sizeof(struct mwifiex_bssdescriptor));
          for(int _i0 = 0; _i0 < _len_bss_desc0; _i0++) {
            bss_desc[_i0].privacy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_is_bss_static_wep(priv,bss_desc);
          printf("%d\n", benchRet); 
          free(priv);
          free(bss_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
