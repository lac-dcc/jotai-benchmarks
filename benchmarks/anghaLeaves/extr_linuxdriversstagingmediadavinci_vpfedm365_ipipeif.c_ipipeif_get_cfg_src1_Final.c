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
struct vpfe_ipipeif_device {scalar_t__ input; struct v4l2_mbus_framefmt* formats; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;

/* Variables and functions */
 int IPIPEIF_CCDC ; 
 scalar_t__ IPIPEIF_INPUT_MEMORY ; 
 size_t IPIPEIF_PAD_SINK ; 
 int IPIPEIF_SRC1_PARALLEL_PORT ; 
 scalar_t__ MEDIA_BUS_FMT_UV8_1X8 ; 
 scalar_t__ MEDIA_BUS_FMT_Y8_1X8 ; 

__attribute__((used)) static int
ipipeif_get_cfg_src1(struct vpfe_ipipeif_device *ipipeif)
{
	struct v4l2_mbus_framefmt *informat;

	informat = &ipipeif->formats[IPIPEIF_PAD_SINK];
	if (ipipeif->input == IPIPEIF_INPUT_MEMORY &&
	   (informat->code == MEDIA_BUS_FMT_Y8_1X8 ||
	    informat->code == MEDIA_BUS_FMT_UV8_1X8))
		return IPIPEIF_CCDC;

	return IPIPEIF_SRC1_PARALLEL_PORT;
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
          int _len_ipipeif0 = 1;
          struct vpfe_ipipeif_device * ipipeif = (struct vpfe_ipipeif_device *) malloc(_len_ipipeif0*sizeof(struct vpfe_ipipeif_device));
          for(int _i0 = 0; _i0 < _len_ipipeif0; _i0++) {
            ipipeif[_i0].input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipipeif__i0__formats0 = 1;
          ipipeif[_i0].formats = (struct v4l2_mbus_framefmt *) malloc(_len_ipipeif__i0__formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_ipipeif__i0__formats0; _j0++) {
            ipipeif[_i0].formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipipeif_get_cfg_src1(ipipeif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ipipeif0; _aux++) {
          free(ipipeif[_aux].formats);
          }
          free(ipipeif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
