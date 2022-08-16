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
struct pcd_unit {int /*<<< orphan*/  present; } ;
struct cdrom_device_info {struct pcd_unit* handle; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int pcd_open(struct cdrom_device_info *cdi, int purpose)
{
	struct pcd_unit *cd = cdi->handle;
	if (!cd->present)
		return -ENODEV;
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
          int purpose = 100;
          int _len_cdi0 = 1;
          struct cdrom_device_info * cdi = (struct cdrom_device_info *) malloc(_len_cdi0*sizeof(struct cdrom_device_info));
          for(int _i0 = 0; _i0 < _len_cdi0; _i0++) {
              int _len_cdi__i0__handle0 = 1;
          cdi[_i0].handle = (struct pcd_unit *) malloc(_len_cdi__i0__handle0*sizeof(struct pcd_unit));
          for(int _j0 = 0; _j0 < _len_cdi__i0__handle0; _j0++) {
            cdi[_i0].handle->present = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcd_open(cdi,purpose);
          printf("%d\n", benchRet); 
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
