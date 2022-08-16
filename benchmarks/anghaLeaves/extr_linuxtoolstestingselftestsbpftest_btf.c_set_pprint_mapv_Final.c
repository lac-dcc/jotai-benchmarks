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
typedef  int uint32_t ;
struct pprint_mapv {int ui32; int si32; int unused_bits2a; int bits28; int unused_bits2b; int ui64; int aenum; } ;

/* Variables and functions */

__attribute__((used)) static void set_pprint_mapv(struct pprint_mapv *v, uint32_t i)
{
	v->ui32 = i;
	v->si32 = -i;
	v->unused_bits2a = 3;
	v->bits28 = i;
	v->unused_bits2b = 3;
	v->ui64 = i;
	v->aenum = i & 0x03;
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
          int i = 100;
          int _len_v0 = 1;
          struct pprint_mapv * v = (struct pprint_mapv *) malloc(_len_v0*sizeof(struct pprint_mapv));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].ui32 = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].si32 = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].unused_bits2a = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].bits28 = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].unused_bits2b = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].ui64 = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].aenum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_pprint_mapv(v,i);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
