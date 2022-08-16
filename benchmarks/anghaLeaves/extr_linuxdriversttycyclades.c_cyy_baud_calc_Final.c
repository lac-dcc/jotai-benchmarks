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
struct cyclades_port {scalar_t__ chip_rev; int tbpr; int tco; int rbpr; int rco; } ;
typedef  int __u32 ;

/* Variables and functions */
 scalar_t__ CD1400_REV_J ; 

__attribute__((used)) static void cyy_baud_calc(struct cyclades_port *info, __u32 baud)
{
	int co, co_val, bpr;
	__u32 cy_clock = ((info->chip_rev >= CD1400_REV_J) ? 60000000 :
			25000000);

	if (baud == 0) {
		info->tbpr = info->tco = info->rbpr = info->rco = 0;
		return;
	}

	/* determine which prescaler to use */
	for (co = 4, co_val = 2048; co; co--, co_val >>= 2) {
		if (cy_clock / co_val / baud > 63)
			break;
	}

	bpr = (cy_clock / co_val * 2 / baud + 1) / 2;
	if (bpr > 255)
		bpr = 255;

	info->tbpr = info->rbpr = bpr;
	info->tco = info->rco = co;
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
          int baud = 100;
          int _len_info0 = 1;
          struct cyclades_port * info = (struct cyclades_port *) malloc(_len_info0*sizeof(struct cyclades_port));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].chip_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tbpr = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tco = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rbpr = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rco = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cyy_baud_calc(info,baud);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
