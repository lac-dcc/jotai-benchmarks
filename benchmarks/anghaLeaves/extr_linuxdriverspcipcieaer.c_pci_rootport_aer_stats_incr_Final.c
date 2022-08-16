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
struct pci_dev {struct aer_stats* aer_stats; } ;
struct aer_stats {int /*<<< orphan*/  rootport_total_nonfatal_errs; int /*<<< orphan*/  rootport_total_fatal_errs; int /*<<< orphan*/  rootport_total_cor_errs; } ;
struct aer_err_source {int status; } ;

/* Variables and functions */
 int PCI_ERR_ROOT_COR_RCV ; 
 int PCI_ERR_ROOT_FATAL_RCV ; 
 int PCI_ERR_ROOT_UNCOR_RCV ; 

__attribute__((used)) static void pci_rootport_aer_stats_incr(struct pci_dev *pdev,
				 struct aer_err_source *e_src)
{
	struct aer_stats *aer_stats = pdev->aer_stats;

	if (!aer_stats)
		return;

	if (e_src->status & PCI_ERR_ROOT_COR_RCV)
		aer_stats->rootport_total_cor_errs++;

	if (e_src->status & PCI_ERR_ROOT_UNCOR_RCV) {
		if (e_src->status & PCI_ERR_ROOT_FATAL_RCV)
			aer_stats->rootport_total_fatal_errs++;
		else
			aer_stats->rootport_total_nonfatal_errs++;
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
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              int _len_pdev__i0__aer_stats0 = 1;
          pdev[_i0].aer_stats = (struct aer_stats *) malloc(_len_pdev__i0__aer_stats0*sizeof(struct aer_stats));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats0; _j0++) {
            pdev[_i0].aer_stats->rootport_total_nonfatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].aer_stats->rootport_total_fatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].aer_stats->rootport_total_cor_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_e_src0 = 1;
          struct aer_err_source * e_src = (struct aer_err_source *) malloc(_len_e_src0*sizeof(struct aer_err_source));
          for(int _i0 = 0; _i0 < _len_e_src0; _i0++) {
            e_src[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_rootport_aer_stats_incr(pdev,e_src);
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].aer_stats);
          }
          free(pdev);
          free(e_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
