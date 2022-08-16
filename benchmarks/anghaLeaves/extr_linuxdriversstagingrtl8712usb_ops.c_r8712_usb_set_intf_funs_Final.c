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
struct intf_hdl {int /*<<< orphan*/  intf_hdl_close; int /*<<< orphan*/  intf_hdl_open; int /*<<< orphan*/  intf_hdl_unload; int /*<<< orphan*/  intf_hdl_init; } ;

/* Variables and functions */
 int /*<<< orphan*/  usb_intf_hdl_close ; 
 int /*<<< orphan*/  usb_intf_hdl_init ; 
 int /*<<< orphan*/  usb_intf_hdl_open ; 
 int /*<<< orphan*/  usb_intf_hdl_unload ; 

void r8712_usb_set_intf_funs(struct intf_hdl *pintf_hdl)
{
	pintf_hdl->intf_hdl_init = usb_intf_hdl_init;
	pintf_hdl->intf_hdl_unload = usb_intf_hdl_unload;
	pintf_hdl->intf_hdl_open = usb_intf_hdl_open;
	pintf_hdl->intf_hdl_close = usb_intf_hdl_close;
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
          int _len_pintf_hdl0 = 1;
          struct intf_hdl * pintf_hdl = (struct intf_hdl *) malloc(_len_pintf_hdl0*sizeof(struct intf_hdl));
          for(int _i0 = 0; _i0 < _len_pintf_hdl0; _i0++) {
            pintf_hdl[_i0].intf_hdl_close = ((-2 * (next_i()%2)) + 1) * next_i();
        pintf_hdl[_i0].intf_hdl_open = ((-2 * (next_i()%2)) + 1) * next_i();
        pintf_hdl[_i0].intf_hdl_unload = ((-2 * (next_i()%2)) + 1) * next_i();
        pintf_hdl[_i0].intf_hdl_init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          r8712_usb_set_intf_funs(pintf_hdl);
          free(pintf_hdl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
