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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct cdrom_device_info {int /*<<< orphan*/  use_count; TYPE_1__* handle; } ;
struct TYPE_2__ {int /*<<< orphan*/  atapi_flags; } ;
typedef  TYPE_1__ ide_drive_t ;

/* Variables and functions */
 int /*<<< orphan*/  IDE_AFLAG_TOC_VALID ; 

void ide_cdrom_release_real(struct cdrom_device_info *cdi)
{
	ide_drive_t *drive = cdi->handle;

	if (!cdi->use_count)
		drive->atapi_flags &= ~IDE_AFLAG_TOC_VALID;
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
          int _len_cdi0 = 1;
          struct cdrom_device_info * cdi = (struct cdrom_device_info *) malloc(_len_cdi0*sizeof(struct cdrom_device_info));
          for(int _i0 = 0; _i0 < _len_cdi0; _i0++) {
            cdi[_i0].use_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cdi__i0__handle0 = 1;
          cdi[_i0].handle = (struct TYPE_2__ *) malloc(_len_cdi__i0__handle0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cdi__i0__handle0; _j0++) {
            cdi[_i0].handle->atapi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ide_cdrom_release_real(cdi);
          for(int _aux = 0; _aux < _len_cdi0; _aux++) {
          free(cdi[_aux].handle);
          }
          free(cdi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
