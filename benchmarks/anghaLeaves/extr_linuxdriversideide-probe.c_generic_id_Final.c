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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_3__ {int /*<<< orphan*/  sect; int /*<<< orphan*/  head; int /*<<< orphan*/  cyl; int /*<<< orphan*/ * id; } ;
typedef  TYPE_1__ ide_drive_t ;

/* Variables and functions */
 size_t ATA_ID_CUR_CYLS ; 
 size_t ATA_ID_CUR_HEADS ; 
 size_t ATA_ID_CUR_SECTORS ; 
 size_t ATA_ID_CYLS ; 
 size_t ATA_ID_HEADS ; 
 size_t ATA_ID_SECTORS ; 

__attribute__((used)) static void generic_id(ide_drive_t *drive)
{
	u16 *id = drive->id;

	id[ATA_ID_CUR_CYLS]	= id[ATA_ID_CYLS]	= drive->cyl;
	id[ATA_ID_CUR_HEADS]	= id[ATA_ID_HEADS]	= drive->head;
	id[ATA_ID_CUR_SECTORS]	= id[ATA_ID_SECTORS]	= drive->sect;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_drive0 = 65025;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].sect = ((-2 * (next_i()%2)) + 1) * next_i();
          drive[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          drive[_i0].cyl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__id0 = 1;
          drive[_i0].id = (int *) malloc(_len_drive__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drive__i0__id0; _j0++) {
            drive[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          generic_id(drive);
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].id);
          }
          free(drive);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_drive0 = 100;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].sect = ((-2 * (next_i()%2)) + 1) * next_i();
          drive[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          drive[_i0].cyl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__id0 = 1;
          drive[_i0].id = (int *) malloc(_len_drive__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drive__i0__id0; _j0++) {
            drive[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          generic_id(drive);
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].id);
          }
          free(drive);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_drive0 = 1;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].sect = ((-2 * (next_i()%2)) + 1) * next_i();
          drive[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          drive[_i0].cyl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__id0 = 1;
          drive[_i0].id = (int *) malloc(_len_drive__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drive__i0__id0; _j0++) {
            drive[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          generic_id(drive);
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
