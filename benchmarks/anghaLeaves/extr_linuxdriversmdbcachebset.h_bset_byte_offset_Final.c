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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct btree_keys {TYPE_1__* set; } ;
struct bset {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int bset_byte_offset(struct btree_keys *b,
					    struct bset *i)
{
	return ((size_t) i) - ((size_t) b->set->data);
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
          int _len_b0 = 1;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
            b[_i0].set->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_i0 = 1;
          struct bset * i = (struct bset *) malloc(_len_i0*sizeof(struct bset));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bset_byte_offset(b,i);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          free(b);
          free(i);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_b0 = 65025;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
            b[_i0].set->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_i0 = 65025;
          struct bset * i = (struct bset *) malloc(_len_i0*sizeof(struct bset));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bset_byte_offset(b,i);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          free(b);
          free(i);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_b0 = 100;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
            b[_i0].set->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_i0 = 100;
          struct bset * i = (struct bset *) malloc(_len_i0*sizeof(struct bset));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bset_byte_offset(b,i);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          free(b);
          free(i);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
