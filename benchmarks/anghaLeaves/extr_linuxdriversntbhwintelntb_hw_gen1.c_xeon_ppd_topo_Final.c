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

/* Type definitions */
typedef  int u8 ;
struct intel_ntb_dev {int dummy; } ;
typedef  enum ntb_topo { ____Placeholder_ntb_topo } ntb_topo ;

/* Variables and functions */
 int NTB_TOPO_B2B_DSD ; 
 int NTB_TOPO_B2B_USD ; 
 int NTB_TOPO_NONE ; 
 int NTB_TOPO_PRI ; 
 int NTB_TOPO_SEC ; 
#define  XEON_PPD_TOPO_B2B_DSD 133 
#define  XEON_PPD_TOPO_B2B_USD 132 
 int XEON_PPD_TOPO_MASK ; 
#define  XEON_PPD_TOPO_PRI_DSD 131 
#define  XEON_PPD_TOPO_PRI_USD 130 
#define  XEON_PPD_TOPO_SEC_DSD 129 
#define  XEON_PPD_TOPO_SEC_USD 128 

enum ntb_topo xeon_ppd_topo(struct intel_ntb_dev *ndev, u8 ppd)
{
	switch (ppd & XEON_PPD_TOPO_MASK) {
	case XEON_PPD_TOPO_B2B_USD:
		return NTB_TOPO_B2B_USD;

	case XEON_PPD_TOPO_B2B_DSD:
		return NTB_TOPO_B2B_DSD;

	case XEON_PPD_TOPO_PRI_USD:
	case XEON_PPD_TOPO_PRI_DSD: /* accept bogus PRI_DSD */
		return NTB_TOPO_PRI;

	case XEON_PPD_TOPO_SEC_USD:
	case XEON_PPD_TOPO_SEC_DSD: /* accept bogus SEC_DSD */
		return NTB_TOPO_SEC;
	}

	return NTB_TOPO_NONE;
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
          int ppd = 100;
          int _len_ndev0 = 1;
          struct intel_ntb_dev * ndev = (struct intel_ntb_dev *) malloc(_len_ndev0*sizeof(struct intel_ntb_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ntb_topo benchRet = xeon_ppd_topo(ndev,ppd);
          free(ndev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ppd = 10;
          int _len_ndev0 = 100;
          struct intel_ntb_dev * ndev = (struct intel_ntb_dev *) malloc(_len_ndev0*sizeof(struct intel_ntb_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ntb_topo benchRet = xeon_ppd_topo(ndev,ppd);
          free(ndev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
