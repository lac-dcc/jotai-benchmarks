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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ ACPI_ACTIVE_LOW ; 
 scalar_t__ ACPI_LEVEL_SENSITIVE ; 
 scalar_t__ ACPI_SHARED ; 
 unsigned long IORESOURCE_IRQ ; 
 unsigned long IORESOURCE_IRQ_HIGHEDGE ; 
 unsigned long IORESOURCE_IRQ_HIGHLEVEL ; 
 unsigned long IORESOURCE_IRQ_LOWEDGE ; 
 unsigned long IORESOURCE_IRQ_LOWLEVEL ; 
 unsigned long IORESOURCE_IRQ_SHAREABLE ; 

unsigned long acpi_dev_irq_flags(u8 triggering, u8 polarity, u8 shareable)
{
	unsigned long flags;

	if (triggering == ACPI_LEVEL_SENSITIVE)
		flags = polarity == ACPI_ACTIVE_LOW ?
			IORESOURCE_IRQ_LOWLEVEL : IORESOURCE_IRQ_HIGHLEVEL;
	else
		flags = polarity == ACPI_ACTIVE_LOW ?
			IORESOURCE_IRQ_LOWEDGE : IORESOURCE_IRQ_HIGHEDGE;

	if (shareable == ACPI_SHARED)
		flags |= IORESOURCE_IRQ_SHAREABLE;

	return flags | IORESOURCE_IRQ;
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
          long triggering = 100;
          long polarity = 100;
          long shareable = 100;
          unsigned long benchRet = acpi_dev_irq_flags(triggering,polarity,shareable);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long triggering = 255;
          long polarity = 255;
          long shareable = 255;
          unsigned long benchRet = acpi_dev_irq_flags(triggering,polarity,shareable);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long triggering = 10;
          long polarity = 10;
          long shareable = 10;
          unsigned long benchRet = acpi_dev_irq_flags(triggering,polarity,shareable);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
