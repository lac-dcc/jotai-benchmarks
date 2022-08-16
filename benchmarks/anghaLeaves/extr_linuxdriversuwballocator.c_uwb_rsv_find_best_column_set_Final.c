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

/* Type definitions */
struct uwb_rsv_col_set_info {int start_col; int interval; int safe_mas_per_col; int unsafe_mas_per_col; } ;
struct uwb_rsv_col_info {int max_avail_safe; int max_avail_unsafe; int* highest_mas; struct uwb_rsv_col_set_info csi; } ;
struct uwb_rsv_alloc_info {int safe_allocated_mases; int unsafe_allocated_mases; int total_allocated_mases; int interval; struct uwb_rsv_col_info* ci; } ;

/* Variables and functions */
 int UWB_MAS_PER_ZONE ; 
 int UWB_NUM_ZONES ; 
 int UWB_RSV_ALLOC_FOUND ; 
 int UWB_RSV_ALLOC_NOT_FOUND ; 

__attribute__((used)) static int uwb_rsv_find_best_column_set(struct uwb_rsv_alloc_info *ai, int interval, 
					int num_safe_mas, int num_unsafe_mas)
{
	struct uwb_rsv_col_info *ci = ai->ci;
	struct uwb_rsv_col_set_info *csi = &ci->csi;
	struct uwb_rsv_col_set_info tmp_csi;
	int deep, set, col, start_col_deep, col_start_set;
	int start_col, max_mas_in_set, lowest_max_mas_in_deep;
	int n_mas;
	int found = UWB_RSV_ALLOC_NOT_FOUND; 

	tmp_csi.start_col = 0;
	start_col_deep = interval;
	n_mas = num_unsafe_mas + num_safe_mas;

	for (deep = 0; ((interval >> deep) & 0x1) == 0; deep++) {
		start_col_deep /= 2;
		col_start_set = 0;
		lowest_max_mas_in_deep = UWB_MAS_PER_ZONE;

		for (set = 1; set <= (1 << deep); set++) {
			max_mas_in_set = 0;
			start_col = start_col_deep + col_start_set;
			for (col = start_col; col < UWB_NUM_ZONES; col += interval) {
                
				if (ci[col].max_avail_safe >= num_safe_mas &&
				    ci[col].max_avail_unsafe >= n_mas) {
					if (ci[col].highest_mas[n_mas] > max_mas_in_set)
						max_mas_in_set = ci[col].highest_mas[n_mas];
				} else {
					max_mas_in_set = 0;
					break;
				}
			}
			if ((lowest_max_mas_in_deep > max_mas_in_set) && max_mas_in_set) {
				lowest_max_mas_in_deep = max_mas_in_set;

				tmp_csi.start_col = start_col;
			}
			col_start_set += (interval >> deep);
		}

		if (lowest_max_mas_in_deep < 8) {
			csi->start_col = tmp_csi.start_col;
			found = UWB_RSV_ALLOC_FOUND;
			break;
		} else if ((lowest_max_mas_in_deep > 8) && 
			   (lowest_max_mas_in_deep != UWB_MAS_PER_ZONE) &&
			   (found == UWB_RSV_ALLOC_NOT_FOUND)) {
			csi->start_col = tmp_csi.start_col;
			found = UWB_RSV_ALLOC_FOUND;
		}
	}

	if (found == UWB_RSV_ALLOC_FOUND) {
		csi->interval = interval;
		csi->safe_mas_per_col = num_safe_mas;
		csi->unsafe_mas_per_col = num_unsafe_mas;

		ai->safe_allocated_mases = (UWB_NUM_ZONES / interval) * num_safe_mas;
		ai->unsafe_allocated_mases = (UWB_NUM_ZONES / interval) * num_unsafe_mas;
		ai->total_allocated_mases = ai->safe_allocated_mases + ai->unsafe_allocated_mases;
		ai->interval = interval;		
	}
	return found;
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
          int interval = 100;
          int num_safe_mas = 100;
          int num_unsafe_mas = 100;
          int _len_ai0 = 1;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].safe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].unsafe_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].total_allocated_mases = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ci0 = 1;
          ai[_i0].ci = (struct uwb_rsv_col_info *) malloc(_len_ai__i0__ci0*sizeof(struct uwb_rsv_col_info));
          for(int _j0 = 0; _j0 < _len_ai__i0__ci0; _j0++) {
            ai[_i0].ci->max_avail_safe = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].ci->max_avail_unsafe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__ci_highest_mas0 = 1;
          ai[_i0].ci->highest_mas = (int *) malloc(_len_ai__i0__ci_highest_mas0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ai__i0__ci_highest_mas0; _j0++) {
            ai[_i0].ci->highest_mas[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].ci->csi.start_col = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].ci->csi.interval = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].ci->csi.safe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].ci->csi.unsafe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = uwb_rsv_find_best_column_set(ai,interval,num_safe_mas,num_unsafe_mas);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].ci);
          }
          free(ai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
