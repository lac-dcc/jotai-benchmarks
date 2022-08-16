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
struct ntb_dev {int topo; } ;

/* Variables and functions */
 int EINVAL ; 
 int NTB_DEF_PEER_IDX ; 
 int NTB_PORT_PRI_USD ; 
 int NTB_PORT_SEC_DSD ; 
#define  NTB_TOPO_B2B_DSD 131 
#define  NTB_TOPO_B2B_USD 130 
#define  NTB_TOPO_PRI 129 
#define  NTB_TOPO_SEC 128 

int ntb_default_peer_port_number(struct ntb_dev *ntb, int pidx)
{
	if (pidx != NTB_DEF_PEER_IDX)
		return -EINVAL;

	switch (ntb->topo) {
	case NTB_TOPO_PRI:
	case NTB_TOPO_B2B_USD:
		return NTB_PORT_SEC_DSD;
	case NTB_TOPO_SEC:
	case NTB_TOPO_B2B_DSD:
		return NTB_PORT_PRI_USD;
	default:
		break;
	}

	return -EINVAL;
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
          int pidx = 100;
          int _len_ntb0 = 1;
          struct ntb_dev * ntb = (struct ntb_dev *) malloc(_len_ntb0*sizeof(struct ntb_dev));
          for(int _i0 = 0; _i0 < _len_ntb0; _i0++) {
            ntb[_i0].topo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ntb_default_peer_port_number(ntb,pidx);
          printf("%d\n", benchRet); 
          free(ntb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pidx = 10;
          int _len_ntb0 = 100;
          struct ntb_dev * ntb = (struct ntb_dev *) malloc(_len_ntb0*sizeof(struct ntb_dev));
          for(int _i0 = 0; _i0 < _len_ntb0; _i0++) {
            ntb[_i0].topo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ntb_default_peer_port_number(ntb,pidx);
          printf("%d\n", benchRet); 
          free(ntb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
