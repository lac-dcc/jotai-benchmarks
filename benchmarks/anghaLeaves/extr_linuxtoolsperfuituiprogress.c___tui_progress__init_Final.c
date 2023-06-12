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
struct ui_progress {int next; int step; int total; } ;

/* Variables and functions */
 int SLtt_Screen_Cols ; 

__attribute__((used)) static void __tui_progress__init(struct ui_progress *p)
{
	p->next = p->step = p->total / (SLtt_Screen_Cols - 2) ?: 1;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_p0 = 65025;
          struct ui_progress * p = (struct ui_progress *) malloc(_len_p0*sizeof(struct ui_progress));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __tui_progress__init(p);
          free(p);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_p0 = 100;
          struct ui_progress * p = (struct ui_progress *) malloc(_len_p0*sizeof(struct ui_progress));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __tui_progress__init(p);
          free(p);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_p0 = 1;
          struct ui_progress * p = (struct ui_progress *) malloc(_len_p0*sizeof(struct ui_progress));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __tui_progress__init(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
