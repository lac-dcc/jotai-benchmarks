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
typedef  scalar_t__ u16 ;
struct devlink_sb {scalar_t__ egress_pools_count; scalar_t__ ingress_pools_count; } ;

/* Variables and functions */

__attribute__((used)) static u16 devlink_sb_pool_count(struct devlink_sb *devlink_sb)
{
	return devlink_sb->ingress_pools_count + devlink_sb->egress_pools_count;
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
          int _len_devlink_sb0 = 1;
          struct devlink_sb * devlink_sb = (struct devlink_sb *) malloc(_len_devlink_sb0*sizeof(struct devlink_sb));
          for(int _i0 = 0; _i0 < _len_devlink_sb0; _i0++) {
            devlink_sb[_i0].egress_pools_count = ((-2 * (next_i()%2)) + 1) * next_i();
        devlink_sb[_i0].ingress_pools_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = devlink_sb_pool_count(devlink_sb);
          printf("%ld\n", benchRet); 
          free(devlink_sb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_devlink_sb0 = 65025;
          struct devlink_sb * devlink_sb = (struct devlink_sb *) malloc(_len_devlink_sb0*sizeof(struct devlink_sb));
          for(int _i0 = 0; _i0 < _len_devlink_sb0; _i0++) {
            devlink_sb[_i0].egress_pools_count = ((-2 * (next_i()%2)) + 1) * next_i();
        devlink_sb[_i0].ingress_pools_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = devlink_sb_pool_count(devlink_sb);
          printf("%ld\n", benchRet); 
          free(devlink_sb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_devlink_sb0 = 100;
          struct devlink_sb * devlink_sb = (struct devlink_sb *) malloc(_len_devlink_sb0*sizeof(struct devlink_sb));
          for(int _i0 = 0; _i0 < _len_devlink_sb0; _i0++) {
            devlink_sb[_i0].egress_pools_count = ((-2 * (next_i()%2)) + 1) * next_i();
        devlink_sb[_i0].ingress_pools_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = devlink_sb_pool_count(devlink_sb);
          printf("%ld\n", benchRet); 
          free(devlink_sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
