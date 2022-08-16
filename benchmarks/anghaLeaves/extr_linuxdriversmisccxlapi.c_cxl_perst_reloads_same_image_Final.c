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
struct cxl_afu {TYPE_1__* adapter; } ;
struct TYPE_2__ {int perst_same_image; } ;

/* Variables and functions */

void cxl_perst_reloads_same_image(struct cxl_afu *afu,
				  bool perst_reloads_same_image)
{
	afu->adapter->perst_same_image = perst_reloads_same_image;
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
          int perst_reloads_same_image = 100;
          int _len_afu0 = 1;
          struct cxl_afu * afu = (struct cxl_afu *) malloc(_len_afu0*sizeof(struct cxl_afu));
          for(int _i0 = 0; _i0 < _len_afu0; _i0++) {
              int _len_afu__i0__adapter0 = 1;
          afu[_i0].adapter = (struct TYPE_2__ *) malloc(_len_afu__i0__adapter0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_afu__i0__adapter0; _j0++) {
            afu[_i0].adapter->perst_same_image = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cxl_perst_reloads_same_image(afu,perst_reloads_same_image);
          for(int _aux = 0; _aux < _len_afu0; _aux++) {
          free(afu[_aux].adapter);
          }
          free(afu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
