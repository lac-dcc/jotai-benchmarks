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

/* Variables and functions */
 int EINVAL ; 
 int vpi_bits ; 

__attribute__((used)) static inline int vpivci_to_channel (u16 * channel, const short vpi, const int vci) {
  unsigned short vci_bits = 10 - vpi_bits;
  if (0 <= vpi && vpi < 1<<vpi_bits && 0 <= vci && vci < 1<<vci_bits) {
    *channel = vpi<<vci_bits | vci;
    return *channel ? 0 : -EINVAL;
  }
  return -EINVAL;
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
          const short vpi = 100;
          const int vci = 100;
          int _len_channel0 = 1;
          int * channel = (int *) malloc(_len_channel0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpivci_to_channel(channel,vpi,vci);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          const short vpi = 10;
          const int vci = 10;
          int _len_channel0 = 100;
          int * channel = (int *) malloc(_len_channel0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpivci_to_channel(channel,vpi,vci);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
