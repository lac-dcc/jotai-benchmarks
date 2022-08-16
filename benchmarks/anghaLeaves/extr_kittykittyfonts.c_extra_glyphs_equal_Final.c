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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__* data; } ;
typedef  TYPE_1__ ExtraGlyphs ;

/* Variables and functions */
 size_t MAX_NUM_EXTRA_GLYPHS ; 

__attribute__((used)) static inline bool
extra_glyphs_equal(ExtraGlyphs *a, ExtraGlyphs *b) {
    for (size_t i = 0; i < MAX_NUM_EXTRA_GLYPHS; i++) {
        if (a->data[i] != b->data[i]) return false;
        if (a->data[i] == 0) return true;
    }
    return true;
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
          int _len_a0 = 1;
          struct TYPE_4__ * a = (struct TYPE_4__ *) malloc(_len_a0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__data0 = 1;
          a[_i0].data = (long *) malloc(_len_a__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__data0; _j0++) {
            a[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 1;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__data0 = 1;
          b[_i0].data = (long *) malloc(_len_b__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__data0; _j0++) {
            b[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = extra_glyphs_equal(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].data);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].data);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
