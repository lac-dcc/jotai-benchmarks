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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct nfp_net {scalar_t__* vxlan_ports; int /*<<< orphan*/ * vxlan_usecnt; } ;
typedef  scalar_t__ __be16 ;

/* Variables and functions */
 int ENOSPC ; 
 int NFP_NET_N_VXLAN_PORTS ; 

__attribute__((used)) static int nfp_net_find_vxlan_idx(struct nfp_net *nn, __be16 port)
{
	int i, free_idx = -ENOSPC;

	for (i = 0; i < NFP_NET_N_VXLAN_PORTS; i++) {
		if (nn->vxlan_ports[i] == port)
			return i;
		if (!nn->vxlan_usecnt[i])
			free_idx = i;
	}

	return free_idx;
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
          long port = 100;
          int _len_nn0 = 1;
          struct nfp_net * nn = (struct nfp_net *) malloc(_len_nn0*sizeof(struct nfp_net));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
              int _len_nn__i0__vxlan_ports0 = 1;
          nn[_i0].vxlan_ports = (long *) malloc(_len_nn__i0__vxlan_ports0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_nn__i0__vxlan_ports0; _j0++) {
            nn[_i0].vxlan_ports[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nn__i0__vxlan_usecnt0 = 1;
          nn[_i0].vxlan_usecnt = (int *) malloc(_len_nn__i0__vxlan_usecnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nn__i0__vxlan_usecnt0; _j0++) {
            nn[_i0].vxlan_usecnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfp_net_find_vxlan_idx(nn,port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_nn0; _aux++) {
          free(nn[_aux].vxlan_ports);
          }
          for(int _aux = 0; _aux < _len_nn0; _aux++) {
          free(nn[_aux].vxlan_usecnt);
          }
          free(nn);
        
        break;
    }
    // big-arr
    case 1:
    {
          long port = 255;
          int _len_nn0 = 65025;
          struct nfp_net * nn = (struct nfp_net *) malloc(_len_nn0*sizeof(struct nfp_net));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
              int _len_nn__i0__vxlan_ports0 = 1;
          nn[_i0].vxlan_ports = (long *) malloc(_len_nn__i0__vxlan_ports0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_nn__i0__vxlan_ports0; _j0++) {
            nn[_i0].vxlan_ports[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nn__i0__vxlan_usecnt0 = 1;
          nn[_i0].vxlan_usecnt = (int *) malloc(_len_nn__i0__vxlan_usecnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nn__i0__vxlan_usecnt0; _j0++) {
            nn[_i0].vxlan_usecnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfp_net_find_vxlan_idx(nn,port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_nn0; _aux++) {
          free(nn[_aux].vxlan_ports);
          }
          for(int _aux = 0; _aux < _len_nn0; _aux++) {
          free(nn[_aux].vxlan_usecnt);
          }
          free(nn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long port = 10;
          int _len_nn0 = 100;
          struct nfp_net * nn = (struct nfp_net *) malloc(_len_nn0*sizeof(struct nfp_net));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
              int _len_nn__i0__vxlan_ports0 = 1;
          nn[_i0].vxlan_ports = (long *) malloc(_len_nn__i0__vxlan_ports0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_nn__i0__vxlan_ports0; _j0++) {
            nn[_i0].vxlan_ports[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nn__i0__vxlan_usecnt0 = 1;
          nn[_i0].vxlan_usecnt = (int *) malloc(_len_nn__i0__vxlan_usecnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nn__i0__vxlan_usecnt0; _j0++) {
            nn[_i0].vxlan_usecnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfp_net_find_vxlan_idx(nn,port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_nn0; _aux++) {
          free(nn[_aux].vxlan_ports);
          }
          for(int _aux = 0; _aux < _len_nn0; _aux++) {
          free(nn[_aux].vxlan_usecnt);
          }
          free(nn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
