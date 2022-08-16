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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct msr_counter {scalar_t__ format; struct msr_counter* next; } ;
struct core_data {scalar_t__* counter; scalar_t__ mc6_us; int /*<<< orphan*/  core_temp_c; scalar_t__ c7; scalar_t__ c6; scalar_t__ c3; } ;
struct TYPE_2__ {struct msr_counter* cp; } ;

/* Variables and functions */
 scalar_t__ FORMAT_RAW ; 
 TYPE_1__ sys ; 

void
delta_core(struct core_data *new, struct core_data *old)
{
	int i;
	struct msr_counter *mp;

	old->c3 = new->c3 - old->c3;
	old->c6 = new->c6 - old->c6;
	old->c7 = new->c7 - old->c7;
	old->core_temp_c = new->core_temp_c;
	old->mc6_us = new->mc6_us - old->mc6_us;

	for (i = 0, mp = sys.cp; mp; i++, mp = mp->next) {
		if (mp->format == FORMAT_RAW)
			old->counter[i] = new->counter[i];
		else
			old->counter[i] = new->counter[i] - old->counter[i];
	}
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
          int _len_new0 = 1;
          struct core_data * new = (struct core_data *) malloc(_len_new0*sizeof(struct core_data));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
              int _len_new__i0__counter0 = 1;
          new[_i0].counter = (long *) malloc(_len_new__i0__counter0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_new__i0__counter0; _j0++) {
            new[_i0].counter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        new[_i0].mc6_us = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].core_temp_c = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c7 = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c6 = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 1;
          struct core_data * old = (struct core_data *) malloc(_len_old0*sizeof(struct core_data));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
              int _len_old__i0__counter0 = 1;
          old[_i0].counter = (long *) malloc(_len_old__i0__counter0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_old__i0__counter0; _j0++) {
            old[_i0].counter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        old[_i0].mc6_us = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].core_temp_c = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c7 = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c6 = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          delta_core(new,old);
          for(int _aux = 0; _aux < _len_new0; _aux++) {
          free(new[_aux].counter);
          }
          free(new);
          for(int _aux = 0; _aux < _len_old0; _aux++) {
          free(old[_aux].counter);
          }
          free(old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
