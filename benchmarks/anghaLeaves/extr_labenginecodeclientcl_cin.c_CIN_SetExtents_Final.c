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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct TYPE_2__ {scalar_t__ status; int xpos; int ypos; int width; int height; int /*<<< orphan*/  dirty; } ;

/* Variables and functions */
 scalar_t__ FMV_EOF ; 
 int MAX_VIDEO_HANDLES ; 
 TYPE_1__* cinTable ; 
 int /*<<< orphan*/  qtrue ; 

void CIN_SetExtents (int handle, int x, int y, int w, int h) {
	if (handle < 0 || handle>= MAX_VIDEO_HANDLES || cinTable[handle].status == FMV_EOF) return;
	cinTable[handle].xpos = x;
	cinTable[handle].ypos = y;
	cinTable[handle].width = w;
	cinTable[handle].height = h;
	cinTable[handle].dirty = qtrue;
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
          int handle = 100;
          int x = 100;
          int y = 100;
          int w = 100;
          int h = 100;
          CIN_SetExtents(handle,x,y,w,h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int handle = 255;
          int x = 255;
          int y = 255;
          int w = 255;
          int h = 255;
          CIN_SetExtents(handle,x,y,w,h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int handle = 10;
          int x = 10;
          int y = 10;
          int w = 10;
          int h = 10;
          CIN_SetExtents(handle,x,y,w,h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
