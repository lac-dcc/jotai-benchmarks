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
struct firedtv_tuner_status {int ca_module_present_status; int ca_initialization_status; scalar_t__ ca_error_flag; int ca_dvb_flag; } ;

/* Variables and functions */
 int CA_CI_MODULE_PRESENT ; 
 int CA_CI_MODULE_READY ; 

__attribute__((used)) static int fdtv_get_ca_flags(struct firedtv_tuner_status *stat)
{
	int flags = 0;

	if (stat->ca_module_present_status == 1)
		flags |= CA_CI_MODULE_PRESENT;
	if (stat->ca_initialization_status == 1 &&
	    stat->ca_error_flag            == 0 &&
	    stat->ca_dvb_flag              == 1)
		flags |= CA_CI_MODULE_READY;
	return flags;
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
          int _len_stat0 = 1;
          struct firedtv_tuner_status * stat = (struct firedtv_tuner_status *) malloc(_len_stat0*sizeof(struct firedtv_tuner_status));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
            stat[_i0].ca_module_present_status = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].ca_initialization_status = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].ca_error_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].ca_dvb_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fdtv_get_ca_flags(stat);
          printf("%d\n", benchRet); 
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
