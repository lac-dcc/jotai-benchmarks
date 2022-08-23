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
typedef  int /*<<< orphan*/  u8 ;
struct ib_port_modify {int dummy; } ;
struct ib_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int hns_roce_modify_port(struct ib_device *ib_dev, u8 port_num, int mask,
				struct ib_port_modify *props)
{
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
          int port_num = 100;
          int mask = 100;
          int _len_ib_dev0 = 1;
          struct ib_device * ib_dev = (struct ib_device *) malloc(_len_ib_dev0*sizeof(struct ib_device));
          for(int _i0 = 0; _i0 < _len_ib_dev0; _i0++) {
            ib_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_props0 = 1;
          struct ib_port_modify * props = (struct ib_port_modify *) malloc(_len_props0*sizeof(struct ib_port_modify));
          for(int _i0 = 0; _i0 < _len_props0; _i0++) {
            props[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hns_roce_modify_port(ib_dev,port_num,mask,props);
          printf("%d\n", benchRet); 
          free(ib_dev);
          free(props);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}