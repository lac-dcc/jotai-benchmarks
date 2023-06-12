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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int ctrl; } ;
struct nfp_net {TYPE_1__ dp; } ;

/* Variables and functions */
 int NFP_NET_CFG_CTRL_ENABLE ; 

__attribute__((used)) static inline bool nfp_net_running(struct nfp_net *nn)
{
	return nn->dp.ctrl & NFP_NET_CFG_CTRL_ENABLE;
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
          int _len_nn0 = 65025;
          struct nfp_net * nn = (struct nfp_net *) malloc(_len_nn0*sizeof(struct nfp_net));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
              nn[_i0].dp.ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = nfp_net_running(nn);
          printf("%d\n", benchRet); 
          free(nn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_nn0 = 100;
          struct nfp_net * nn = (struct nfp_net *) malloc(_len_nn0*sizeof(struct nfp_net));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
              nn[_i0].dp.ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = nfp_net_running(nn);
          printf("%d\n", benchRet); 
          free(nn);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_nn0 = 1;
          struct nfp_net * nn = (struct nfp_net *) malloc(_len_nn0*sizeof(struct nfp_net));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
              nn[_i0].dp.ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = nfp_net_running(nn);
          printf("%d\n", benchRet); 
          free(nn);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
