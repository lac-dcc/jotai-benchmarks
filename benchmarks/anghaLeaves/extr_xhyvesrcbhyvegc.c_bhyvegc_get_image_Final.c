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
       1            linked\n\
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
struct bhyvegc_image {int dummy; } ;
struct bhyvegc {struct bhyvegc_image* gc_image; } ;

/* Variables and functions */

struct bhyvegc_image *
bhyvegc_get_image(struct bhyvegc *gc)
{
	if (gc == NULL)
		return (NULL);

	return (gc->gc_image);
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
          int _len_gc0 = 1;
          struct bhyvegc * gc = (struct bhyvegc *) malloc(_len_gc0*sizeof(struct bhyvegc));
          for(int _i0 = 0; _i0 < _len_gc0; _i0++) {
              int _len_gc__i0__gc_image0 = 1;
          gc[_i0].gc_image = (struct bhyvegc_image *) malloc(_len_gc__i0__gc_image0*sizeof(struct bhyvegc_image));
          for(int _j0 = 0; _j0 < _len_gc__i0__gc_image0; _j0++) {
            gc[_i0].gc_image->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bhyvegc_image * benchRet = bhyvegc_get_image(gc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gc0; _aux++) {
          free(gc[_aux].gc_image);
          }
          free(gc);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_gc0 = 1;
          struct bhyvegc * gc = (struct bhyvegc *) malloc(_len_gc0*sizeof(struct bhyvegc));
          for(int _i0 = 0; _i0 < _len_gc0; _i0++) {
              int _len_gc__i0__gc_image0 = 1;
          gc[_i0].gc_image = (struct bhyvegc_image *) malloc(_len_gc__i0__gc_image0*sizeof(struct bhyvegc_image));
          for(int _j0 = 0; _j0 < _len_gc__i0__gc_image0; _j0++) {
            gc[_i0].gc_image->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bhyvegc_image * benchRet = bhyvegc_get_image(gc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gc0; _aux++) {
          free(gc[_aux].gc_image);
          }
          free(gc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
