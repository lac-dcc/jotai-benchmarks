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
typedef  int u16 ;
struct nbu2ss_udc {int /*<<< orphan*/  remote_wakeup; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 int MAX_TEST_MODE_NUM ; 
 int /*<<< orphan*/  U2F_ENABLE ; 
#define  USB_DEVICE_REMOTE_WAKEUP 129 
#define  USB_DEVICE_TEST_MODE 128 

__attribute__((used)) static int _nbu2ss_set_feature_device(
	struct nbu2ss_udc *udc,
	u16 selector,
	u16 wIndex
)
{
	int	result = -EOPNOTSUPP;

	switch (selector) {
	case USB_DEVICE_REMOTE_WAKEUP:
		if (wIndex == 0x0000) {
			udc->remote_wakeup = U2F_ENABLE;
			result = 0;
		}
		break;

	case USB_DEVICE_TEST_MODE:
		wIndex >>= 8;
		if (wIndex <= MAX_TEST_MODE_NUM)
			result = 0;
		break;

	default:
		break;
	}

	return result;
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
          int selector = 100;
          int wIndex = 100;
          int _len_udc0 = 1;
          struct nbu2ss_udc * udc = (struct nbu2ss_udc *) malloc(_len_udc0*sizeof(struct nbu2ss_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].remote_wakeup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _nbu2ss_set_feature_device(udc,selector,wIndex);
          printf("%d\n", benchRet); 
          free(udc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int selector = 10;
          int wIndex = 10;
          int _len_udc0 = 100;
          struct nbu2ss_udc * udc = (struct nbu2ss_udc *) malloc(_len_udc0*sizeof(struct nbu2ss_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].remote_wakeup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _nbu2ss_set_feature_device(udc,selector,wIndex);
          printf("%d\n", benchRet); 
          free(udc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
