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
       0            big-arr-10x\n\
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
struct ata_ioports {scalar_t__ cmd_addr; scalar_t__ command_addr; scalar_t__ status_addr; scalar_t__ device_addr; scalar_t__ lbah_addr; scalar_t__ lbam_addr; scalar_t__ lbal_addr; scalar_t__ nsect_addr; scalar_t__ feature_addr; scalar_t__ error_addr; scalar_t__ data_addr; } ;

/* Variables and functions */
 unsigned int ATA_REG_CMD ; 
 unsigned int ATA_REG_DATA ; 
 unsigned int ATA_REG_DEVICE ; 
 unsigned int ATA_REG_ERR ; 
 unsigned int ATA_REG_FEATURE ; 
 unsigned int ATA_REG_LBAH ; 
 unsigned int ATA_REG_LBAL ; 
 unsigned int ATA_REG_LBAM ; 
 unsigned int ATA_REG_NSECT ; 
 unsigned int ATA_REG_STATUS ; 

__attribute__((used)) static void pata_platform_setup_port(struct ata_ioports *ioaddr,
				     unsigned int shift)
{
	/* Fixup the port shift for platforms that need it */
	ioaddr->data_addr	= ioaddr->cmd_addr + (ATA_REG_DATA    << shift);
	ioaddr->error_addr	= ioaddr->cmd_addr + (ATA_REG_ERR     << shift);
	ioaddr->feature_addr	= ioaddr->cmd_addr + (ATA_REG_FEATURE << shift);
	ioaddr->nsect_addr	= ioaddr->cmd_addr + (ATA_REG_NSECT   << shift);
	ioaddr->lbal_addr	= ioaddr->cmd_addr + (ATA_REG_LBAL    << shift);
	ioaddr->lbam_addr	= ioaddr->cmd_addr + (ATA_REG_LBAM    << shift);
	ioaddr->lbah_addr	= ioaddr->cmd_addr + (ATA_REG_LBAH    << shift);
	ioaddr->device_addr	= ioaddr->cmd_addr + (ATA_REG_DEVICE  << shift);
	ioaddr->status_addr	= ioaddr->cmd_addr + (ATA_REG_STATUS  << shift);
	ioaddr->command_addr	= ioaddr->cmd_addr + (ATA_REG_CMD     << shift);
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

    // big-arr-10x
    case 0:
    {
          unsigned int shift = 10;
          int _len_ioaddr0 = 100;
          struct ata_ioports * ioaddr = (struct ata_ioports *) malloc(_len_ioaddr0*sizeof(struct ata_ioports));
          for(int _i0 = 0; _i0 < _len_ioaddr0; _i0++) {
            ioaddr[_i0].cmd_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].command_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].status_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].device_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].lbah_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].lbam_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].lbal_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].nsect_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].feature_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].error_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ioaddr[_i0].data_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pata_platform_setup_port(ioaddr,shift);
          free(ioaddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
