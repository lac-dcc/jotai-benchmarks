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
struct wl1251 {int nvs_len; int* nvs; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENODATA ; 
 size_t NVS_OFF_MAC_ADDR_HI ; 
 size_t NVS_OFF_MAC_ADDR_LO ; 
 size_t NVS_OFF_MAC_LEN ; 

__attribute__((used)) static int wl1251_check_nvs_mac(struct wl1251 *wl)
{
	if (wl->nvs_len < 0x24)
		return -ENODATA;

	/* length is 2 and data address is 0x546c (ANDed with 0xfffe) */
	if (wl->nvs[NVS_OFF_MAC_LEN] != 2 ||
	    wl->nvs[NVS_OFF_MAC_ADDR_LO] != 0x6d ||
	    wl->nvs[NVS_OFF_MAC_ADDR_HI] != 0x54)
		return -EINVAL;

	return 0;
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
          int _len_wl0 = 1;
          struct wl1251 * wl = (struct wl1251 *) malloc(_len_wl0*sizeof(struct wl1251));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
            wl[_i0].nvs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wl__i0__nvs0 = 1;
          wl[_i0].nvs = (int *) malloc(_len_wl__i0__nvs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wl__i0__nvs0; _j0++) {
            wl[_i0].nvs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wl1251_check_nvs_mac(wl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].nvs);
          }
          free(wl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
