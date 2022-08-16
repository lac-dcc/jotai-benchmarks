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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int host_id; } ;
struct TYPE_4__ {int flags; int host_id; int flags1; int flags2; } ;
struct TYPE_6__ {TYPE_2__ Tekram; TYPE_1__ Symbios; } ;
struct sym_nvram {int type; TYPE_3__ data; } ;
struct sym_hcb {int rv_scntl0; int myaddr; int verbose; int /*<<< orphan*/  usrflags; } ;
struct Scsi_Host {int reverse_ordering; } ;

/* Variables and functions */
 int SYMBIOS_AVOID_BUS_RESET ; 
 int SYMBIOS_PARITY_ENABLE ; 
 int SYMBIOS_SCAN_HI_LO ; 
 int SYMBIOS_VERBOSE_MSGS ; 
 int /*<<< orphan*/  SYM_AVOID_BUS_RESET ; 
#define  SYM_SYMBIOS_NVRAM 129 
#define  SYM_TEKRAM_NVRAM 128 

void sym_nvram_setup_host(struct Scsi_Host *shost, struct sym_hcb *np, struct sym_nvram *nvram)
{
	/*
	 *  Get parity checking, host ID, verbose mode 
	 *  and miscellaneous host flags from NVRAM.
	 */
	switch (nvram->type) {
	case SYM_SYMBIOS_NVRAM:
		if (!(nvram->data.Symbios.flags & SYMBIOS_PARITY_ENABLE))
			np->rv_scntl0  &= ~0x0a;
		np->myaddr = nvram->data.Symbios.host_id & 0x0f;
		if (nvram->data.Symbios.flags & SYMBIOS_VERBOSE_MSGS)
			np->verbose += 1;
		if (nvram->data.Symbios.flags1 & SYMBIOS_SCAN_HI_LO)
			shost->reverse_ordering = 1;
		if (nvram->data.Symbios.flags2 & SYMBIOS_AVOID_BUS_RESET)
			np->usrflags |= SYM_AVOID_BUS_RESET;
		break;
	case SYM_TEKRAM_NVRAM:
		np->myaddr = nvram->data.Tekram.host_id & 0x0f;
		break;
#ifdef CONFIG_PARISC
	case SYM_PARISC_PDC:
		if (nvram->data.parisc.host_id != -1)
			np->myaddr = nvram->data.parisc.host_id;
		if (nvram->data.parisc.factor != -1)
			np->minsync = nvram->data.parisc.factor;
		if (nvram->data.parisc.width != -1)
			np->maxwide = nvram->data.parisc.width;
		switch (nvram->data.parisc.mode) {
			case 0: np->scsi_mode = SMODE_SE; break;
			case 1: np->scsi_mode = SMODE_HVD; break;
			case 2: np->scsi_mode = SMODE_LVD; break;
			default: break;
		}
#endif
	default:
		break;
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
          int _len_shost0 = 1;
          struct Scsi_Host * shost = (struct Scsi_Host *) malloc(_len_shost0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_shost0; _i0++) {
            shost[_i0].reverse_ordering = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 1;
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].rv_scntl0 = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].myaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].verbose = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 1;
          struct sym_nvram * nvram = (struct sym_nvram *) malloc(_len_nvram0*sizeof(struct sym_nvram));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
            nvram[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].data.Tekram.host_id = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].data.Symbios.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].data.Symbios.host_id = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].data.Symbios.flags1 = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].data.Symbios.flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_nvram_setup_host(shost,np,nvram);
          free(shost);
          free(np);
          free(nvram);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
