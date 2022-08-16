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
struct domain_device {int dummy; } ;

/* Variables and functions */
 int TMF_RESP_FUNC_FAILED ; 

int isci_task_clear_aca(
	struct domain_device *d_device,
	u8 *lun)
{
	return TMF_RESP_FUNC_FAILED;
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
          int _len_d_device0 = 1;
          struct domain_device * d_device = (struct domain_device *) malloc(_len_d_device0*sizeof(struct domain_device));
          for(int _i0 = 0; _i0 < _len_d_device0; _i0++) {
            d_device[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lun0 = 1;
          int * lun = (int *) malloc(_len_lun0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lun0; _i0++) {
            lun[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isci_task_clear_aca(d_device,lun);
          printf("%d\n", benchRet); 
          free(d_device);
          free(lun);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
