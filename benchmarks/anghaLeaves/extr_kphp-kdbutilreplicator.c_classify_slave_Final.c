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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct related_binlog {int flags; int targets; TYPE_1__** client; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int LRF_BROKEN ; 
 int LRF_MASTER ; 
 int RC_UPTODATE ; 

int classify_slave (struct related_binlog *R) {
  if ((R->flags & LRF_MASTER)) {
    return 4;
  }
  if ((R->flags & LRF_BROKEN)) {
    return 0;
  }
  int j, r = 1;
  for (j = 0; j < R->targets; j++) {
    int w = (!R->client[j]) ? 1 : (!(R->client[j]->flags & RC_UPTODATE)) ? 2 : 3;
    if (r < w) {
      r = w;
    }
  }
  return r;
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
          int _len_R0 = 1;
          struct related_binlog * R = (struct related_binlog *) malloc(_len_R0*sizeof(struct related_binlog));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        R[_i0].targets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_R__i0__client0 = 1;
          R[_i0].client = (struct TYPE_2__ **) malloc(_len_R__i0__client0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_R__i0__client0; _j0++) {
            int _len_R__i0__client1 = 1;
            R[_i0].client[_j0] = (struct TYPE_2__ *) malloc(_len_R__i0__client1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_R__i0__client1; _j1++) {
              R[_i0].client[_j0]->flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = classify_slave(R);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_R0; _aux++) {
          free(*(R[_aux].client));
        free(R[_aux].client);
          }
          free(R);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
