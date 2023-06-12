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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct ftdi_private {int custom_divisor; int force_baud; int force_rtscts; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  ASYNC_SPD_CUST ; 

__attribute__((used)) static void ftdi_HE_TIRA1_setup(struct ftdi_private *priv)
{
	priv->flags |= ASYNC_SPD_CUST;
	priv->custom_divisor = 240;
	priv->force_baud = 38400;
	priv->force_rtscts = 1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_priv0 = 65025;
          struct ftdi_private * priv = (struct ftdi_private *) malloc(_len_priv0*sizeof(struct ftdi_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].custom_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].force_baud = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].force_rtscts = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ftdi_HE_TIRA1_setup(priv);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_priv0 = 100;
          struct ftdi_private * priv = (struct ftdi_private *) malloc(_len_priv0*sizeof(struct ftdi_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].custom_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].force_baud = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].force_rtscts = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ftdi_HE_TIRA1_setup(priv);
          free(priv);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_priv0 = 1;
          struct ftdi_private * priv = (struct ftdi_private *) malloc(_len_priv0*sizeof(struct ftdi_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].custom_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].force_baud = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].force_rtscts = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ftdi_HE_TIRA1_setup(priv);
          free(priv);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
