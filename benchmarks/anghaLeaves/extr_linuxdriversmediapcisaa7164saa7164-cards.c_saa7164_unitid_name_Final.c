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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u8 ;
struct saa7164_unit {scalar_t__ type; scalar_t__ id; char* name; } ;
struct saa7164_dev {size_t board; } ;
struct TYPE_2__ {struct saa7164_unit* unit; } ;

/* Variables and functions */
 int SAA7164_MAX_UNITS ; 
 scalar_t__ SAA7164_UNIT_UNDEFINED ; 
 TYPE_1__* saa7164_boards ; 

char *saa7164_unitid_name(struct saa7164_dev *dev, u8 unitid)
{
	char *undefed = "UNDEFINED";
	char *bridge = "BRIDGE";
	struct saa7164_unit *unit;
	int i;

	if (unitid == 0)
		return bridge;

	for (i = 0; i < SAA7164_MAX_UNITS; i++) {
		unit = &saa7164_boards[dev->board].unit[i];

		if (unit->type == SAA7164_UNIT_UNDEFINED)
			continue;

		if (unitid == unit->id)
				return unit->name;
	}

	return undefed;
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
          long unitid = 100;
          int _len_dev0 = 1;
          struct saa7164_dev * dev = (struct saa7164_dev *) malloc(_len_dev0*sizeof(struct saa7164_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].board = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = saa7164_unitid_name(dev,unitid);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long unitid = 10;
          int _len_dev0 = 100;
          struct saa7164_dev * dev = (struct saa7164_dev *) malloc(_len_dev0*sizeof(struct saa7164_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].board = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = saa7164_unitid_name(dev,unitid);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
