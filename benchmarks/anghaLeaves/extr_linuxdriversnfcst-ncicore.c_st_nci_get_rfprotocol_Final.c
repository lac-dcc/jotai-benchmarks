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
struct nci_dev {int dummy; } ;
typedef  scalar_t__ __u8 ;
typedef  int /*<<< orphan*/  __u32 ;

/* Variables and functions */
 int /*<<< orphan*/  NFC_PROTO_ISO15693_MASK ; 
 scalar_t__ ST_NCI1_X_PROPRIETARY_ISO15693 ; 

__attribute__((used)) static __u32 st_nci_get_rfprotocol(struct nci_dev *ndev,
					 __u8 rf_protocol)
{
	return rf_protocol == ST_NCI1_X_PROPRIETARY_ISO15693 ?
		NFC_PROTO_ISO15693_MASK : 0;
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
          long rf_protocol = 100;
          int _len_ndev0 = 1;
          struct nci_dev * ndev = (struct nci_dev *) malloc(_len_ndev0*sizeof(struct nci_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = st_nci_get_rfprotocol(ndev,rf_protocol);
          printf("%d\n", benchRet); 
          free(ndev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long rf_protocol = 10;
          int _len_ndev0 = 100;
          struct nci_dev * ndev = (struct nci_dev *) malloc(_len_ndev0*sizeof(struct nci_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = st_nci_get_rfprotocol(ndev,rf_protocol);
          printf("%d\n", benchRet); 
          free(ndev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
