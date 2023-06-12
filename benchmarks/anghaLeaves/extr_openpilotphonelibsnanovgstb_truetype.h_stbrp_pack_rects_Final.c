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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ w; scalar_t__ h; scalar_t__ x; scalar_t__ y; int was_packed; } ;
typedef  TYPE_1__ stbrp_rect ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ bottom_y; scalar_t__ height; } ;
typedef  TYPE_2__ stbrp_context ;

/* Variables and functions */

__attribute__((used)) static void stbrp_pack_rects(stbrp_context *con, stbrp_rect *rects, int num_rects)
{
   int i;
   for (i=0; i < num_rects; ++i) {
      if (con->x + rects[i].w > con->width) {
         con->x = 0;
         con->y = con->bottom_y;
      }
      if (con->y + rects[i].h > con->height)
         break;
      rects[i].x = con->x;
      rects[i].y = con->y;
      rects[i].was_packed = 1;
      con->x += rects[i].w;
      if (con->y + rects[i].h > con->bottom_y)
         con->bottom_y = con->y + rects[i].h;
   }
   for (   ; i < num_rects; ++i)
      rects[i].was_packed = 0;
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
          // static_instructions_O0 : 77
          // dynamic_instructions_O0 : 16590
          // ------------------------------- 
          // static_instructions_O1 : 43
          // dynamic_instructions_O1 : 5631
          // ------------------------------- 
          // static_instructions_O2 : 43
          // dynamic_instructions_O2 : 5631
          // ------------------------------- 
          // static_instructions_O3 : 43
          // dynamic_instructions_O3 : 5631
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 5631
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 5631
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 5629
          // ------------------------------- 

          int num_rects = 255;
        
          int _len_con0 = 65025;
          struct TYPE_6__ * con = (struct TYPE_6__ *) malloc(_len_con0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              con[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].bottom_y = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rects0 = 65025;
          struct TYPE_5__ * rects = (struct TYPE_5__ *) malloc(_len_rects0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rects0; _i0++) {
              rects[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].was_packed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          stbrp_pack_rects(con,rects,num_rects);
          free(con);
          free(rects);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 77
          // dynamic_instructions_O0 : 665
          // ------------------------------- 
          // static_instructions_O1 : 43
          // dynamic_instructions_O1 : 241
          // ------------------------------- 
          // static_instructions_O2 : 43
          // dynamic_instructions_O2 : 241
          // ------------------------------- 
          // static_instructions_O3 : 43
          // dynamic_instructions_O3 : 241
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 241
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 241
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 239
          // ------------------------------- 

          int num_rects = 10;
        
          int _len_con0 = 100;
          struct TYPE_6__ * con = (struct TYPE_6__ *) malloc(_len_con0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              con[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].bottom_y = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rects0 = 100;
          struct TYPE_5__ * rects = (struct TYPE_5__ *) malloc(_len_rects0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rects0; _i0++) {
              rects[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].was_packed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          stbrp_pack_rects(con,rects,num_rects);
          free(con);
          free(rects);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int num_rects = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_con0 = 1;
          struct TYPE_6__ * con = (struct TYPE_6__ *) malloc(_len_con0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              con[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].bottom_y = ((-2 * (next_i()%2)) + 1) * next_i();
          con[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rects0 = 1;
          struct TYPE_5__ * rects = (struct TYPE_5__ *) malloc(_len_rects0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rects0; _i0++) {
              rects[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          rects[_i0].was_packed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          stbrp_pack_rects(con,rects,num_rects);
          free(con);
          free(rects);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
