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
typedef  scalar_t__ u64 ;
struct smcd_dev {int dummy; } ;
struct smc_link_group {scalar_t__ peer_gid; struct smcd_dev* smcd; } ;

/* Variables and functions */

__attribute__((used)) static bool smcd_lgr_match(struct smc_link_group *lgr,
			   struct smcd_dev *smcismdev, u64 peer_gid)
{
	return lgr->peer_gid == peer_gid && lgr->smcd == smcismdev;
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
          long peer_gid = 100;
          int _len_lgr0 = 1;
          struct smc_link_group * lgr = (struct smc_link_group *) malloc(_len_lgr0*sizeof(struct smc_link_group));
          for(int _i0 = 0; _i0 < _len_lgr0; _i0++) {
            lgr[_i0].peer_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lgr__i0__smcd0 = 1;
          lgr[_i0].smcd = (struct smcd_dev *) malloc(_len_lgr__i0__smcd0*sizeof(struct smcd_dev));
          for(int _j0 = 0; _j0 < _len_lgr__i0__smcd0; _j0++) {
            lgr[_i0].smcd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_smcismdev0 = 1;
          struct smcd_dev * smcismdev = (struct smcd_dev *) malloc(_len_smcismdev0*sizeof(struct smcd_dev));
          for(int _i0 = 0; _i0 < _len_smcismdev0; _i0++) {
            smcismdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smcd_lgr_match(lgr,smcismdev,peer_gid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lgr0; _aux++) {
          free(lgr[_aux].smcd);
          }
          free(lgr);
          free(smcismdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
