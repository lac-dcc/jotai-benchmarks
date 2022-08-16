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

/* Type definitions */
struct connection {int flags; } ;

/* Variables and functions */
 int C_NORD ; 
 int C_NOWR ; 
 int C_STOPREAD ; 
 int C_WANTRD ; 
 int C_WANTWR ; 
 int EVT_LEVEL ; 
 int EVT_READ ; 
 int EVT_SPEC ; 
 int EVT_WRITE ; 

__attribute__((used)) static inline int compute_conn_events (struct connection *c) {
  return (((c->flags & (C_WANTRD | C_STOPREAD)) == C_WANTRD) ? EVT_READ : 0) | (c->flags & C_WANTWR ? EVT_WRITE : 0) | EVT_SPEC 
       | (((c->flags & (C_WANTRD | C_NORD)) == (C_WANTRD | C_NORD))
         || ((c->flags & (C_WANTWR | C_NOWR)) == (C_WANTWR | C_NOWR)) ? EVT_LEVEL : 0);
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
          int _len_c0 = 1;
          struct connection * c = (struct connection *) malloc(_len_c0*sizeof(struct connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_conn_events(c);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_c0 = 100;
          struct connection * c = (struct connection *) malloc(_len_c0*sizeof(struct connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_conn_events(c);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
