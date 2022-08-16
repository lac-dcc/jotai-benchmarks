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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* cy; void* cx; void* y; void* x; int /*<<< orphan*/  type; } ;
typedef  TYPE_1__ stbtt_vertex ;
typedef  int /*<<< orphan*/  stbtt_uint8 ;
typedef  scalar_t__ stbtt_int32 ;
typedef  void* stbtt_int16 ;

/* Variables and functions */

__attribute__((used)) static void stbtt_setvertex(stbtt_vertex *v, stbtt_uint8 type, stbtt_int32 x, stbtt_int32 y, stbtt_int32 cx, stbtt_int32 cy)
{
   v->type = type;
   v->x = (stbtt_int16) x;
   v->y = (stbtt_int16) y;
   v->cx = (stbtt_int16) cx;
   v->cy = (stbtt_int16) cy;
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
          int type = 100;
          long x = 100;
          long y = 100;
          long cx = 100;
          long cy = 100;
          int _len_v0 = 1;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbtt_setvertex(v,type,x,y,cx,cy);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int type = 10;
          long x = 10;
          long y = 10;
          long cx = 10;
          long cy = 10;
          int _len_v0 = 100;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbtt_setvertex(v,type,x,y,cx,cy);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
