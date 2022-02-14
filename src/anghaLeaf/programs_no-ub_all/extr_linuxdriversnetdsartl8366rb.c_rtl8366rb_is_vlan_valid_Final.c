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
       0            big-arr\n\
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
struct realtek_smi {scalar_t__ vlan4k_enabled; } ;

/* Variables and functions */
 int RTL8366RB_NUM_VIDS ; 
 unsigned int RTL8366RB_NUM_VLANS ; 

__attribute__((used)) static bool rtl8366rb_is_vlan_valid(struct realtek_smi *smi, unsigned int vlan)
{
	unsigned int max = RTL8366RB_NUM_VLANS;

	if (smi->vlan4k_enabled)
		max = RTL8366RB_NUM_VIDS - 1;

	if (vlan == 0 || vlan >= max)
		return false;

	return true;
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

    // big-arr
    case 0:
    {
          unsigned int vlan = 255;
          int _len_smi0 = 1;
          struct realtek_smi * smi = (struct realtek_smi *) malloc(_len_smi0*sizeof(struct realtek_smi));
          for(int _i0 = 0; _i0 < _len_smi0; _i0++) {
            smi->vlan4k_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtl8366rb_is_vlan_valid(smi,vlan);
          printf("%d\n", benchRet); 
          free(smi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
