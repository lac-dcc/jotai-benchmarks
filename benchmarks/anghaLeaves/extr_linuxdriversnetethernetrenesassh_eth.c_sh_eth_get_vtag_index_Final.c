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
struct sh_eth_private {int /*<<< orphan*/  port; } ;

/* Variables and functions */
 int TSU_VTAG0 ; 
 int TSU_VTAG1 ; 

__attribute__((used)) static int sh_eth_get_vtag_index(struct sh_eth_private *mdp)
{
	if (!mdp->port)
		return TSU_VTAG0;
	else
		return TSU_VTAG1;
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
          int _len_mdp0 = 1;
          struct sh_eth_private * mdp = (struct sh_eth_private *) malloc(_len_mdp0*sizeof(struct sh_eth_private));
          for(int _i0 = 0; _i0 < _len_mdp0; _i0++) {
            mdp[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sh_eth_get_vtag_index(mdp);
          printf("%d\n", benchRet); 
          free(mdp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_mdp0 = 100;
          struct sh_eth_private * mdp = (struct sh_eth_private *) malloc(_len_mdp0*sizeof(struct sh_eth_private));
          for(int _i0 = 0; _i0 < _len_mdp0; _i0++) {
            mdp[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sh_eth_get_vtag_index(mdp);
          printf("%d\n", benchRet); 
          free(mdp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
