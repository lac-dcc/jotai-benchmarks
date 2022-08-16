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
struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {char* cmdStrCache; } ;
typedef  TYPE_2__ RPanel ;
typedef  int /*<<< orphan*/  RCore ;

/* Variables and functions */

bool findCmdStrCache(RCore *core, RPanel* panel, char **str) {
	if (panel->model->cmdStrCache) {
		*str = panel->model->cmdStrCache;
		return true;
	}
	return false;
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
          int _len_core0 = 1;
          int * core = (int *) malloc(_len_core0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_core0; _i0++) {
            core[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_panel0 = 1;
          struct TYPE_5__ * panel = (struct TYPE_5__ *) malloc(_len_panel0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_panel0; _i0++) {
              int _len_panel__i0__model0 = 1;
          panel[_i0].model = (struct TYPE_4__ *) malloc(_len_panel__i0__model0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_panel__i0__model0; _j0++) {
              int _len_panel__i0__model_cmdStrCache0 = 1;
          panel[_i0].model->cmdStrCache = (char *) malloc(_len_panel__i0__model_cmdStrCache0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_panel__i0__model_cmdStrCache0; _j0++) {
            panel[_i0].model->cmdStrCache[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_str0 = 1;
          char ** str = (char **) malloc(_len_str0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (char *) malloc(_len_str1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = findCmdStrCache(core,panel,str);
          printf("%d\n", benchRet); 
          free(core);
          for(int _aux = 0; _aux < _len_panel0; _aux++) {
          free(panel[_aux].model);
          }
          free(panel);
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
