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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int stringlen; } ;
struct TYPE_5__ {int num_chars; int x1; double baseline_y_delta; int ymin; scalar_t__ ymax; scalar_t__ x0; } ;
typedef  TYPE_1__ StbTexteditRow ;
typedef  TYPE_2__ STB_TEXTEDIT_STRING ;

/* Variables and functions */

void layout_func(StbTexteditRow *row, STB_TEXTEDIT_STRING *str, int start_i)
{
   int remaining_chars = str->stringlen - start_i;
   row->num_chars = remaining_chars > 20 ? 20 : remaining_chars; // should do real word wrap here
   row->x0 = 0;
   row->x1 = 20; // need to account for actual size of characters
   row->baseline_y_delta = 1.25;
   row->ymin = -1;
   row->ymax =  0;
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
          int start_i = 100;
          int _len_row0 = 1;
          struct TYPE_5__ * row = (struct TYPE_5__ *) malloc(_len_row0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0].num_chars = ((-2 * (next_i()%2)) + 1) * next_i();
        row[_i0].x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        row[_i0].baseline_y_delta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        row[_i0].ymin = ((-2 * (next_i()%2)) + 1) * next_i();
        row[_i0].ymax = ((-2 * (next_i()%2)) + 1) * next_i();
        row[_i0].x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 1;
          struct TYPE_6__ * str = (struct TYPE_6__ *) malloc(_len_str0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0].stringlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          layout_func(row,str,start_i);
          free(row);
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
