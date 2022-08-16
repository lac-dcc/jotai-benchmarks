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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int lun; int ch; } ;
struct ppa_addr {TYPE_1__ a; } ;
struct nvm_geo {int num_ch; } ;

/* Variables and functions */

__attribute__((used)) static inline int pblk_ppa_to_pos(struct nvm_geo *geo, struct ppa_addr p)
{
	return p.a.lun * geo->num_ch + p.a.ch;
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
          int _len_geo0 = 1;
          struct nvm_geo * geo = (struct nvm_geo *) malloc(_len_geo0*sizeof(struct nvm_geo));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].num_ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ppa_addr p;
        p.a.lun = ((-2 * (next_i()%2)) + 1) * next_i();
        p.a.ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = pblk_ppa_to_pos(geo,p);
          printf("%d\n", benchRet); 
          free(geo);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_geo0 = 100;
          struct nvm_geo * geo = (struct nvm_geo *) malloc(_len_geo0*sizeof(struct nvm_geo));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].num_ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ppa_addr p;
        p.a.lun = ((-2 * (next_i()%2)) + 1) * next_i();
        p.a.ch = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = pblk_ppa_to_pos(geo,p);
          printf("%d\n", benchRet); 
          free(geo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
