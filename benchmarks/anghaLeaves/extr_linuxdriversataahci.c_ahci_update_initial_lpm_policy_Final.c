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
struct ata_port {int target_lpm_policy; } ;
struct ahci_host_priv {int flags; } ;

/* Variables and functions */
 int AHCI_HFLAG_IS_MOBILE ; 
 int ATA_LPM_MIN_POWER ; 
 int ATA_LPM_UNKNOWN ; 
 int CONFIG_SATA_MOBILE_LPM_POLICY ; 
 int mobile_lpm_policy ; 

__attribute__((used)) static void ahci_update_initial_lpm_policy(struct ata_port *ap,
					   struct ahci_host_priv *hpriv)
{
	int policy = CONFIG_SATA_MOBILE_LPM_POLICY;


	/* Ignore processing for non mobile platforms */
	if (!(hpriv->flags & AHCI_HFLAG_IS_MOBILE))
		return;

	/* user modified policy via module param */
	if (mobile_lpm_policy != -1) {
		policy = mobile_lpm_policy;
		goto update_policy;
	}

#ifdef CONFIG_ACPI
	if (policy > ATA_LPM_MED_POWER &&
	    (acpi_gbl_FADT.flags & ACPI_FADT_LOW_POWER_S0)) {
		if (hpriv->cap & HOST_CAP_PART)
			policy = ATA_LPM_MIN_POWER_WITH_PARTIAL;
		else if (hpriv->cap & HOST_CAP_SSC)
			policy = ATA_LPM_MIN_POWER;
	}
#endif

update_policy:
	if (policy >= ATA_LPM_UNKNOWN && policy <= ATA_LPM_MIN_POWER)
		ap->target_lpm_policy = policy;
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
          int _len_ap0 = 1;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
            ap[_i0].target_lpm_policy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hpriv0 = 1;
          struct ahci_host_priv * hpriv = (struct ahci_host_priv *) malloc(_len_hpriv0*sizeof(struct ahci_host_priv));
          for(int _i0 = 0; _i0 < _len_hpriv0; _i0++) {
            hpriv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahci_update_initial_lpm_policy(ap,hpriv);
          free(ap);
          free(hpriv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
