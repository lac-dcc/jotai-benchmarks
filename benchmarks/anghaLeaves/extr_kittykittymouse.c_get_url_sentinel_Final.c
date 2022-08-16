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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int index_type ;
typedef  int char_type ;
struct TYPE_5__ {int xnum; TYPE_1__* cpu_cells; } ;
struct TYPE_4__ {int ch; } ;
typedef  TYPE_2__ Line ;

/* Variables and functions */

__attribute__((used)) static inline char_type
get_url_sentinel(Line *line, index_type url_start) {
    char_type before = 0, sentinel;
    if (url_start > 0 && url_start < line->xnum) before = line->cpu_cells[url_start - 1].ch;
    switch(before) {
        case '"':
        case '\'':
        case '*':
            sentinel = before; break;
        case '(':
            sentinel = ')'; break;
        case '[':
            sentinel = ']'; break;
        case '{':
            sentinel = '}'; break;
        case '<':
            sentinel = '>'; break;
        default:
            sentinel = 0; break;
    }
    return sentinel;
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
          int url_start = 100;
          int _len_line0 = 1;
          struct TYPE_5__ * line = (struct TYPE_5__ *) malloc(_len_line0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0].xnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_line__i0__cpu_cells0 = 1;
          line[_i0].cpu_cells = (struct TYPE_4__ *) malloc(_len_line__i0__cpu_cells0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_line__i0__cpu_cells0; _j0++) {
            line[_i0].cpu_cells->ch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_url_sentinel(line,url_start);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_line0; _aux++) {
          free(line[_aux].cpu_cells);
          }
          free(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
