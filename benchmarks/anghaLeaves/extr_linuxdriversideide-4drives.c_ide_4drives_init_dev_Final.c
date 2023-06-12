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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int select; TYPE_1__* hwif; } ;
typedef  TYPE_2__ ide_drive_t ;
struct TYPE_4__ {scalar_t__ channel; } ;

/* Variables and functions */

__attribute__((used)) static void ide_4drives_init_dev(ide_drive_t *drive)
{
	if (drive->hwif->channel)
		drive->select ^= 0x20;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_drive0 = 65025;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].select = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__hwif0 = 1;
          drive[_i0].hwif = (struct TYPE_4__ *) malloc(_len_drive__i0__hwif0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_drive__i0__hwif0; _j0++) {
              drive[_i0].hwif->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ide_4drives_init_dev(drive);
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].hwif);
          }
          free(drive);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_drive0 = 100;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].select = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__hwif0 = 1;
          drive[_i0].hwif = (struct TYPE_4__ *) malloc(_len_drive__i0__hwif0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_drive__i0__hwif0; _j0++) {
              drive[_i0].hwif->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ide_4drives_init_dev(drive);
          for(int _aux = 0; _aux < _len_drive0; _aux++) {
          free(drive[_aux].hwif);
          }
          free(drive);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_drive0 = 1;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].select = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drive__i0__hwif0 = 1;
          drive[_i0].hwif = (struct TYPE_4__ *) malloc(_len_drive__i0__hwif0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_drive__i0__hwif0; _j0++) {
              drive[_i0].hwif->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ide_4drives_init_dev(drive);
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
