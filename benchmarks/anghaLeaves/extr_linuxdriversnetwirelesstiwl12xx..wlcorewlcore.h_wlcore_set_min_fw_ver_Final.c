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
struct wl1271 {unsigned int* min_sr_fw_ver; unsigned int* min_mr_fw_ver; } ;

/* Variables and functions */
 size_t FW_VER_CHIP ; 
 size_t FW_VER_IF_TYPE ; 
 size_t FW_VER_MAJOR ; 
 size_t FW_VER_MINOR ; 
 size_t FW_VER_SUBTYPE ; 

__attribute__((used)) static inline void
wlcore_set_min_fw_ver(struct wl1271 *wl, unsigned int chip,
		      unsigned int iftype_sr, unsigned int major_sr,
		      unsigned int subtype_sr, unsigned int minor_sr,
		      unsigned int iftype_mr, unsigned int major_mr,
		      unsigned int subtype_mr, unsigned int minor_mr)
{
	wl->min_sr_fw_ver[FW_VER_CHIP] = chip;
	wl->min_sr_fw_ver[FW_VER_IF_TYPE] = iftype_sr;
	wl->min_sr_fw_ver[FW_VER_MAJOR] = major_sr;
	wl->min_sr_fw_ver[FW_VER_SUBTYPE] = subtype_sr;
	wl->min_sr_fw_ver[FW_VER_MINOR] = minor_sr;

	wl->min_mr_fw_ver[FW_VER_CHIP] = chip;
	wl->min_mr_fw_ver[FW_VER_IF_TYPE] = iftype_mr;
	wl->min_mr_fw_ver[FW_VER_MAJOR] = major_mr;
	wl->min_mr_fw_ver[FW_VER_SUBTYPE] = subtype_mr;
	wl->min_mr_fw_ver[FW_VER_MINOR] = minor_mr;
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
          unsigned int chip = 100;
          unsigned int iftype_sr = 100;
          unsigned int major_sr = 100;
          unsigned int subtype_sr = 100;
          unsigned int minor_sr = 100;
          unsigned int iftype_mr = 100;
          unsigned int major_mr = 100;
          unsigned int subtype_mr = 100;
          unsigned int minor_mr = 100;
          int _len_wl0 = 1;
          struct wl1271 * wl = (struct wl1271 *) malloc(_len_wl0*sizeof(struct wl1271));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__min_sr_fw_ver0 = 1;
          wl[_i0].min_sr_fw_ver = (unsigned int *) malloc(_len_wl__i0__min_sr_fw_ver0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_wl__i0__min_sr_fw_ver0; _j0++) {
            wl[_i0].min_sr_fw_ver[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wl__i0__min_mr_fw_ver0 = 1;
          wl[_i0].min_mr_fw_ver = (unsigned int *) malloc(_len_wl__i0__min_mr_fw_ver0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_wl__i0__min_mr_fw_ver0; _j0++) {
            wl[_i0].min_mr_fw_ver[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          wlcore_set_min_fw_ver(wl,chip,iftype_sr,major_sr,subtype_sr,minor_sr,iftype_mr,major_mr,subtype_mr,minor_mr);
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].min_sr_fw_ver);
          }
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].min_mr_fw_ver);
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
