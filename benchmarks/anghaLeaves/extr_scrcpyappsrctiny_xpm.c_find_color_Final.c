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
typedef  scalar_t__ uint32_t ;
struct index {char c; scalar_t__ color; } ;

/* Variables and functions */

__attribute__((used)) static bool
find_color(struct index *index, int len, char c, uint32_t *color) {
    // there are typically very few color, so it's ok to iterate over the array
    for (int i = 0; i < len; ++i) {
        if (index[i].c == c) {
            *color = index[i].color;
            return true;
        }
    }
    *color = 0;
    return false;
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
          int len = 255;
        
          char c = 255;
        
          int _len_index0 = 65025;
          struct index * index = (struct index *) malloc(_len_index0*sizeof(struct index));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
              index[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
          index[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_color0 = 65025;
          long * color = (long *) malloc(_len_color0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = find_color(index,len,c,color);
          printf("%d\n", benchRet); 
          free(index);
          free(color);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int len = 10;
        
          char c = 10;
        
          int _len_index0 = 100;
          struct index * index = (struct index *) malloc(_len_index0*sizeof(struct index));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
              index[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
          index[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_color0 = 100;
          long * color = (long *) malloc(_len_color0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = find_color(index,len,c,color);
          printf("%d\n", benchRet); 
          free(index);
          free(color);
        
        break;
    }
    // empty
    case 2:
    {
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          char c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_index0 = 1;
          struct index * index = (struct index *) malloc(_len_index0*sizeof(struct index));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
              index[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
          index[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_color0 = 1;
          long * color = (long *) malloc(_len_color0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = find_color(index,len,c,color);
          printf("%d\n", benchRet); 
          free(index);
          free(color);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
