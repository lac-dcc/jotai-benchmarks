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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ mode; scalar_t__ extended_addr; scalar_t__ pan_id; scalar_t__ short_addr; } ;
struct dgram_sock {TYPE_1__ src_addr; int /*<<< orphan*/  bound; } ;
typedef  scalar_t__ __le64 ;
typedef  scalar_t__ __le16 ;

/* Variables and functions */
 scalar_t__ IEEE802154_ADDR_LONG ; 
 scalar_t__ IEEE802154_ADDR_SHORT ; 

__attribute__((used)) static inline bool
ieee802154_match_sock(__le64 hw_addr, __le16 pan_id, __le16 short_addr,
		      struct dgram_sock *ro)
{
	if (!ro->bound)
		return true;

	if (ro->src_addr.mode == IEEE802154_ADDR_LONG &&
	    hw_addr == ro->src_addr.extended_addr)
		return true;

	if (ro->src_addr.mode == IEEE802154_ADDR_SHORT &&
	    pan_id == ro->src_addr.pan_id &&
	    short_addr == ro->src_addr.short_addr)
		return true;

	return false;
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
          long hw_addr = 100;
          long pan_id = 100;
          long short_addr = 100;
          int _len_ro0 = 1;
          struct dgram_sock * ro = (struct dgram_sock *) malloc(_len_ro0*sizeof(struct dgram_sock));
          for(int _i0 = 0; _i0 < _len_ro0; _i0++) {
            ro[_i0].src_addr.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.extended_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.pan_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.short_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].bound = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee802154_match_sock(hw_addr,pan_id,short_addr,ro);
          printf("%d\n", benchRet); 
          free(ro);
        
        break;
    }
    // big-arr
    case 1:
    {
          long hw_addr = 255;
          long pan_id = 255;
          long short_addr = 255;
          int _len_ro0 = 65025;
          struct dgram_sock * ro = (struct dgram_sock *) malloc(_len_ro0*sizeof(struct dgram_sock));
          for(int _i0 = 0; _i0 < _len_ro0; _i0++) {
            ro[_i0].src_addr.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.extended_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.pan_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.short_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].bound = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee802154_match_sock(hw_addr,pan_id,short_addr,ro);
          printf("%d\n", benchRet); 
          free(ro);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long hw_addr = 10;
          long pan_id = 10;
          long short_addr = 10;
          int _len_ro0 = 100;
          struct dgram_sock * ro = (struct dgram_sock *) malloc(_len_ro0*sizeof(struct dgram_sock));
          for(int _i0 = 0; _i0 < _len_ro0; _i0++) {
            ro[_i0].src_addr.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.extended_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.pan_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].src_addr.short_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ro[_i0].bound = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee802154_match_sock(hw_addr,pan_id,short_addr,ro);
          printf("%d\n", benchRet); 
          free(ro);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
