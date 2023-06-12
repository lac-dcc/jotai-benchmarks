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
struct seq_file {struct map_iter* private; } ;
struct map_iter {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct map_iter *map_iter(struct seq_file *m)
{
	return m->private;
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
          int _len_m0 = 65025;
          struct seq_file * m = (struct seq_file *) malloc(_len_m0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__private0 = 1;
          m[_i0].private = (struct map_iter *) malloc(_len_m__i0__private0*sizeof(struct map_iter));
          for(int _j0 = 0; _j0 < _len_m__i0__private0; _j0++) {
              m[_i0].private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct map_iter * benchRet = map_iter(m);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].private);
          }
          free(m);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_m0 = 100;
          struct seq_file * m = (struct seq_file *) malloc(_len_m0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__private0 = 1;
          m[_i0].private = (struct map_iter *) malloc(_len_m__i0__private0*sizeof(struct map_iter));
          for(int _j0 = 0; _j0 < _len_m__i0__private0; _j0++) {
              m[_i0].private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct map_iter * benchRet = map_iter(m);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].private);
          }
          free(m);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_m0 = 1;
          struct seq_file * m = (struct seq_file *) malloc(_len_m0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__private0 = 1;
          m[_i0].private = (struct map_iter *) malloc(_len_m__i0__private0*sizeof(struct map_iter));
          for(int _j0 = 0; _j0 < _len_m__i0__private0; _j0++) {
              m[_i0].private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct map_iter * benchRet = map_iter(m);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].private);
          }
          free(m);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
