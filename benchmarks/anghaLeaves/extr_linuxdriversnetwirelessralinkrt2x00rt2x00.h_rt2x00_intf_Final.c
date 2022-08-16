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
struct TYPE_2__ {int intf; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;
typedef  enum rt2x00_chip_intf { ____Placeholder_rt2x00_chip_intf } rt2x00_chip_intf ;

/* Variables and functions */

__attribute__((used)) static inline bool rt2x00_intf(struct rt2x00_dev *rt2x00dev,
			       enum rt2x00_chip_intf intf)
{
	return (rt2x00dev->chip.intf == intf);
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
          enum rt2x00_chip_intf intf = 100;
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
            rt2x00dev[_i0].chip.intf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rt2x00_intf(rt2x00dev,intf);
          printf("%d\n", benchRet); 
          free(rt2x00dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum rt2x00_chip_intf intf = 10;
          int _len_rt2x00dev0 = 100;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
            rt2x00dev[_i0].chip.intf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rt2x00_intf(rt2x00dev,intf);
          printf("%d\n", benchRet); 
          free(rt2x00dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
