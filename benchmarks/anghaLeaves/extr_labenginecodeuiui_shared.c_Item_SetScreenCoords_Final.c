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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {scalar_t__ h; scalar_t__ w; } ;
struct TYPE_8__ {int /*<<< orphan*/  h; int /*<<< orphan*/  w; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int /*<<< orphan*/  h; int /*<<< orphan*/  w; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ border; TYPE_2__ rectClient; TYPE_1__ rect; scalar_t__ borderSize; } ;
struct TYPE_11__ {TYPE_4__ textRect; TYPE_3__ window; } ;
typedef  TYPE_5__ itemDef_t ;

/* Variables and functions */

void Item_SetScreenCoords(itemDef_t *item, float x, float y) {
  
  if (item == NULL) {
    return;
  }

  if (item->window.border != 0) {
    x += item->window.borderSize;
    y += item->window.borderSize;
  }

  item->window.rect.x = x + item->window.rectClient.x;
  item->window.rect.y = y + item->window.rectClient.y;
  item->window.rect.w = item->window.rectClient.w;
  item->window.rect.h = item->window.rectClient.h;

  // force the text rects to recompute
  item->textRect.w = 0;
  item->textRect.h = 0;
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
          float x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_item0 = 1;
          struct TYPE_11__ * item = (struct TYPE_11__ *) malloc(_len_item0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item[_i0].textRect.h = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].textRect.w = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.border = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rectClient.h = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rectClient.w = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rectClient.y = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rectClient.x = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rect.h = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rect.w = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rect.y = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.rect.x = ((-2 * (next_i()%2)) + 1) * next_i();
        item[_i0].window.borderSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Item_SetScreenCoords(item,x,y);
          free(item);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
