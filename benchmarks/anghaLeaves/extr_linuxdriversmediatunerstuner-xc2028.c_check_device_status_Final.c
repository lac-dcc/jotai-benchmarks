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
struct xc2028_data {int state; } ;

/* Variables and functions */
 int EAGAIN ; 
 int ENODEV ; 
#define  XC2028_ACTIVE 132 
#define  XC2028_NODEV 131 
#define  XC2028_NO_FIRMWARE 130 
#define  XC2028_SLEEP 129 
#define  XC2028_WAITING_FIRMWARE 128 

__attribute__((used)) static int check_device_status(struct xc2028_data *priv)
{
	switch (priv->state) {
	case XC2028_NO_FIRMWARE:
	case XC2028_WAITING_FIRMWARE:
		return -EAGAIN;
	case XC2028_ACTIVE:
		return 1;
	case XC2028_SLEEP:
		return 0;
	case XC2028_NODEV:
		return -ENODEV;
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
          int _len_priv0 = 1;
          struct xc2028_data * priv = (struct xc2028_data *) malloc(_len_priv0*sizeof(struct xc2028_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_device_status(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_priv0 = 100;
          struct xc2028_data * priv = (struct xc2028_data *) malloc(_len_priv0*sizeof(struct xc2028_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_device_status(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
