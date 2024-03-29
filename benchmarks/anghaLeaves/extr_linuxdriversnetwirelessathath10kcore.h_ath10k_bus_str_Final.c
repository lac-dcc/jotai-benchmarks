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
       0            empty\n\
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
typedef  enum ath10k_bus { ____Placeholder_ath10k_bus } ath10k_bus ;

/* Variables and functions */
#define  ATH10K_BUS_AHB 132 
#define  ATH10K_BUS_PCI 131 
#define  ATH10K_BUS_SDIO 130 
#define  ATH10K_BUS_SNOC 129 
#define  ATH10K_BUS_USB 128 

__attribute__((used)) static inline const char *ath10k_bus_str(enum ath10k_bus bus)
{
	switch (bus) {
	case ATH10K_BUS_PCI:
		return "pci";
	case ATH10K_BUS_AHB:
		return "ahb";
	case ATH10K_BUS_SDIO:
		return "sdio";
	case ATH10K_BUS_USB:
		return "usb";
	case ATH10K_BUS_SNOC:
		return "snoc";
	}

	return "unknown";
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          enum ath10k_bus bus = 0;
        
          const char * benchRet = ath10k_bus_str(bus);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
