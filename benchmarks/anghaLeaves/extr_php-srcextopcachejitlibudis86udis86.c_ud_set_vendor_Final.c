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
struct ud {unsigned int vendor; } ;

/* Variables and functions */
 unsigned int UD_VENDOR_AMD ; 
#define  UD_VENDOR_ANY 129 
#define  UD_VENDOR_INTEL 128 

extern void 
ud_set_vendor(struct ud* u, unsigned v)
{
  switch(v) {
  case UD_VENDOR_INTEL:
    u->vendor = v;
    break;
  case UD_VENDOR_ANY:
    u->vendor = v;
    break;
  default:
    u->vendor = UD_VENDOR_AMD;
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
          unsigned int v = 100;
          int _len_u0 = 1;
          struct ud * u = (struct ud *) malloc(_len_u0*sizeof(struct ud));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0].vendor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ud_set_vendor(u,v);
          free(u);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int v = 10;
          int _len_u0 = 100;
          struct ud * u = (struct ud *) malloc(_len_u0*sizeof(struct ud));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0].vendor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ud_set_vendor(u,v);
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
