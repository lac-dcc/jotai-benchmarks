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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct _MPT_SCSI_HOST {TYPE_4__* ioc; } ;
struct TYPE_7__ {TYPE_2__* pIocPg2; } ;
struct TYPE_8__ {TYPE_3__ raid_data; } ;
struct TYPE_6__ {int NumActiveVolumes; TYPE_1__* RaidVolume; } ;
struct TYPE_5__ {scalar_t__ VolumeID; } ;
typedef  TYPE_4__ MPT_ADAPTER ;

/* Variables and functions */

__attribute__((used)) static int
mptspi_is_raid(struct _MPT_SCSI_HOST *hd, u32 id)
{
	int i, rc = 0;
	MPT_ADAPTER *ioc = hd->ioc;

	if (!ioc->raid_data.pIocPg2)
		goto out;

	if (!ioc->raid_data.pIocPg2->NumActiveVolumes)
		goto out;
	for (i=0; i < ioc->raid_data.pIocPg2->NumActiveVolumes; i++) {
		if (ioc->raid_data.pIocPg2->RaidVolume[i].VolumeID == id) {
			rc = 1;
			goto out;
		}
	}

 out:
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
          long id = 100;
          int _len_hd0 = 1;
          struct _MPT_SCSI_HOST * hd = (struct _MPT_SCSI_HOST *) malloc(_len_hd0*sizeof(struct _MPT_SCSI_HOST));
          for(int _i0 = 0; _i0 < _len_hd0; _i0++) {
              int _len_hd__i0__ioc0 = 1;
          hd[_i0].ioc = (struct TYPE_8__ *) malloc(_len_hd__i0__ioc0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_hd__i0__ioc0; _j0++) {
              int _len_hd__i0__ioc_raid_data_pIocPg20 = 1;
          hd[_i0].ioc->raid_data.pIocPg2 = (struct TYPE_6__ *) malloc(_len_hd__i0__ioc_raid_data_pIocPg20*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hd__i0__ioc_raid_data_pIocPg20; _j0++) {
            hd[_i0].ioc->raid_data.pIocPg2->NumActiveVolumes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hd__i0__ioc_raid_data_pIocPg2_RaidVolume0 = 1;
          hd[_i0].ioc->raid_data.pIocPg2->RaidVolume = (struct TYPE_5__ *) malloc(_len_hd__i0__ioc_raid_data_pIocPg2_RaidVolume0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hd__i0__ioc_raid_data_pIocPg2_RaidVolume0; _j0++) {
            hd[_i0].ioc->raid_data.pIocPg2->RaidVolume->VolumeID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = mptspi_is_raid(hd,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hd0; _aux++) {
          free(hd[_aux].ioc);
          }
          free(hd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
