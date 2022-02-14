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

/* Variables and functions */
#define  GLUT_KEY_DOWN 131 
#define  GLUT_KEY_LEFT 130 
#define  GLUT_KEY_RIGHT 129 
#define  GLUT_KEY_UP 128 
 double* view_rot ; 

__attribute__((used)) static void
gears_special(int special, int crap, int morecrap)
{
   switch (special) {
      case GLUT_KEY_LEFT:
         view_rot[1] += 5.0;
         break;
      case GLUT_KEY_RIGHT:
         view_rot[1] -= 5.0;
         break;
      case GLUT_KEY_UP:
         view_rot[0] += 5.0;
         break;
      case GLUT_KEY_DOWN:
         view_rot[0] -= 5.0;
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

    // big-arr
    case 0:
    {
          int special = 255;
          int crap = 255;
          int morecrap = 255;
          gears_special(special,crap,morecrap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
