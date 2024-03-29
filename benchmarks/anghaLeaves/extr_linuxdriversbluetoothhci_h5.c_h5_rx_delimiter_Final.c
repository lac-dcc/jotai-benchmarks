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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct hci_uart {struct h5* priv; } ;
struct h5 {int /*<<< orphan*/  rx_func; } ;

/* Variables and functions */
 unsigned char SLIP_DELIMITER ; 
 int /*<<< orphan*/  h5_rx_pkt_start ; 

__attribute__((used)) static int h5_rx_delimiter(struct hci_uart *hu, unsigned char c)
{
	struct h5 *h5 = hu->priv;

	if (c == SLIP_DELIMITER)
		h5->rx_func = h5_rx_pkt_start;

	return 1;
}

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
          unsigned char c = 100;
        
          int _len_hu0 = 1;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
              int _len_hu__i0__priv0 = 1;
          hu[_i0].priv = (struct h5 *) malloc(_len_hu__i0__priv0*sizeof(struct h5));
          for(int _j0 = 0; _j0 < _len_hu__i0__priv0; _j0++) {
              hu[_i0].priv->rx_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = h5_rx_delimiter(hu,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hu0; _aux++) {
          free(hu[_aux].priv);
          }
          free(hu);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char c = 255;
        
          int _len_hu0 = 65025;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
              int _len_hu__i0__priv0 = 1;
          hu[_i0].priv = (struct h5 *) malloc(_len_hu__i0__priv0*sizeof(struct h5));
          for(int _j0 = 0; _j0 < _len_hu__i0__priv0; _j0++) {
              hu[_i0].priv->rx_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = h5_rx_delimiter(hu,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hu0; _aux++) {
          free(hu[_aux].priv);
          }
          free(hu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char c = 10;
        
          int _len_hu0 = 100;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
              int _len_hu__i0__priv0 = 1;
          hu[_i0].priv = (struct h5 *) malloc(_len_hu__i0__priv0*sizeof(struct h5));
          for(int _j0 = 0; _j0 < _len_hu__i0__priv0; _j0++) {
              hu[_i0].priv->rx_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = h5_rx_delimiter(hu,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hu0; _aux++) {
          free(hu[_aux].priv);
          }
          free(hu);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned char c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hu0 = 1;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
              int _len_hu__i0__priv0 = 1;
          hu[_i0].priv = (struct h5 *) malloc(_len_hu__i0__priv0*sizeof(struct h5));
          for(int _j0 = 0; _j0 < _len_hu__i0__priv0; _j0++) {
              hu[_i0].priv->rx_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = h5_rx_delimiter(hu,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hu0; _aux++) {
          free(hu[_aux].priv);
          }
          free(hu);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
