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

/* Type definitions */
struct ioc {scalar_t__ res_map; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long ptr_to_pide(struct ioc *ioc, unsigned long *res_ptr,
				 unsigned int bitshiftcnt)
{
	return (((unsigned long)res_ptr - (unsigned long)ioc->res_map) << 3)
		+ bitshiftcnt;
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
          unsigned int bitshiftcnt = 255;
          int _len_ioc0 = 1;
          struct ioc * ioc = (struct ioc *) malloc(_len_ioc0*sizeof(struct ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
            ioc->res_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_ptr0 = 65025;
          unsigned long * res_ptr = (unsigned long *) malloc(_len_res_ptr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_res_ptr0; _i0++) {
            res_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ptr_to_pide(ioc,res_ptr,bitshiftcnt);
          printf("%lu\n", benchRet); 
          free(ioc);
          free(res_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
