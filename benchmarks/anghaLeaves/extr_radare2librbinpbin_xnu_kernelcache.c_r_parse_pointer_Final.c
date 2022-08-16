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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int ut64 ;
struct TYPE_8__ {TYPE_1__* rebase_info; } ;
struct TYPE_7__ {int address; } ;
struct TYPE_6__ {int kernel_base; } ;
typedef  TYPE_2__ RParsedPointer ;
typedef  TYPE_3__ RKernelCacheObj ;

/* Variables and functions */

__attribute__((used)) static bool r_parse_pointer(RParsedPointer *ptr, ut64 decorated_addr, RKernelCacheObj *obj) {
	/*
	 * Logic taken from:
	 * https://github.com/Synacktiv/kernelcache-laundering/blob/master/ios12_kernel_cache_helper.py
	 */

	if ((decorated_addr & 0x4000000000000000LL) == 0 && obj->rebase_info) {
		if (decorated_addr & 0x8000000000000000LL) {
			ptr->address = obj->rebase_info->kernel_base + (decorated_addr & 0xFFFFFFFFLL);
		} else {
			ptr->address = ((decorated_addr << 13) & 0xFF00000000000000LL) | (decorated_addr & 0x7ffffffffffLL);
			if (decorated_addr & 0x40000000000LL) {
				ptr->address |= 0xfffc0000000000LL;
			}
		}
	} else {
		ptr->address = decorated_addr;
	}

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
          int decorated_addr = 100;
          int _len_ptr0 = 1;
          struct TYPE_7__ * ptr = (struct TYPE_7__ *) malloc(_len_ptr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 1;
          struct TYPE_8__ * obj = (struct TYPE_8__ *) malloc(_len_obj0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__rebase_info0 = 1;
          obj[_i0].rebase_info = (struct TYPE_6__ *) malloc(_len_obj__i0__rebase_info0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_obj__i0__rebase_info0; _j0++) {
            obj[_i0].rebase_info->kernel_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = r_parse_pointer(ptr,decorated_addr,obj);
          printf("%d\n", benchRet); 
          free(ptr);
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].rebase_info);
          }
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
