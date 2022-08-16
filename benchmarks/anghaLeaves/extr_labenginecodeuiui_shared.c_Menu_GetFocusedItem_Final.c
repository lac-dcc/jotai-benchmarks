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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int itemCount; TYPE_3__** items; } ;
typedef  TYPE_2__ menuDef_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ window; } ;
typedef  TYPE_3__ itemDef_t ;

/* Variables and functions */
 int WINDOW_HASFOCUS ; 

itemDef_t *Menu_GetFocusedItem(menuDef_t *menu) {
  int i;
  if (menu) {
    for (i = 0; i < menu->itemCount; i++) {
      if (menu->items[i]->window.flags & WINDOW_HASFOCUS) {
        return menu->items[i];
      }
    }
  }
  return NULL;
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
          int _len_menu0 = 1;
          struct TYPE_7__ * menu = (struct TYPE_7__ *) malloc(_len_menu0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
            menu[_i0].itemCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_menu__i0__items0 = 1;
          menu[_i0].items = (struct TYPE_8__ **) malloc(_len_menu__i0__items0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_menu__i0__items0; _j0++) {
            int _len_menu__i0__items1 = 1;
            menu[_i0].items[_j0] = (struct TYPE_8__ *) malloc(_len_menu__i0__items1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_menu__i0__items1; _j1++) {
              menu[_i0].items[_j0]->window.flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct TYPE_8__ * benchRet = Menu_GetFocusedItem(menu);
          for(int _aux = 0; _aux < _len_menu0; _aux++) {
          free(*(menu[_aux].items));
        free(menu[_aux].items);
          }
          free(menu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
