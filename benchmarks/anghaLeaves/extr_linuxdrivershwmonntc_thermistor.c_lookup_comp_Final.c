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
       0            empty\n\
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
struct ntc_data {int n_comp; TYPE_1__* comp; } ;
struct TYPE_2__ {unsigned int ohm; } ;

/* Variables and functions */

__attribute__((used)) static void lookup_comp(struct ntc_data *data, unsigned int ohm,
			int *i_low, int *i_high)
{
	int start, end, mid;

	/*
	 * Handle special cases: Resistance is higher than or equal to
	 * resistance in first table entry, or resistance is lower or equal
	 * to resistance in last table entry.
	 * In these cases, return i_low == i_high, either pointing to the
	 * beginning or to the end of the table depending on the condition.
	 */
	if (ohm >= data->comp[0].ohm) {
		*i_low = 0;
		*i_high = 0;
		return;
	}
	if (ohm <= data->comp[data->n_comp - 1].ohm) {
		*i_low = data->n_comp - 1;
		*i_high = data->n_comp - 1;
		return;
	}

	/* Do a binary search on compensation table */
	start = 0;
	end = data->n_comp;
	while (start < end) {
		mid = start + (end - start) / 2;
		/*
		 * start <= mid < end
		 * data->comp[start].ohm > ohm >= data->comp[end].ohm
		 *
		 * We could check for "ohm == data->comp[mid].ohm" here, but
		 * that is a quite unlikely condition, and we would have to
		 * check again after updating start. Check it at the end instead
		 * for simplicity.
		 */
		if (ohm >= data->comp[mid].ohm) {
			end = mid;
		} else {
			start = mid + 1;
			/*
			 * ohm >= data->comp[start].ohm might be true here,
			 * since we set start to mid + 1. In that case, we are
			 * done. We could keep going, but the condition is quite
			 * likely to occur, so it is worth checking for it.
			 */
			if (ohm >= data->comp[start].ohm)
				end = start;
		}
		/*
		 * start <= end
		 * data->comp[start].ohm >= ohm >= data->comp[end].ohm
		 */
	}
	/*
	 * start == end
	 * ohm >= data->comp[end].ohm
	 */
	*i_low = end;
	if (ohm == data->comp[end].ohm)
		*i_high = end;
	else
		*i_high = end - 1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int ohm = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          struct ntc_data * data = (struct ntc_data *) malloc(_len_data0*sizeof(struct ntc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].n_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__comp0 = 1;
          data[_i0].comp = (struct TYPE_2__ *) malloc(_len_data__i0__comp0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__comp0; _j0++) {
              data[_i0].comp->ohm = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_i_low0 = 1;
          int * i_low = (int *) malloc(_len_i_low0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_i_low0; _i0++) {
            i_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_i_high0 = 1;
          int * i_high = (int *) malloc(_len_i_high0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_i_high0; _i0++) {
            i_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          lookup_comp(data,ohm,i_low,i_high);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].comp);
          }
          free(data);
          free(i_low);
          free(i_high);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
