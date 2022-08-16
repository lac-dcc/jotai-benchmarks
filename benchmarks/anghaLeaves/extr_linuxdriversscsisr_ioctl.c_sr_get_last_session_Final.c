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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ lba; } ;
struct cdrom_multisession {int xa_flag; TYPE_1__ addr; } ;
struct cdrom_device_info {TYPE_2__* handle; } ;
struct TYPE_4__ {scalar_t__ ms_offset; scalar_t__ xa_flag; } ;
typedef  TYPE_2__ Scsi_CD ;

/* Variables and functions */

int sr_get_last_session(struct cdrom_device_info *cdi,
			struct cdrom_multisession *ms_info)
{
	Scsi_CD *cd = cdi->handle;

	ms_info->addr.lba = cd->ms_offset;
	ms_info->xa_flag = cd->xa_flag || cd->ms_offset > 0;

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
          int _len_cdi0 = 1;
          struct cdrom_device_info * cdi = (struct cdrom_device_info *) malloc(_len_cdi0*sizeof(struct cdrom_device_info));
          for(int _i0 = 0; _i0 < _len_cdi0; _i0++) {
              int _len_cdi__i0__handle0 = 1;
          cdi[_i0].handle = (struct TYPE_4__ *) malloc(_len_cdi__i0__handle0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cdi__i0__handle0; _j0++) {
            cdi[_i0].handle->ms_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cdi[_i0].handle->xa_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ms_info0 = 1;
          struct cdrom_multisession * ms_info = (struct cdrom_multisession *) malloc(_len_ms_info0*sizeof(struct cdrom_multisession));
          for(int _i0 = 0; _i0 < _len_ms_info0; _i0++) {
            ms_info[_i0].xa_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        ms_info[_i0].addr.lba = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sr_get_last_session(cdi,ms_info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cdi0; _aux++) {
          free(cdi[_aux].handle);
          }
          free(cdi);
          free(ms_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
