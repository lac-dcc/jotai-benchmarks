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
typedef  int u64 ;
struct work_atoms {int nb_atoms; int total_lat; } ;

/* Variables and functions */

__attribute__((used)) static int avg_cmp(struct work_atoms *l, struct work_atoms *r)
{
	u64 avgl, avgr;

	if (!l->nb_atoms)
		return -1;

	if (!r->nb_atoms)
		return 1;

	avgl = l->total_lat / l->nb_atoms;
	avgr = r->total_lat / r->nb_atoms;

	if (avgl < avgr)
		return -1;
	if (avgl > avgr)
		return 1;

	return 0;
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
          int _len_l0 = 1;
          struct work_atoms * l = (struct work_atoms *) malloc(_len_l0*sizeof(struct work_atoms));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].nb_atoms = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].total_lat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 1;
          struct work_atoms * r = (struct work_atoms *) malloc(_len_r0*sizeof(struct work_atoms));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].nb_atoms = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].total_lat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = avg_cmp(l,r);
          printf("%d\n", benchRet); 
          free(l);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
