// ========================================================================= //

// includes
#include <math.h>
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ ref; scalar_t__ y; scalar_t__ x; } ;
typedef  TYPE_1__ cavs_vector ;

/* Variables and functions */
 int /*<<< orphan*/  MV_BWD_OFFS ; 
 scalar_t__ REF_INTRA ; 

__attribute__((used)) static inline int get_bs(cavs_vector *mvP, cavs_vector *mvQ, int b)
{
    if ((mvP->ref == REF_INTRA) || (mvQ->ref == REF_INTRA))
        return 2;
    if((abs(mvP->x - mvQ->x) >= 4) ||
       (abs(mvP->y - mvQ->y) >= 4) ||
       (mvP->ref != mvQ->ref))
        return 1;
    if (b) {
        mvP += MV_BWD_OFFS;
        mvQ += MV_BWD_OFFS;
        if((abs(mvP->x - mvQ->x) >= 4) ||
           (abs(mvP->y - mvQ->y) >= 4) ||
           (mvP->ref != mvQ->ref))
            return 1;
    }
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
          int b = 100;
          int _len_mvP0 = 1;
          struct TYPE_4__ * mvP = (struct TYPE_4__ *) malloc(_len_mvP0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_mvP0; _i0++) {
            mvP[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        mvP[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        mvP[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mvQ0 = 1;
          struct TYPE_4__ * mvQ = (struct TYPE_4__ *) malloc(_len_mvQ0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_mvQ0; _i0++) {
            mvQ[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        mvQ[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        mvQ[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bs(mvP,mvQ,b);
          printf("%d\n", benchRet); 
          free(mvP);
          free(mvQ);
        
        break;
    }
    // big-arr
    case 1:
    {
          int b = 255;
          int _len_mvP0 = 65025;
          struct TYPE_4__ * mvP = (struct TYPE_4__ *) malloc(_len_mvP0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_mvP0; _i0++) {
            mvP[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        mvP[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        mvP[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mvQ0 = 65025;
          struct TYPE_4__ * mvQ = (struct TYPE_4__ *) malloc(_len_mvQ0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_mvQ0; _i0++) {
            mvQ[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        mvQ[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        mvQ[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bs(mvP,mvQ,b);
          printf("%d\n", benchRet); 
          free(mvP);
          free(mvQ);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int b = 10;
          int _len_mvP0 = 100;
          struct TYPE_4__ * mvP = (struct TYPE_4__ *) malloc(_len_mvP0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_mvP0; _i0++) {
            mvP[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        mvP[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        mvP[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mvQ0 = 100;
          struct TYPE_4__ * mvQ = (struct TYPE_4__ *) malloc(_len_mvQ0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_mvQ0; _i0++) {
            mvQ[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        mvQ[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        mvQ[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bs(mvP,mvQ,b);
          printf("%d\n", benchRet); 
          free(mvP);
          free(mvQ);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
