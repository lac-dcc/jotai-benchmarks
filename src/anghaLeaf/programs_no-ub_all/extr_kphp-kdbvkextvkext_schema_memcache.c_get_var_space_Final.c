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
       0            big-arr\n\
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

/* Type definitions */
struct tl_tree {int dummy; } ;

/* Variables and functions */
 struct tl_tree** __vars ; 
 struct tl_tree** last_var_ptr ; 

struct tl_tree **get_var_space (struct tl_tree **vars, int n) {
//  fprintf (stderr, "get_var_space: %d\n", n);
  if (vars - n < __vars) { return 0; }
  if (last_var_ptr > vars - n) {
    last_var_ptr = vars - n;
  }
  return vars - n;
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

    // big-arr
    case 0:
    {
          int n = 255;
          int _len_vars0 = 1;
          struct tl_tree ** vars = (struct tl_tree **) malloc(_len_vars0*sizeof(struct tl_tree *));
          for(int _i0 = 0; _i0 < _len_vars0; _i0++) {
            int _len_vars1 = 1;
            vars[_i0] = (struct tl_tree *) malloc(_len_vars1*sizeof(struct tl_tree));
            for(int _i1 = 0; _i1 < _len_vars1; _i1++) {
              vars[_i0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct tl_tree ** benchRet = get_var_space(vars,n);
          printf("{{struct}} %p\n", &benchRet); 
          for(int i1 = 0; i1 < _len_vars0; i1++) {
            int _len_vars1 = 1;
              free(vars[i1]);
          }
          free(vars);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
