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
struct TYPE_5__ {TYPE_1__* submatch_data; } ;
typedef  TYPE_2__ tre_tnfa_t ;
struct TYPE_4__ {int so_tag; int eo_tag; } ;

/* Variables and functions */

__attribute__((used)) static void
tre_purge_regset(int *regset, tre_tnfa_t *tnfa, int tag)
{
  int i;

  for (i = 0; regset[i] >= 0; i++)
    {
      int id = regset[i] / 2;
      int start = !(regset[i] % 2);
      if (start)
	tnfa->submatch_data[id].so_tag = tag;
      else
	tnfa->submatch_data[id].eo_tag = tag;
    }
  regset[0] = -1;
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
          int tag = 100;
          int _len_regset0 = 1;
          int * regset = (int *) malloc(_len_regset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_regset0; _i0++) {
            regset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tnfa0 = 1;
          struct TYPE_5__ * tnfa = (struct TYPE_5__ *) malloc(_len_tnfa0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tnfa0; _i0++) {
              int _len_tnfa__i0__submatch_data0 = 1;
          tnfa[_i0].submatch_data = (struct TYPE_4__ *) malloc(_len_tnfa__i0__submatch_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tnfa__i0__submatch_data0; _j0++) {
            tnfa[_i0].submatch_data->so_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        tnfa[_i0].submatch_data->eo_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tre_purge_regset(regset,tnfa,tag);
          free(regset);
          for(int _aux = 0; _aux < _len_tnfa0; _aux++) {
          free(tnfa[_aux].submatch_data);
          }
          free(tnfa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
