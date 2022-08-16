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
struct tl_type {int constructors_num; TYPE_1__** constructors; } ;
struct TYPE_2__ {int name; } ;

/* Variables and functions */

int get_constructor_by_name (struct tl_type *t, int name) {
  int i;
  for (i = 0; i < t->constructors_num; i++) if (t->constructors[i]->name == name) {
    return i;
  }
  return -1;
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
          int name = 100;
          int _len_t0 = 1;
          struct tl_type * t = (struct tl_type *) malloc(_len_t0*sizeof(struct tl_type));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].constructors_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__constructors0 = 1;
          t[_i0].constructors = (struct TYPE_2__ **) malloc(_len_t__i0__constructors0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_t__i0__constructors0; _j0++) {
            int _len_t__i0__constructors1 = 1;
            t[_i0].constructors[_j0] = (struct TYPE_2__ *) malloc(_len_t__i0__constructors1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_t__i0__constructors1; _j1++) {
              t[_i0].constructors[_j0]->name = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_constructor_by_name(t,name);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].constructors));
        free(t[_aux].constructors);
          }
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
