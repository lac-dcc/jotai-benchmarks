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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct at91_udc {struct at91_ep* ep; } ;
struct at91_ep {int maxpacket; } ;

/* Variables and functions */
 int NUM_ENDPOINTS ; 

__attribute__((used)) static int at91sam9263_udc_init(struct at91_udc *udc)
{
	struct at91_ep *ep;
	int i;

	for (i = 0; i < NUM_ENDPOINTS; i++) {
		ep = &udc->ep[i];

		switch (i) {
		case 0:
		case 1:
		case 2:
		case 3:
			ep->maxpacket = 64;
			break;
		case 4:
		case 5:
			ep->maxpacket = 256;
			break;
		}
	}

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
          int _len_udc0 = 1;
          struct at91_udc * udc = (struct at91_udc *) malloc(_len_udc0*sizeof(struct at91_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
              int _len_udc__i0__ep0 = 1;
          udc[_i0].ep = (struct at91_ep *) malloc(_len_udc__i0__ep0*sizeof(struct at91_ep));
          for(int _j0 = 0; _j0 < _len_udc__i0__ep0; _j0++) {
            udc[_i0].ep->maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = at91sam9263_udc_init(udc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_udc0; _aux++) {
          free(udc[_aux].ep);
          }
          free(udc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_udc0 = 65025;
          struct at91_udc * udc = (struct at91_udc *) malloc(_len_udc0*sizeof(struct at91_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
              int _len_udc__i0__ep0 = 1;
          udc[_i0].ep = (struct at91_ep *) malloc(_len_udc__i0__ep0*sizeof(struct at91_ep));
          for(int _j0 = 0; _j0 < _len_udc__i0__ep0; _j0++) {
            udc[_i0].ep->maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = at91sam9263_udc_init(udc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_udc0; _aux++) {
          free(udc[_aux].ep);
          }
          free(udc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_udc0 = 100;
          struct at91_udc * udc = (struct at91_udc *) malloc(_len_udc0*sizeof(struct at91_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
              int _len_udc__i0__ep0 = 1;
          udc[_i0].ep = (struct at91_ep *) malloc(_len_udc__i0__ep0*sizeof(struct at91_ep));
          for(int _j0 = 0; _j0 < _len_udc__i0__ep0; _j0++) {
            udc[_i0].ep->maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = at91sam9263_udc_init(udc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_udc0; _aux++) {
          free(udc[_aux].ep);
          }
          free(udc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
