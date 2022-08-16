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
struct ata_ioports {scalar_t__ cmd_addr; scalar_t__ command_addr; scalar_t__ status_addr; scalar_t__ device_addr; scalar_t__ lbah_addr; scalar_t__ lbam_addr; scalar_t__ lbal_addr; scalar_t__ nsect_addr; scalar_t__ feature_addr; scalar_t__ error_addr; scalar_t__ data_addr; } ;

/* Variables and functions */
 scalar_t__ ATA_REG_CMD ; 
 scalar_t__ ATA_REG_DATA ; 
 scalar_t__ ATA_REG_DEVICE ; 
 scalar_t__ ATA_REG_ERR ; 
 scalar_t__ ATA_REG_FEATURE ; 
 scalar_t__ ATA_REG_LBAH ; 
 scalar_t__ ATA_REG_LBAL ; 
 scalar_t__ ATA_REG_LBAM ; 
 scalar_t__ ATA_REG_NSECT ; 
 scalar_t__ ATA_REG_STATUS ; 

void ata_sff_std_ports(struct ata_ioports *ioaddr)
{
	ioaddr->data_addr = ioaddr->cmd_addr + ATA_REG_DATA;
	ioaddr->error_addr = ioaddr->cmd_addr + ATA_REG_ERR;
	ioaddr->feature_addr = ioaddr->cmd_addr + ATA_REG_FEATURE;
	ioaddr->nsect_addr = ioaddr->cmd_addr + ATA_REG_NSECT;
	ioaddr->lbal_addr = ioaddr->cmd_addr + ATA_REG_LBAL;
	ioaddr->lbam_addr = ioaddr->cmd_addr + ATA_REG_LBAM;
	ioaddr->lbah_addr = ioaddr->cmd_addr + ATA_REG_LBAH;
	ioaddr->device_addr = ioaddr->cmd_addr + ATA_REG_DEVICE;
	ioaddr->status_addr = ioaddr->cmd_addr + ATA_REG_STATUS;
	ioaddr->command_addr = ioaddr->cmd_addr + ATA_REG_CMD;
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
          int _len_ioaddr0 = 1;
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
          ata_sff_std_ports(ioaddr);
          free(ioaddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
