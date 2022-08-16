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
struct XRing {scalar_t__* ring; int head; int tail; } ;
typedef  scalar_t__ Element ;

/* Variables and functions */
 int XRING_SIZE ; 
 int XringFailure ; 
 int XringSuccess ; 

__attribute__((used)) static int
xring_add(struct XRing *xring, Element value)
{
    volatile Element *ring = xring->ring;
    Element num;

    if (value == 0) {
        return XringFailure;
    }

    if (xring->head >= xring->tail + XRING_SIZE) {
        //printf("-");
        return XringFailure;
    }
    num = xring->ring[xring->head & (XRING_SIZE-1)];
    if (num == 0) {
        ring[xring->head & (XRING_SIZE-1)] = value;
        xring->head++;
        return XringSuccess;
        /*int x = pixie_locked_CAS64(&ring[xring->head & (XRING_SIZE-1)], value, 0);
        if (x) {
            xring->head++;
            return XringSuccess;
        } else {
            return XringFailure;
        }*/
    }
    return XringFailure;
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
          long value = 100;
          int _len_xring0 = 1;
          struct XRing * xring = (struct XRing *) malloc(_len_xring0*sizeof(struct XRing));
          for(int _i0 = 0; _i0 < _len_xring0; _i0++) {
              int _len_xring__i0__ring0 = 1;
          xring[_i0].ring = (long *) malloc(_len_xring__i0__ring0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_xring__i0__ring0; _j0++) {
            xring[_i0].ring[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xring[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        xring[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xring_add(xring,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xring0; _aux++) {
          free(xring[_aux].ring);
          }
          free(xring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
