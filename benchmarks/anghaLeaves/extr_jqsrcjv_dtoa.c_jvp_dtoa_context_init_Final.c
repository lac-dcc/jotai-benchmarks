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
struct dtoa_context {scalar_t__ p5s; scalar_t__* freelist; } ;

/* Variables and functions */

void jvp_dtoa_context_init(struct dtoa_context* C) {
  int i;
  for (i=0; i<(int)(sizeof(C->freelist)/sizeof(C->freelist[0])); i++) {
    C->freelist[i] = 0;
  }
  C->p5s = 0;
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
          int _len_C0 = 1;
          struct dtoa_context * C = (struct dtoa_context *) malloc(_len_C0*sizeof(struct dtoa_context));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].p5s = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_C__i0__freelist0 = 1;
          C[_i0].freelist = (long *) malloc(_len_C__i0__freelist0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_C__i0__freelist0; _j0++) {
            C[_i0].freelist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          jvp_dtoa_context_init(C);
          for(int _aux = 0; _aux < _len_C0; _aux++) {
          free(C[_aux].freelist);
          }
          free(C);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
