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
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int zd1201_set_scan(struct net_device *dev,
    struct iw_request_info *info, struct iw_point *srq, char *extra)
{
	/* We do everything in get_scan */
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srq0 = 1;
          struct iw_point * srq = (struct iw_point *) malloc(_len_srq0*sizeof(struct iw_point));
          for(int _i0 = 0; _i0 < _len_srq0; _i0++) {
            srq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extra0 = 1;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zd1201_set_scan(dev,info,srq,extra);
          printf("%d\n", benchRet); 
          free(dev);
          free(info);
          free(srq);
          free(extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
