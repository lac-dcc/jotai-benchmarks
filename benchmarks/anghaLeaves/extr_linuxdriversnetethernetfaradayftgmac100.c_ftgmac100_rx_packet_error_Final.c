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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int /*<<< orphan*/  rx_length_errors; int /*<<< orphan*/  rx_crc_errors; int /*<<< orphan*/  rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftgmac100 {struct net_device* netdev; } ;

/* Variables and functions */
 int FTGMAC100_RXDES0_CRC_ERR ; 
 int FTGMAC100_RXDES0_FTL ; 
 int FTGMAC100_RXDES0_RUNT ; 
 int FTGMAC100_RXDES0_RX_ERR ; 
 int FTGMAC100_RXDES0_RX_ODD_NB ; 

__attribute__((used)) static void ftgmac100_rx_packet_error(struct ftgmac100 *priv, u32 status)
{
	struct net_device *netdev = priv->netdev;

	if (status & FTGMAC100_RXDES0_RX_ERR)
		netdev->stats.rx_errors++;

	if (status & FTGMAC100_RXDES0_CRC_ERR)
		netdev->stats.rx_crc_errors++;

	if (status & (FTGMAC100_RXDES0_FTL |
		      FTGMAC100_RXDES0_RUNT |
		      FTGMAC100_RXDES0_RX_ODD_NB))
		netdev->stats.rx_length_errors++;
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
          int status = 100;
          int _len_priv0 = 1;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__netdev0 = 1;
          priv[_i0].netdev = (struct net_device *) malloc(_len_priv__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__netdev0; _j0++) {
            priv[_i0].netdev->stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].netdev->stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ftgmac100_rx_packet_error(priv,status);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].netdev);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          int _len_priv0 = 65025;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__netdev0 = 1;
          priv[_i0].netdev = (struct net_device *) malloc(_len_priv__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__netdev0; _j0++) {
            priv[_i0].netdev->stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].netdev->stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ftgmac100_rx_packet_error(priv,status);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].netdev);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          int _len_priv0 = 100;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__netdev0 = 1;
          priv[_i0].netdev = (struct net_device *) malloc(_len_priv__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_priv__i0__netdev0; _j0++) {
            priv[_i0].netdev->stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].netdev->stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ftgmac100_rx_packet_error(priv,status);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].netdev);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
