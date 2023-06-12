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
typedef  int uint32_t ;
struct window_data {scalar_t__ evicted; scalar_t__ dirty; scalar_t__ age; } ;

/* Variables and functions */

__attribute__((used)) static void window_sum(struct window_data *wd, struct window_data *w, uint32_t size) {
    int x;
    for (x = 0; x < size; x++) {
        struct window_data *d = &wd[x];
        w->age += d->age;
        w->dirty += d->dirty;
        w->evicted += d->evicted;
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 6896
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 2307
          // ------------------------------- 
          // static_instructions_O2 : 38
          // dynamic_instructions_O2 : 1802
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 1802
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 1802
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 2052
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 2560
          // ------------------------------- 

          int size = 255;
        
          int _len_wd0 = 65025;
          struct window_data * wd = (struct window_data *) malloc(_len_wd0*sizeof(struct window_data));
          for(int _i0 = 0; _i0 < _len_wd0; _i0++) {
              wd[_i0].evicted = ((-2 * (next_i()%2)) + 1) * next_i();
          wd[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          wd[_i0].age = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_w0 = 65025;
          struct window_data * w = (struct window_data *) malloc(_len_w0*sizeof(struct window_data));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
              w[_i0].evicted = ((-2 * (next_i()%2)) + 1) * next_i();
          w[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          w[_i0].age = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          window_sum(wd,w,size);
          free(wd);
          free(w);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 281
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 102
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 88
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 92
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 110
          // ------------------------------- 

          int size = 10;
        
          int _len_wd0 = 100;
          struct window_data * wd = (struct window_data *) malloc(_len_wd0*sizeof(struct window_data));
          for(int _i0 = 0; _i0 < _len_wd0; _i0++) {
              wd[_i0].evicted = ((-2 * (next_i()%2)) + 1) * next_i();
          wd[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          wd[_i0].age = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_w0 = 100;
          struct window_data * w = (struct window_data *) malloc(_len_w0*sizeof(struct window_data));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
              w[_i0].evicted = ((-2 * (next_i()%2)) + 1) * next_i();
          w[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          w[_i0].age = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          window_sum(wd,w,size);
          free(wd);
          free(w);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_wd0 = 1;
          struct window_data * wd = (struct window_data *) malloc(_len_wd0*sizeof(struct window_data));
          for(int _i0 = 0; _i0 < _len_wd0; _i0++) {
              wd[_i0].evicted = ((-2 * (next_i()%2)) + 1) * next_i();
          wd[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          wd[_i0].age = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_w0 = 1;
          struct window_data * w = (struct window_data *) malloc(_len_w0*sizeof(struct window_data));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
              w[_i0].evicted = ((-2 * (next_i()%2)) + 1) * next_i();
          w[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          w[_i0].age = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          window_sum(wd,w,size);
          free(wd);
          free(w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
