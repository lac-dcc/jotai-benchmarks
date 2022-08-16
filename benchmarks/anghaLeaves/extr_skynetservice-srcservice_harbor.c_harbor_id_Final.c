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
struct slave {int fd; } ;
struct harbor {struct slave* s; } ;

/* Variables and functions */
 int REMOTE_MAX ; 

__attribute__((used)) static int
harbor_id(struct harbor *h, int fd) {
	int i;
	for (i=1;i<REMOTE_MAX;i++) {
		struct slave *s = &h->s[i];
		if (s->fd == fd) {
			return i;
		}
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
          int fd = 100;
          int _len_h0 = 1;
          struct harbor * h = (struct harbor *) malloc(_len_h0*sizeof(struct harbor));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__s0 = 1;
          h[_i0].s = (struct slave *) malloc(_len_h__i0__s0*sizeof(struct slave));
          for(int _j0 = 0; _j0 < _len_h__i0__s0; _j0++) {
            h[_i0].s->fd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = harbor_id(h,fd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].s);
          }
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
