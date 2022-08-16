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
       1            big-arr-10x\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ssize_t ;
typedef  scalar_t__ char_type ;
struct TYPE_5__ {scalar_t__ left; scalar_t__ right; scalar_t__ font_idx; } ;
struct TYPE_4__ {scalar_t__ first_symbol_font_idx; } ;
typedef  TYPE_1__ FontGroup ;

/* Variables and functions */
 scalar_t__ NO_FONT ; 
 size_t num_symbol_maps ; 
 TYPE_2__* symbol_maps ; 

__attribute__((used)) static inline ssize_t
in_symbol_maps(FontGroup *fg, char_type ch) {
    for (size_t i = 0; i < num_symbol_maps; i++) {
        if (symbol_maps[i].left <= ch && ch <= symbol_maps[i].right) return fg->first_symbol_font_idx + symbol_maps[i].font_idx;
    }
    return NO_FONT;
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
          long ch = 100;
          int _len_fg0 = 1;
          struct TYPE_4__ * fg = (struct TYPE_4__ *) malloc(_len_fg0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_fg0; _i0++) {
            fg[_i0].first_symbol_font_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = in_symbol_maps(fg,ch);
          printf("%ld\n", benchRet); 
          free(fg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long ch = 10;
          int _len_fg0 = 100;
          struct TYPE_4__ * fg = (struct TYPE_4__ *) malloc(_len_fg0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_fg0; _i0++) {
            fg[_i0].first_symbol_font_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = in_symbol_maps(fg,ch);
          printf("%ld\n", benchRet); 
          free(fg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
