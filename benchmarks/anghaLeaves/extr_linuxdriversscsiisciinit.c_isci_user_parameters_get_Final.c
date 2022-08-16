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
struct sci_user_parameters {int /*<<< orphan*/  max_concurr_spinup; int /*<<< orphan*/  no_outbound_task_timeout; int /*<<< orphan*/  ssp_max_occupancy_timeout; int /*<<< orphan*/  stp_max_occupancy_timeout; int /*<<< orphan*/  ssp_inactivity_timeout; int /*<<< orphan*/  stp_inactivity_timeout; struct sci_phy_user_params* phys; } ;
struct sci_phy_user_params {int align_insertion_frequency; int in_connection_align_insertion_frequency; int notify_enable_spin_up_insertion_frequency; int /*<<< orphan*/  max_speed_generation; } ;

/* Variables and functions */
 int SCI_MAX_PHYS ; 
 int /*<<< orphan*/  max_concurr_spinup ; 
 int /*<<< orphan*/  no_outbound_task_to ; 
 int /*<<< orphan*/  phy_gen ; 
 int /*<<< orphan*/  ssp_inactive_to ; 
 int /*<<< orphan*/  ssp_max_occ_to ; 
 int /*<<< orphan*/  stp_inactive_to ; 
 int /*<<< orphan*/  stp_max_occ_to ; 

__attribute__((used)) static void isci_user_parameters_get(struct sci_user_parameters *u)
{
	int i;

	for (i = 0; i < SCI_MAX_PHYS; i++) {
		struct sci_phy_user_params *u_phy = &u->phys[i];

		u_phy->max_speed_generation = phy_gen;

		/* we are not exporting these for now */
		u_phy->align_insertion_frequency = 0x7f;
		u_phy->in_connection_align_insertion_frequency = 0xff;
		u_phy->notify_enable_spin_up_insertion_frequency = 0x33;
	}

	u->stp_inactivity_timeout = stp_inactive_to;
	u->ssp_inactivity_timeout = ssp_inactive_to;
	u->stp_max_occupancy_timeout = stp_max_occ_to;
	u->ssp_max_occupancy_timeout = ssp_max_occ_to;
	u->no_outbound_task_timeout = no_outbound_task_to;
	u->max_concurr_spinup = max_concurr_spinup;
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
          int _len_u0 = 1;
          struct sci_user_parameters * u = (struct sci_user_parameters *) malloc(_len_u0*sizeof(struct sci_user_parameters));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0].max_concurr_spinup = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].no_outbound_task_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].ssp_max_occupancy_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].stp_max_occupancy_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].ssp_inactivity_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].stp_inactivity_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_u__i0__phys0 = 1;
          u[_i0].phys = (struct sci_phy_user_params *) malloc(_len_u__i0__phys0*sizeof(struct sci_phy_user_params));
          for(int _j0 = 0; _j0 < _len_u__i0__phys0; _j0++) {
            u[_i0].phys->align_insertion_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].phys->in_connection_align_insertion_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].phys->notify_enable_spin_up_insertion_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].phys->max_speed_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isci_user_parameters_get(u);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].phys);
          }
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
