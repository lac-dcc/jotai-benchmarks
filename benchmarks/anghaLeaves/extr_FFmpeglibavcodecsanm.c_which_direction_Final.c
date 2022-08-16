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

/* Type definitions */
typedef  enum GlyphEdge { ____Placeholder_GlyphEdge } GlyphEdge ;
typedef  enum GlyphDir { ____Placeholder_GlyphDir } GlyphDir ;

/* Variables and functions */
 int BOTTOM_EDGE ; 
 int DIR_DOWN ; 
 int DIR_LEFT ; 
 int DIR_RIGHT ; 
 int DIR_UP ; 
 int LEFT_EDGE ; 
 int NO_DIR ; 
 int RIGHT_EDGE ; 
 int TOP_EDGE ; 

__attribute__((used)) static enum GlyphDir which_direction(enum GlyphEdge edge0, enum GlyphEdge edge1)
{
    if ((edge0 == LEFT_EDGE && edge1 == RIGHT_EDGE) ||
        (edge1 == LEFT_EDGE && edge0 == RIGHT_EDGE) ||
        (edge0 == BOTTOM_EDGE && edge1 != TOP_EDGE) ||
        (edge1 == BOTTOM_EDGE && edge0 != TOP_EDGE))
        return DIR_UP;
    else if ((edge0 == TOP_EDGE && edge1 != BOTTOM_EDGE) ||
             (edge1 == TOP_EDGE && edge0 != BOTTOM_EDGE))
        return DIR_DOWN;
    else if ((edge0 == LEFT_EDGE && edge1 != RIGHT_EDGE) ||
             (edge1 == LEFT_EDGE && edge0 != RIGHT_EDGE))
        return DIR_LEFT;
    else if ((edge0 == TOP_EDGE && edge1 == BOTTOM_EDGE) ||
             (edge1 == TOP_EDGE && edge0 == BOTTOM_EDGE) ||
             (edge0 == RIGHT_EDGE && edge1 != LEFT_EDGE) ||
             (edge1 == RIGHT_EDGE && edge0 != LEFT_EDGE))
        return DIR_RIGHT;

    return NO_DIR;
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
          enum GlyphEdge edge0 = 0;
          enum GlyphEdge edge1 = 0;
          enum GlyphDir benchRet = which_direction(edge0,edge1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
