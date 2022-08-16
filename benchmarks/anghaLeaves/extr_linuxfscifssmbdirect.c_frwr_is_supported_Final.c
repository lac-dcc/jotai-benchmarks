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
struct ib_device_attr {int device_cap_flags; scalar_t__ max_fast_reg_page_list_len; } ;

/* Variables and functions */
 int IB_DEVICE_MEM_MGT_EXTENSIONS ; 

__attribute__((used)) static bool frwr_is_supported(struct ib_device_attr *attrs)
{
	if (!(attrs->device_cap_flags & IB_DEVICE_MEM_MGT_EXTENSIONS))
		return false;
	if (attrs->max_fast_reg_page_list_len == 0)
		return false;
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
          int _len_attrs0 = 1;
          struct ib_device_attr * attrs = (struct ib_device_attr *) malloc(_len_attrs0*sizeof(struct ib_device_attr));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            attrs[_i0].device_cap_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        attrs[_i0].max_fast_reg_page_list_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = frwr_is_supported(attrs);
          printf("%d\n", benchRet); 
          free(attrs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
