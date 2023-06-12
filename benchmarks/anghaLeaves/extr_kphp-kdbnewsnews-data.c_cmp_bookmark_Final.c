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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct bookmark {scalar_t__ next; scalar_t__ value; scalar_t__ y; } ;

/* Variables and functions */

__attribute__((used)) static inline int cmp_bookmark (struct bookmark *x, struct bookmark *y) {
  if (x->next < y->next) {
    return -1;
  } else if (x->next > y->next) {
    return 1;
  } else if (x->value < y->value) {
    return -1;
  } else if (x->value > y->value) {
    return 1;
  } else if (x->y < y->y) {
    return -1;
  } else if (x->y > y->y) {
    return 1;
  } else {
    return 0;
  }
}

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
          int _len_x0 = 65025;
          struct bookmark * x = (struct bookmark *) malloc(_len_x0*sizeof(struct bookmark));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              x[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          x[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          x[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_y0 = 65025;
          struct bookmark * y = (struct bookmark *) malloc(_len_y0*sizeof(struct bookmark));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
              y[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          y[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          y[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cmp_bookmark(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_x0 = 100;
          struct bookmark * x = (struct bookmark *) malloc(_len_x0*sizeof(struct bookmark));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              x[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          x[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          x[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_y0 = 100;
          struct bookmark * y = (struct bookmark *) malloc(_len_y0*sizeof(struct bookmark));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
              y[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          y[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          y[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cmp_bookmark(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_x0 = 1;
          struct bookmark * x = (struct bookmark *) malloc(_len_x0*sizeof(struct bookmark));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              x[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          x[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          x[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_y0 = 1;
          struct bookmark * y = (struct bookmark *) malloc(_len_y0*sizeof(struct bookmark));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
              y[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          y[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          y[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cmp_bookmark(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
