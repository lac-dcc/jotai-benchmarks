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
struct seq_file {int dummy; } ;
struct Scsi_Host {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int sym_show_info(struct seq_file *m, struct Scsi_Host *shost)
{
#ifdef SYM_LINUX_USER_INFO_SUPPORT
	struct sym_data *sym_data = shost_priv(shost);
	struct pci_dev *pdev = sym_data->pdev;
	struct sym_hcb *np = sym_data->ncb;

	seq_printf(m, "Chip " NAME53C "%s, device id 0x%x, "
		 "revision id 0x%x\n", np->s.chip_name,
		 pdev->device, pdev->revision);
	seq_printf(m, "At PCI address %s, IRQ %u\n",
			 pci_name(pdev), pdev->irq);
	seq_printf(m, "Min. period factor %d, %s SCSI BUS%s\n",
		 (int) (np->minsync_dt ? np->minsync_dt : np->minsync),
		 np->maxwide ? "Wide" : "Narrow",
		 np->minsync_dt ? ", DT capable" : "");

	seq_printf(m, "Max. started commands %d, "
		 "max. commands per LUN %d\n",
		 SYM_CONF_MAX_START, SYM_CONF_MAX_TAG);

	return 0;
#else
	return -EINVAL;
#endif /* SYM_LINUX_USER_INFO_SUPPORT */
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
          int _len_m0 = 1;
          struct seq_file * m = (struct seq_file *) malloc(_len_m0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_shost0 = 1;
          struct Scsi_Host * shost = (struct Scsi_Host *) malloc(_len_shost0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_shost0; _i0++) {
            shost[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sym_show_info(m,shost);
          printf("%d\n", benchRet); 
          free(m);
          free(shost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
