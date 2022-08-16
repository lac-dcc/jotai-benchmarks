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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
typedef  int u16 ;
struct TYPE_3__ {int* id; int mult_req; int /*<<< orphan*/  special_flags; } ;
typedef  TYPE_1__ ide_drive_t ;

/* Variables and functions */
 size_t ATA_ID_MAX_MULTSECT ; 
 size_t ATA_ID_MULTSECT ; 
 int /*<<< orphan*/  IDE_SFLAG_SET_MULTMODE ; 

__attribute__((used)) static void ide_disk_init_mult_count(ide_drive_t *drive)
{
	u16 *id = drive->id;
	u8 max_multsect = id[ATA_ID_MAX_MULTSECT] & 0xff;

	if (max_multsect) {
		if ((max_multsect / 2) > 1)
			id[ATA_ID_MULTSECT] = max_multsect | 0x100;
		else
			id[ATA_ID_MULTSECT] &= ~0x1ff;

		drive->mult_req = id[ATA_ID_MULTSECT] & 0xff;

		if (drive->mult_req)
			drive->special_flags |= IDE_SFLAG_SET_MULTMODE;
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
          int _len_drive0 = 1;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              int _len_drive__i0__id0 = 1;
          drive[_i0].id = (int *) malloc(_len_drive__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drive__i0__id0; _j0++) {
            drive[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        drive[_i0].mult_req = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].special_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_disk_init_mult_count(drive);
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].id);
          }
          free(drive);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
