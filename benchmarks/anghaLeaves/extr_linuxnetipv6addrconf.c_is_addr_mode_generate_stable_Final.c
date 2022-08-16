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
struct TYPE_2__ {scalar_t__ addr_gen_mode; } ;
struct inet6_dev {TYPE_1__ cnf; } ;

/* Variables and functions */
 scalar_t__ IN6_ADDR_GEN_MODE_RANDOM ; 
 scalar_t__ IN6_ADDR_GEN_MODE_STABLE_PRIVACY ; 

__attribute__((used)) static bool is_addr_mode_generate_stable(struct inet6_dev *idev)
{
	return idev->cnf.addr_gen_mode == IN6_ADDR_GEN_MODE_STABLE_PRIVACY ||
	       idev->cnf.addr_gen_mode == IN6_ADDR_GEN_MODE_RANDOM;
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
          int _len_idev0 = 1;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].cnf.addr_gen_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_addr_mode_generate_stable(idev);
          printf("%d\n", benchRet); 
          free(idev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_idev0 = 100;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].cnf.addr_gen_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_addr_mode_generate_stable(idev);
          printf("%d\n", benchRet); 
          free(idev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
