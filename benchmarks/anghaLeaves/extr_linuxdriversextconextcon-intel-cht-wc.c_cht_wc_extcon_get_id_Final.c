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
       1            big-arr-10x\n\
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
struct cht_wc_extcon_data {int dummy; } ;

/* Variables and functions */
 int CHT_WC_PWRSRC_ID_FLOAT ; 
 int CHT_WC_PWRSRC_ID_GND ; 
 int USB_ID_FLOAT ; 
 int USB_ID_GND ; 

__attribute__((used)) static int cht_wc_extcon_get_id(struct cht_wc_extcon_data *ext, int pwrsrc_sts)
{
	if (pwrsrc_sts & CHT_WC_PWRSRC_ID_GND)
		return USB_ID_GND;
	if (pwrsrc_sts & CHT_WC_PWRSRC_ID_FLOAT)
		return USB_ID_FLOAT;

	/*
	 * Once we have iio support for the gpadc we should read the USBID
	 * gpadc channel here and determine ACA role based on that.
	 */
	return USB_ID_FLOAT;
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
          int pwrsrc_sts = 100;
          int _len_ext0 = 1;
          struct cht_wc_extcon_data * ext = (struct cht_wc_extcon_data *) malloc(_len_ext0*sizeof(struct cht_wc_extcon_data));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            ext[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cht_wc_extcon_get_id(ext,pwrsrc_sts);
          printf("%d\n", benchRet); 
          free(ext);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pwrsrc_sts = 10;
          int _len_ext0 = 100;
          struct cht_wc_extcon_data * ext = (struct cht_wc_extcon_data *) malloc(_len_ext0*sizeof(struct cht_wc_extcon_data));
          for(int _i0 = 0; _i0 < _len_ext0; _i0++) {
            ext[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cht_wc_extcon_get_id(ext,pwrsrc_sts);
          printf("%d\n", benchRet); 
          free(ext);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
