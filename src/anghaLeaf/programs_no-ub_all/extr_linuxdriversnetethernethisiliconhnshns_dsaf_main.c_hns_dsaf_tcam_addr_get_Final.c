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
       0            big-arr\n\
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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_5__ {int /*<<< orphan*/  mac_5; int /*<<< orphan*/  mac_4; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_8__ {int /*<<< orphan*/  mac_3; int /*<<< orphan*/  mac_2; int /*<<< orphan*/  mac_1; int /*<<< orphan*/  mac_0; } ;
struct TYPE_7__ {TYPE_4__ bits; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_2__ low; TYPE_3__ high; } ;

/* Variables and functions */

__attribute__((used)) static void
hns_dsaf_tcam_addr_get(struct dsaf_drv_tbl_tcam_key *mac_key, u8 *addr)
{
	addr[0] = mac_key->high.bits.mac_0;
	addr[1] = mac_key->high.bits.mac_1;
	addr[2] = mac_key->high.bits.mac_2;
	addr[3] = mac_key->high.bits.mac_3;
	addr[4] = mac_key->low.bits.mac_4;
	addr[5] = mac_key->low.bits.mac_5;
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

    // big-arr
    case 0:
    {
          int _len_mac_key0 = 1;
          struct dsaf_drv_tbl_tcam_key * mac_key = (struct dsaf_drv_tbl_tcam_key *) malloc(_len_mac_key0*sizeof(struct dsaf_drv_tbl_tcam_key));
          for(int _i0 = 0; _i0 < _len_mac_key0; _i0++) {
            mac_key->low.bits.mac_5 = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_key->low.bits.mac_4 = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_key->high.bits.mac_3 = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_key->high.bits.mac_2 = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_key->high.bits.mac_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_key->high.bits.mac_0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 65025;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hns_dsaf_tcam_addr_get(mac_key,addr);
          free(mac_key);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
