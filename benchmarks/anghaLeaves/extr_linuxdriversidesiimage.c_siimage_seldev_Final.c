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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  unsigned long u8 ;
struct TYPE_4__ {int host_flags; int channel; scalar_t__ hwif_data; } ;
typedef  TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef  TYPE_2__ ide_drive_t ;

/* Variables and functions */
 int IDE_HFLAG_MMIO ; 

__attribute__((used)) static inline unsigned long siimage_seldev(ide_drive_t *drive, int r)
{
	ide_hwif_t *hwif	= drive->hwif;
	unsigned long base	= (unsigned long)hwif->hwif_data;
	u8 unit			= drive->dn & 1;

	base += 0xA0 + r;
	if (hwif->host_flags & IDE_HFLAG_MMIO)
		base += hwif->channel << 6;
	else
		base += hwif->channel << 4;
	base |= unit << unit;
	return base;
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
          int r = 100;
          int _len_drive0 = 1;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].dn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__hwif0 = 1;
          drive[_i0].hwif = (struct TYPE_4__ *) malloc(_len_drive__i0__hwif0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_drive__i0__hwif0; _j0++) {
            drive[_i0].hwif->host_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].hwif->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].hwif->hwif_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = siimage_seldev(drive,r);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].hwif);
          }
          free(drive);
        
        break;
    }
    // big-arr
    case 1:
    {
          int r = 255;
          int _len_drive0 = 65025;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].dn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__hwif0 = 1;
          drive[_i0].hwif = (struct TYPE_4__ *) malloc(_len_drive__i0__hwif0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_drive__i0__hwif0; _j0++) {
            drive[_i0].hwif->host_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].hwif->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].hwif->hwif_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = siimage_seldev(drive,r);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].hwif);
          }
          free(drive);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int r = 10;
          int _len_drive0 = 100;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].dn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__hwif0 = 1;
          drive[_i0].hwif = (struct TYPE_4__ *) malloc(_len_drive__i0__hwif0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_drive__i0__hwif0; _j0++) {
            drive[_i0].hwif->host_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].hwif->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        drive[_i0].hwif->hwif_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = siimage_seldev(drive,r);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].hwif);
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
