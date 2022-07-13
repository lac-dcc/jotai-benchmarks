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
struct yam_port {scalar_t__ rx_len; unsigned char rx_crcl; int rx_crch; unsigned char* rx_buf; } ;
struct net_device {int dummy; } ;

/* Variables and functions */
 scalar_t__ YAM_MAX_FRAME ; 
 unsigned char* chktabh ; 
 int* chktabl ; 

__attribute__((used)) static inline void yam_rx_byte(struct net_device *dev, struct yam_port *yp, unsigned char rxb)
{
	if (yp->rx_len < YAM_MAX_FRAME) {
		unsigned char c = yp->rx_crcl;
		yp->rx_crcl = (chktabl[c] ^ yp->rx_crch);
		yp->rx_crch = (chktabh[c] ^ rxb);
		yp->rx_buf[yp->rx_len++] = rxb;
	}
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
          unsigned char rxb = 100;
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yp0 = 1;
          struct yam_port * yp = (struct yam_port *) malloc(_len_yp0*sizeof(struct yam_port));
          for(int _i0 = 0; _i0 < _len_yp0; _i0++) {
            yp[_i0].rx_len = ((-2 * (next_i()%2)) + 1) * next_i();
        yp[_i0].rx_crcl = ((-2 * (next_i()%2)) + 1) * next_i();
        yp[_i0].rx_crch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_yp__i0__rx_buf0 = 1;
          yp[_i0].rx_buf = (unsigned char *) malloc(_len_yp__i0__rx_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_yp__i0__rx_buf0; _j0++) {
            yp[_i0].rx_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          yam_rx_byte(dev,yp,rxb);
          free(dev);
          for(int _aux = 0; _aux < _len_yp0; _aux++) {
          free(yp[_aux].rx_buf);
          }
          free(yp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char rxb = 255;
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yp0 = 65025;
          struct yam_port * yp = (struct yam_port *) malloc(_len_yp0*sizeof(struct yam_port));
          for(int _i0 = 0; _i0 < _len_yp0; _i0++) {
            yp[_i0].rx_len = ((-2 * (next_i()%2)) + 1) * next_i();
        yp[_i0].rx_crcl = ((-2 * (next_i()%2)) + 1) * next_i();
        yp[_i0].rx_crch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_yp__i0__rx_buf0 = 1;
          yp[_i0].rx_buf = (unsigned char *) malloc(_len_yp__i0__rx_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_yp__i0__rx_buf0; _j0++) {
            yp[_i0].rx_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          yam_rx_byte(dev,yp,rxb);
          free(dev);
          for(int _aux = 0; _aux < _len_yp0; _aux++) {
          free(yp[_aux].rx_buf);
          }
          free(yp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char rxb = 10;
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yp0 = 100;
          struct yam_port * yp = (struct yam_port *) malloc(_len_yp0*sizeof(struct yam_port));
          for(int _i0 = 0; _i0 < _len_yp0; _i0++) {
            yp[_i0].rx_len = ((-2 * (next_i()%2)) + 1) * next_i();
        yp[_i0].rx_crcl = ((-2 * (next_i()%2)) + 1) * next_i();
        yp[_i0].rx_crch = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_yp__i0__rx_buf0 = 1;
          yp[_i0].rx_buf = (unsigned char *) malloc(_len_yp__i0__rx_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_yp__i0__rx_buf0; _j0++) {
            yp[_i0].rx_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          yam_rx_byte(dev,yp,rxb);
          free(dev);
          for(int _aux = 0; _aux < _len_yp0; _aux++) {
          free(yp[_aux].rx_buf);
          }
          free(yp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
