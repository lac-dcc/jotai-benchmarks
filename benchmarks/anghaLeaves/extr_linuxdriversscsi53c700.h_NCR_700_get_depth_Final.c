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
struct scsi_device {struct NCR_700_Device_Parameters* hostdata; } ;
struct NCR_700_Device_Parameters {int /*<<< orphan*/  depth; } ;
typedef  int /*<<< orphan*/  __u8 ;

/* Variables and functions */

__attribute__((used)) static inline __u8
NCR_700_get_depth(struct scsi_device *SDp)
{
	struct NCR_700_Device_Parameters *hostdata = SDp->hostdata;

	return hostdata->depth;
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
          int _len_SDp0 = 1;
          struct scsi_device * SDp = (struct scsi_device *) malloc(_len_SDp0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_SDp0; _i0++) {
              int _len_SDp__i0__hostdata0 = 1;
          SDp[_i0].hostdata = (struct NCR_700_Device_Parameters *) malloc(_len_SDp__i0__hostdata0*sizeof(struct NCR_700_Device_Parameters));
          for(int _j0 = 0; _j0 < _len_SDp__i0__hostdata0; _j0++) {
            SDp[_i0].hostdata->depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = NCR_700_get_depth(SDp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SDp0; _aux++) {
          free(SDp[_aux].hostdata);
          }
          free(SDp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
