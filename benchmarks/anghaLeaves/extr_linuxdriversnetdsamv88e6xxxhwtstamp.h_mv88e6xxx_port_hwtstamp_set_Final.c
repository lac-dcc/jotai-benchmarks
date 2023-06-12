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
struct ifreq {int dummy; } ;
struct dsa_switch {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static inline int mv88e6xxx_port_hwtstamp_set(struct dsa_switch *ds,
					      int port, struct ifreq *ifr)
{
	return -EOPNOTSUPP;
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
          int port = 100;
        
          int _len_ds0 = 1;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              ds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ifr0 = 1;
          struct ifreq * ifr = (struct ifreq *) malloc(_len_ifr0*sizeof(struct ifreq));
          for(int _i0 = 0; _i0 < _len_ifr0; _i0++) {
              ifr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mv88e6xxx_port_hwtstamp_set(ds,port,ifr);
          printf("%d\n", benchRet); 
          free(ds);
          free(ifr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port = 255;
        
          int _len_ds0 = 65025;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              ds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ifr0 = 65025;
          struct ifreq * ifr = (struct ifreq *) malloc(_len_ifr0*sizeof(struct ifreq));
          for(int _i0 = 0; _i0 < _len_ifr0; _i0++) {
              ifr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mv88e6xxx_port_hwtstamp_set(ds,port,ifr);
          printf("%d\n", benchRet); 
          free(ds);
          free(ifr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port = 10;
        
          int _len_ds0 = 100;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              ds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ifr0 = 100;
          struct ifreq * ifr = (struct ifreq *) malloc(_len_ifr0*sizeof(struct ifreq));
          for(int _i0 = 0; _i0 < _len_ifr0; _i0++) {
              ifr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mv88e6xxx_port_hwtstamp_set(ds,port,ifr);
          printf("%d\n", benchRet); 
          free(ds);
          free(ifr);
        
        break;
    }
    // empty
    case 3:
    {
          int port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ds0 = 1;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              ds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ifr0 = 1;
          struct ifreq * ifr = (struct ifreq *) malloc(_len_ifr0*sizeof(struct ifreq));
          for(int _i0 = 0; _i0 < _len_ifr0; _i0++) {
              ifr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mv88e6xxx_port_hwtstamp_set(ds,port,ifr);
          printf("%d\n", benchRet); 
          free(ds);
          free(ifr);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
