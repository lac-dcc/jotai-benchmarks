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
struct ipw_network {int /*<<< orphan*/ *** associated_ttys; } ;

/* Variables and functions */
 int MAX_ASSOCIATED_TTYS ; 

void ipwireless_disassociate_network_ttys(struct ipw_network *network,
					  unsigned int channel_idx)
{
	int i;

	for (i = 0; i < MAX_ASSOCIATED_TTYS; i++)
		network->associated_ttys[channel_idx][i] = NULL;
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
          unsigned int channel_idx = 100;
          int _len_network0 = 1;
          struct ipw_network * network = (struct ipw_network *) malloc(_len_network0*sizeof(struct ipw_network));
          for(int _i0 = 0; _i0 < _len_network0; _i0++) {
              int _len_network__i0__associated_ttys0 = 1;
          network[_i0].associated_ttys = (int ***) malloc(_len_network__i0__associated_ttys0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_network__i0__associated_ttys0; _j0++) {
            int _len_network__i0__associated_ttys1 = 1;
            network[_i0].associated_ttys[_j0] = (int **) malloc(_len_network__i0__associated_ttys1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_network__i0__associated_ttys1; _j1++) {
              int _len_network__i0__associated_ttys2 = 1;
              network[_i0].associated_ttys[_j0][_j1] = (int *) malloc(_len_network__i0__associated_ttys2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_network__i0__associated_ttys2; _j2++) {
                network[_i0].associated_ttys[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          ipwireless_disassociate_network_ttys(network,channel_idx);
          for(int _aux = 0; _aux < _len_network0; _aux++) {
          }
          free(network);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
