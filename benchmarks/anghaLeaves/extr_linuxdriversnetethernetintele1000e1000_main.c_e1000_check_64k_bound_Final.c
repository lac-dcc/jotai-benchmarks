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

/* Type definitions */
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;

/* Variables and functions */
 scalar_t__ e1000_82545 ; 
 scalar_t__ e1000_82546 ; 
 scalar_t__ e1000_ce4100 ; 

__attribute__((used)) static bool e1000_check_64k_bound(struct e1000_adapter *adapter, void *start,
				  unsigned long len)
{
	struct e1000_hw *hw = &adapter->hw;
	unsigned long begin = (unsigned long)start;
	unsigned long end = begin + len;

	/* First rev 82545 and 82546 need to not allow any memory
	 * write location to cross 64k boundary due to errata 23
	 */
	if (hw->mac_type == e1000_82545 ||
	    hw->mac_type == e1000_ce4100 ||
	    hw->mac_type == e1000_82546) {
		return ((begin ^ (end - 1)) >> 16) != 0 ? false : true;
	}

	return true;
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
          unsigned long len = 100;
          int _len_adapter0 = 1;
          struct e1000_adapter * adapter = (struct e1000_adapter *) malloc(_len_adapter0*sizeof(struct e1000_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].hw.mac_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start;
          int benchRet = e1000_check_64k_bound(adapter,start,len);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_adapter0 = 65025;
          struct e1000_adapter * adapter = (struct e1000_adapter *) malloc(_len_adapter0*sizeof(struct e1000_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].hw.mac_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start;
          int benchRet = e1000_check_64k_bound(adapter,start,len);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_adapter0 = 100;
          struct e1000_adapter * adapter = (struct e1000_adapter *) malloc(_len_adapter0*sizeof(struct e1000_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].hw.mac_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start;
          int benchRet = e1000_check_64k_bound(adapter,start,len);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
