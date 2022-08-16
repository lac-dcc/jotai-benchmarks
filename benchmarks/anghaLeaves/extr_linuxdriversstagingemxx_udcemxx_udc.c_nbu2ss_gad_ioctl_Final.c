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
struct usb_gadget {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int nbu2ss_gad_ioctl(
	struct usb_gadget *pgadget,
	unsigned int code,
	unsigned long param)
{
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
          unsigned int code = 100;
          unsigned long param = 100;
          int _len_pgadget0 = 1;
          struct usb_gadget * pgadget = (struct usb_gadget *) malloc(_len_pgadget0*sizeof(struct usb_gadget));
          for(int _i0 = 0; _i0 < _len_pgadget0; _i0++) {
            pgadget[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nbu2ss_gad_ioctl(pgadget,code,param);
          printf("%d\n", benchRet); 
          free(pgadget);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int code = 10;
          unsigned long param = 10;
          int _len_pgadget0 = 100;
          struct usb_gadget * pgadget = (struct usb_gadget *) malloc(_len_pgadget0*sizeof(struct usb_gadget));
          for(int _i0 = 0; _i0 < _len_pgadget0; _i0++) {
            pgadget[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nbu2ss_gad_ioctl(pgadget,code,param);
          printf("%d\n", benchRet); 
          free(pgadget);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
