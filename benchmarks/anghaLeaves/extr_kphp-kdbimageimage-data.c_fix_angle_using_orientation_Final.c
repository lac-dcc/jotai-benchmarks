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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int orientation; } ;
typedef  TYPE_1__ Image ;

/* Variables and functions */
#define  BottomRightOrientation 130 
#define  LeftBottomOrientation 129 
#define  RightTopOrientation 128 

__attribute__((used)) static void fix_angle_using_orientation (Image *image, int *angle) {
  switch (image->orientation) {
    case BottomRightOrientation:
      (*angle) += 2;
      break;
    case RightTopOrientation:
      (*angle) += 1;
      break;
    case LeftBottomOrientation:
      (*angle) += 3;
      break;
    default:
      break;
  }
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
          int _len_image0 = 1;
          struct TYPE_3__ * image = (struct TYPE_3__ *) malloc(_len_image0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].orientation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_angle0 = 1;
          int * angle = (int *) malloc(_len_angle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_angle0; _i0++) {
            angle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fix_angle_using_orientation(image,angle);
          free(image);
          free(angle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
