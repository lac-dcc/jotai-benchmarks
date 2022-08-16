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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int cursor_text_uses_bg; } ;
struct TYPE_5__ {int cursor_text_uses_bg; } ;
struct TYPE_7__ {TYPE_2__ configured; TYPE_1__ overridden; } ;
typedef  TYPE_3__ ColorProfile ;

/* Variables and functions */

float
cursor_text_as_bg(ColorProfile *self) {
    if (self->overridden.cursor_text_uses_bg & 1) {
        return self->overridden.cursor_text_uses_bg & 2 ? 1.f : 0.f;
    }
    return self->configured.cursor_text_uses_bg & 2 ? 1.f : 0.f;
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
          int _len_self0 = 1;
          struct TYPE_7__ * self = (struct TYPE_7__ *) malloc(_len_self0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].configured.cursor_text_uses_bg = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].overridden.cursor_text_uses_bg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = cursor_text_as_bg(self);
          printf("%f\n", benchRet); 
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
