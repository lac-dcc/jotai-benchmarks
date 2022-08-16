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
typedef  enum bcm_sysport_stat_type { ____Placeholder_bcm_sysport_stat_type } bcm_sysport_stat_type ;

/* Variables and functions */
#define  BCM_SYSPORT_STAT_NETDEV 132 
#define  BCM_SYSPORT_STAT_NETDEV64 131 
#define  BCM_SYSPORT_STAT_RBUF 130 
#define  BCM_SYSPORT_STAT_RXCHK 129 
#define  BCM_SYSPORT_STAT_SOFT 128 

__attribute__((used)) static inline bool bcm_sysport_lite_stat_valid(enum bcm_sysport_stat_type type)
{
	switch (type) {
	case BCM_SYSPORT_STAT_NETDEV:
	case BCM_SYSPORT_STAT_NETDEV64:
	case BCM_SYSPORT_STAT_RXCHK:
	case BCM_SYSPORT_STAT_RBUF:
	case BCM_SYSPORT_STAT_SOFT:
		return true;
	default:
		return false;
	}
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
          enum bcm_sysport_stat_type type = 0;
          int benchRet = bcm_sysport_lite_stat_valid(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
