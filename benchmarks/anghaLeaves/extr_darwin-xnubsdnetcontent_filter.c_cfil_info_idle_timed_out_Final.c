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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_int32_t ;
struct cfil_info {TYPE_1__* cfi_hash_entry; } ;
struct TYPE_2__ {scalar_t__ cfentry_lastused; } ;

/* Variables and functions */

bool
cfil_info_idle_timed_out(struct cfil_info *cfil_info, int timeout, u_int32_t current_time)
{
	if (cfil_info && cfil_info->cfi_hash_entry &&
		(current_time - cfil_info->cfi_hash_entry->cfentry_lastused >= (u_int32_t)timeout)) {
#if GC_DEBUG
		cfil_info_log(LOG_ERR, cfil_info, "CFIL: flow IDLE timeout expired");
#endif
		return true;
	}
	return false;
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
          int timeout = 100;
          long current_time = 100;
          int _len_cfil_info0 = 1;
          struct cfil_info * cfil_info = (struct cfil_info *) malloc(_len_cfil_info0*sizeof(struct cfil_info));
          for(int _i0 = 0; _i0 < _len_cfil_info0; _i0++) {
              int _len_cfil_info__i0__cfi_hash_entry0 = 1;
          cfil_info[_i0].cfi_hash_entry = (struct TYPE_2__ *) malloc(_len_cfil_info__i0__cfi_hash_entry0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cfil_info__i0__cfi_hash_entry0; _j0++) {
            cfil_info[_i0].cfi_hash_entry->cfentry_lastused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cfil_info_idle_timed_out(cfil_info,timeout,current_time);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cfil_info0; _aux++) {
          free(cfil_info[_aux].cfi_hash_entry);
          }
          free(cfil_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
