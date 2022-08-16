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
struct phy_probe_info {int* cur; int** phy_port; } ;

/* Variables and functions */
 size_t PHY_TYPE_MII ; 

__attribute__((used)) static int count_1g_ports(struct phy_probe_info *p, int *lowest)
{
	*lowest = 32;
	if (p->cur[PHY_TYPE_MII])
		*lowest = p->phy_port[PHY_TYPE_MII][0];

	return p->cur[PHY_TYPE_MII];
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
          int _len_p0 = 1;
          struct phy_probe_info * p = (struct phy_probe_info *) malloc(_len_p0*sizeof(struct phy_probe_info));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cur0 = 1;
          p[_i0].cur = (int *) malloc(_len_p__i0__cur0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cur0; _j0++) {
            p[_i0].cur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__phy_port0 = 1;
          p[_i0].phy_port = (int **) malloc(_len_p__i0__phy_port0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_p__i0__phy_port0; _j0++) {
            int _len_p__i0__phy_port1 = 1;
            p[_i0].phy_port[_j0] = (int *) malloc(_len_p__i0__phy_port1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_p__i0__phy_port1; _j1++) {
              p[_i0].phy_port[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_lowest0 = 1;
          int * lowest = (int *) malloc(_len_lowest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lowest0; _i0++) {
            lowest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = count_1g_ports(p,lowest);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cur);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].phy_port));
        free(p[_aux].phy_port);
          }
          free(p);
          free(lowest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
