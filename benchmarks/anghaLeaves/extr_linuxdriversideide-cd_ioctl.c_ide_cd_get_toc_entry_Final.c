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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct cdrom_info {struct atapi_toc* toc; } ;
struct atapi_toc_entry {int dummy; } ;
struct TYPE_4__ {int last_track; int first_track; } ;
struct atapi_toc {TYPE_1__ hdr; struct atapi_toc_entry* ent; } ;
struct TYPE_5__ {int atapi_flags; struct cdrom_info* driver_data; } ;
typedef  TYPE_2__ ide_drive_t ;

/* Variables and functions */
 int CDROM_LEADOUT ; 
 int EINVAL ; 
 int IDE_AFLAG_TOC_VALID ; 

__attribute__((used)) static int ide_cd_get_toc_entry(ide_drive_t *drive, int track,
				struct atapi_toc_entry **ent)
{
	struct cdrom_info *info = drive->driver_data;
	struct atapi_toc *toc = info->toc;
	int ntracks;

	/*
	 * don't serve cached data, if the toc isn't valid
	 */
	if ((drive->atapi_flags & IDE_AFLAG_TOC_VALID) == 0)
		return -EINVAL;

	/* Check validity of requested track number. */
	ntracks = toc->hdr.last_track - toc->hdr.first_track + 1;

	if (toc->hdr.first_track == CDROM_LEADOUT)
		ntracks = 0;

	if (track == CDROM_LEADOUT)
		*ent = &toc->ent[ntracks];
	else if (track < toc->hdr.first_track || track > toc->hdr.last_track)
		return -EINVAL;
	else
		*ent = &toc->ent[track - toc->hdr.first_track];

	return 0;
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
          int track = 100;
          int _len_drive0 = 1;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].atapi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__driver_data0 = 1;
          drive[_i0].driver_data = (struct cdrom_info *) malloc(_len_drive__i0__driver_data0*sizeof(struct cdrom_info));
          for(int _j0 = 0; _j0 < _len_drive__i0__driver_data0; _j0++) {
              int _len_drive__i0__driver_data_toc0 = 1;
          drive[_i0].driver_data->toc = (struct atapi_toc *) malloc(_len_drive__i0__driver_data_toc0*sizeof(struct atapi_toc));
          for(int _j0 = 0; _j0 < _len_drive__i0__driver_data_toc0; _j0++) {
            drive[_i0].driver_data->toc->hdr.last_track = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].driver_data->toc->hdr.first_track = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__driver_data_toc_ent0 = 1;
          drive[_i0].driver_data->toc->ent = (struct atapi_toc_entry *) malloc(_len_drive__i0__driver_data_toc_ent0*sizeof(struct atapi_toc_entry));
          for(int _j0 = 0; _j0 < _len_drive__i0__driver_data_toc_ent0; _j0++) {
            drive[_i0].driver_data->toc->ent->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_ent0 = 1;
          struct atapi_toc_entry ** ent = (struct atapi_toc_entry **) malloc(_len_ent0*sizeof(struct atapi_toc_entry *));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            int _len_ent1 = 1;
            ent[_i0] = (struct atapi_toc_entry *) malloc(_len_ent1*sizeof(struct atapi_toc_entry));
            for(int _i1 = 0; _i1 < _len_ent1; _i1++) {
              ent[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ide_cd_get_toc_entry(drive,track,ent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].driver_data);
          }
          free(drive);
          for(int i1 = 0; i1 < _len_ent0; i1++) {
            int _len_ent1 = 1;
              free(ent[i1]);
          }
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
