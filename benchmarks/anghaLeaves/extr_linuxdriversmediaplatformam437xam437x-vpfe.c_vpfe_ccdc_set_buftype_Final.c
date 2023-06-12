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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int buf_type; } ;
struct TYPE_4__ {int buf_type; } ;
struct TYPE_6__ {scalar_t__ if_type; TYPE_2__ ycbcr; TYPE_1__ bayer; } ;
struct vpfe_ccdc {TYPE_3__ ccdc_cfg; } ;
typedef  enum ccdc_buftype { ____Placeholder_ccdc_buftype } ccdc_buftype ;

/* Variables and functions */
 scalar_t__ VPFE_RAW_BAYER ; 

__attribute__((used)) static inline int
vpfe_ccdc_set_buftype(struct vpfe_ccdc *ccdc,
		      enum ccdc_buftype buf_type)
{
	if (ccdc->ccdc_cfg.if_type == VPFE_RAW_BAYER)
		ccdc->ccdc_cfg.bayer.buf_type = buf_type;
	else
		ccdc->ccdc_cfg.ycbcr.buf_type = buf_type;

	return 0;
}

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
          enum ccdc_buftype buf_type = 0;
        
          int _len_ccdc0 = 65025;
          struct vpfe_ccdc * ccdc = (struct vpfe_ccdc *) malloc(_len_ccdc0*sizeof(struct vpfe_ccdc));
          for(int _i0 = 0; _i0 < _len_ccdc0; _i0++) {
              ccdc[_i0].ccdc_cfg.if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          ccdc[_i0].ccdc_cfg.ycbcr.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ccdc[_i0].ccdc_cfg.bayer.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = vpfe_ccdc_set_buftype(ccdc,buf_type);
          printf("%d\n", benchRet); 
          free(ccdc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum ccdc_buftype buf_type = 0;
        
          int _len_ccdc0 = 100;
          struct vpfe_ccdc * ccdc = (struct vpfe_ccdc *) malloc(_len_ccdc0*sizeof(struct vpfe_ccdc));
          for(int _i0 = 0; _i0 < _len_ccdc0; _i0++) {
              ccdc[_i0].ccdc_cfg.if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          ccdc[_i0].ccdc_cfg.ycbcr.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ccdc[_i0].ccdc_cfg.bayer.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = vpfe_ccdc_set_buftype(ccdc,buf_type);
          printf("%d\n", benchRet); 
          free(ccdc);
        
        break;
    }
    // empty
    case 2:
    {
          enum ccdc_buftype buf_type = 0;
        
          int _len_ccdc0 = 1;
          struct vpfe_ccdc * ccdc = (struct vpfe_ccdc *) malloc(_len_ccdc0*sizeof(struct vpfe_ccdc));
          for(int _i0 = 0; _i0 < _len_ccdc0; _i0++) {
              ccdc[_i0].ccdc_cfg.if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          ccdc[_i0].ccdc_cfg.ycbcr.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ccdc[_i0].ccdc_cfg.bayer.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = vpfe_ccdc_set_buftype(ccdc,buf_type);
          printf("%d\n", benchRet); 
          free(ccdc);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
