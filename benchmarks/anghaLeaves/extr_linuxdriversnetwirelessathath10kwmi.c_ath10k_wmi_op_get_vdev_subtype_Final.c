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
struct ath10k {int dummy; } ;
typedef  enum wmi_vdev_subtype { ____Placeholder_wmi_vdev_subtype } wmi_vdev_subtype ;

/* Variables and functions */
 int ENOTSUPP ; 
 int WMI_VDEV_SUBTYPE_LEGACY_NONE ; 
 int WMI_VDEV_SUBTYPE_LEGACY_P2P_CLI ; 
 int WMI_VDEV_SUBTYPE_LEGACY_P2P_DEV ; 
 int WMI_VDEV_SUBTYPE_LEGACY_P2P_GO ; 
 int WMI_VDEV_SUBTYPE_LEGACY_PROXY_STA ; 
#define  WMI_VDEV_SUBTYPE_MESH_11S 134 
#define  WMI_VDEV_SUBTYPE_MESH_NON_11S 133 
#define  WMI_VDEV_SUBTYPE_NONE 132 
#define  WMI_VDEV_SUBTYPE_P2P_CLIENT 131 
#define  WMI_VDEV_SUBTYPE_P2P_DEVICE 130 
#define  WMI_VDEV_SUBTYPE_P2P_GO 129 
#define  WMI_VDEV_SUBTYPE_PROXY_STA 128 

int ath10k_wmi_op_get_vdev_subtype(struct ath10k *ar,
				   enum wmi_vdev_subtype subtype)
{
	switch (subtype) {
	case WMI_VDEV_SUBTYPE_NONE:
		return WMI_VDEV_SUBTYPE_LEGACY_NONE;
	case WMI_VDEV_SUBTYPE_P2P_DEVICE:
		return WMI_VDEV_SUBTYPE_LEGACY_P2P_DEV;
	case WMI_VDEV_SUBTYPE_P2P_CLIENT:
		return WMI_VDEV_SUBTYPE_LEGACY_P2P_CLI;
	case WMI_VDEV_SUBTYPE_P2P_GO:
		return WMI_VDEV_SUBTYPE_LEGACY_P2P_GO;
	case WMI_VDEV_SUBTYPE_PROXY_STA:
		return WMI_VDEV_SUBTYPE_LEGACY_PROXY_STA;
	case WMI_VDEV_SUBTYPE_MESH_11S:
	case WMI_VDEV_SUBTYPE_MESH_NON_11S:
		return -ENOTSUPP;
	}
	return -ENOTSUPP;
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
          enum wmi_vdev_subtype subtype = 0;
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_wmi_op_get_vdev_subtype(ar,subtype);
          printf("%d\n", benchRet); 
          free(ar);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum wmi_vdev_subtype subtype = 0;
          int _len_ar0 = 100;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_wmi_op_get_vdev_subtype(ar,subtype);
          printf("%d\n", benchRet); 
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
