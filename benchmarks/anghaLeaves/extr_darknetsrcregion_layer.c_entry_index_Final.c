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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int w; int h; int outputs; int coords; int classes; } ;
typedef  TYPE_1__ layer ;

/* Variables and functions */

int entry_index(layer l, int batch, int location, int entry)
{
    int n =   location / (l.w*l.h);
    int loc = location % (l.w*l.h);
    return batch*l.outputs + n*l.w*l.h*(l.coords+l.classes+1) + entry*l.w*l.h + loc;
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
          int batch = 100;
          int location = 100;
          int entry = 100;
          struct TYPE_3__ l;
        l.w = ((-2 * (next_i()%2)) + 1) * next_i();
        l.h = ((-2 * (next_i()%2)) + 1) * next_i();
        l.outputs = ((-2 * (next_i()%2)) + 1) * next_i();
        l.coords = ((-2 * (next_i()%2)) + 1) * next_i();
        l.classes = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = entry_index(l,batch,location,entry);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int batch = 255;
          int location = 255;
          int entry = 255;
          struct TYPE_3__ l;
        l.w = ((-2 * (next_i()%2)) + 1) * next_i();
        l.h = ((-2 * (next_i()%2)) + 1) * next_i();
        l.outputs = ((-2 * (next_i()%2)) + 1) * next_i();
        l.coords = ((-2 * (next_i()%2)) + 1) * next_i();
        l.classes = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = entry_index(l,batch,location,entry);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int batch = 10;
          int location = 10;
          int entry = 10;
          struct TYPE_3__ l;
        l.w = ((-2 * (next_i()%2)) + 1) * next_i();
        l.h = ((-2 * (next_i()%2)) + 1) * next_i();
        l.outputs = ((-2 * (next_i()%2)) + 1) * next_i();
        l.coords = ((-2 * (next_i()%2)) + 1) * next_i();
        l.classes = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = entry_index(l,batch,location,entry);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
