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
struct nic {int* eeprom; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;

/* Variables and functions */
 int eeprom_asf ; 
 size_t eeprom_config_asf ; 
 int eeprom_gcl ; 
 size_t eeprom_smbus_addr ; 

__attribute__((used)) static int e100_asf(struct nic *nic)
{
	/* ASF can be enabled from eeprom */
	return (nic->pdev->device >= 0x1050) && (nic->pdev->device <= 0x1057) &&
	   (nic->eeprom[eeprom_config_asf] & eeprom_asf) &&
	   !(nic->eeprom[eeprom_config_asf] & eeprom_gcl) &&
	   ((nic->eeprom[eeprom_smbus_addr] & 0xFF) != 0xFE);
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
          int _len_nic0 = 1;
          struct nic * nic = (struct nic *) malloc(_len_nic0*sizeof(struct nic));
          for(int _i0 = 0; _i0 < _len_nic0; _i0++) {
              int _len_nic__i0__eeprom0 = 1;
          nic[_i0].eeprom = (int *) malloc(_len_nic__i0__eeprom0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__eeprom0; _j0++) {
            nic[_i0].eeprom[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nic__i0__pdev0 = 1;
          nic[_i0].pdev = (struct TYPE_2__ *) malloc(_len_nic__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_nic__i0__pdev0; _j0++) {
            nic[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = e100_asf(nic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_nic0; _aux++) {
          free(nic[_aux].eeprom);
          }
          for(int _aux = 0; _aux < _len_nic0; _aux++) {
          free(nic[_aux].pdev);
          }
          free(nic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
