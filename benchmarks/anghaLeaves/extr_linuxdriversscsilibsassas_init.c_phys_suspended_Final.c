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
struct sas_ha_struct {int num_phys; struct asd_sas_phy** sas_phy; } ;
struct asd_sas_phy {scalar_t__ suspended; } ;

/* Variables and functions */

__attribute__((used)) static int phys_suspended(struct sas_ha_struct *ha)
{
	int i, rc = 0;

	for (i = 0; i < ha->num_phys; i++) {
		struct asd_sas_phy *phy = ha->sas_phy[i];

		if (phy->suspended)
			rc++;
	}

	return rc;
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
          int _len_ha0 = 1;
          struct sas_ha_struct * ha = (struct sas_ha_struct *) malloc(_len_ha0*sizeof(struct sas_ha_struct));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].num_phys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__sas_phy0 = 1;
          ha[_i0].sas_phy = (struct asd_sas_phy **) malloc(_len_ha__i0__sas_phy0*sizeof(struct asd_sas_phy *));
          for(int _j0 = 0; _j0 < _len_ha__i0__sas_phy0; _j0++) {
            int _len_ha__i0__sas_phy1 = 1;
            ha[_i0].sas_phy[_j0] = (struct asd_sas_phy *) malloc(_len_ha__i0__sas_phy1*sizeof(struct asd_sas_phy));
            for(int _j1 = 0; _j1 < _len_ha__i0__sas_phy1; _j1++) {
              ha[_i0].sas_phy[_j0]->suspended = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = phys_suspended(ha);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].sas_phy));
        free(ha[_aux].sas_phy);
          }
          free(ha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
