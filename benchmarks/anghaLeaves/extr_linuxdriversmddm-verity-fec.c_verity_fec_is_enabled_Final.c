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
struct dm_verity {TYPE_1__* fec; } ;
struct TYPE_2__ {scalar_t__ dev; } ;

/* Variables and functions */

bool verity_fec_is_enabled(struct dm_verity *v)
{
	return v->fec && v->fec->dev;
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
          int _len_v0 = 65025;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__fec0 = 1;
          v[_i0].fec = (struct TYPE_2__ *) malloc(_len_v__i0__fec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_v__i0__fec0; _j0++) {
              v[_i0].fec->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = verity_fec_is_enabled(v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].fec);
          }
          free(v);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_v0 = 100;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__fec0 = 1;
          v[_i0].fec = (struct TYPE_2__ *) malloc(_len_v__i0__fec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_v__i0__fec0; _j0++) {
              v[_i0].fec->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = verity_fec_is_enabled(v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].fec);
          }
          free(v);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_v0 = 1;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__fec0 = 1;
          v[_i0].fec = (struct TYPE_2__ *) malloc(_len_v__i0__fec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_v__i0__fec0; _j0++) {
              v[_i0].fec->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = verity_fec_is_enabled(v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].fec);
          }
          free(v);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
