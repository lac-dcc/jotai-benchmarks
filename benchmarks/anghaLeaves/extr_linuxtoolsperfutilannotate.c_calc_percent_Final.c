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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  double u64 ;
struct sym_hist {int nr_samples; int period; TYPE_1__* addr; } ;
struct TYPE_6__ {int nr_non_filtered_samples; int total_period; } ;
struct hists {TYPE_3__ stats; } ;
struct TYPE_5__ {double period; unsigned int nr_samples; } ;
struct annotation_data {double* percent; TYPE_2__ he; } ;
typedef  size_t s64 ;
struct TYPE_4__ {scalar_t__ period; scalar_t__ nr_samples; } ;

/* Variables and functions */
 size_t PERCENT_HITS_GLOBAL ; 
 size_t PERCENT_HITS_LOCAL ; 
 size_t PERCENT_PERIOD_GLOBAL ; 
 size_t PERCENT_PERIOD_LOCAL ; 

__attribute__((used)) static void calc_percent(struct sym_hist *sym_hist,
			 struct hists *hists,
			 struct annotation_data *data,
			 s64 offset, s64 end)
{
	unsigned int hits = 0;
	u64 period = 0;

	while (offset < end) {
		hits   += sym_hist->addr[offset].nr_samples;
		period += sym_hist->addr[offset].period;
		++offset;
	}

	if (sym_hist->nr_samples) {
		data->he.period     = period;
		data->he.nr_samples = hits;
		data->percent[PERCENT_HITS_LOCAL] = 100.0 * hits / sym_hist->nr_samples;
	}

	if (hists->stats.nr_non_filtered_samples)
		data->percent[PERCENT_HITS_GLOBAL] = 100.0 * hits / hists->stats.nr_non_filtered_samples;

	if (sym_hist->period)
		data->percent[PERCENT_PERIOD_LOCAL] = 100.0 * period / sym_hist->period;

	if (hists->stats.total_period)
		data->percent[PERCENT_PERIOD_GLOBAL] = 100.0 * period / hists->stats.total_period;
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
          unsigned long offset = 100;
          unsigned long end = 100;
          int _len_sym_hist0 = 1;
          struct sym_hist * sym_hist = (struct sym_hist *) malloc(_len_sym_hist0*sizeof(struct sym_hist));
          for(int _i0 = 0; _i0 < _len_sym_hist0; _i0++) {
            sym_hist[_i0].nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        sym_hist[_i0].period = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sym_hist__i0__addr0 = 1;
          sym_hist[_i0].addr = (struct TYPE_4__ *) malloc(_len_sym_hist__i0__addr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sym_hist__i0__addr0; _j0++) {
            sym_hist[_i0].addr->period = ((-2 * (next_i()%2)) + 1) * next_i();
        sym_hist[_i0].addr->nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hists0 = 1;
          struct hists * hists = (struct hists *) malloc(_len_hists0*sizeof(struct hists));
          for(int _i0 = 0; _i0 < _len_hists0; _i0++) {
            hists[_i0].stats.nr_non_filtered_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        hists[_i0].stats.total_period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct annotation_data * data = (struct annotation_data *) malloc(_len_data0*sizeof(struct annotation_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__percent0 = 1;
          data[_i0].percent = (double *) malloc(_len_data__i0__percent0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_data__i0__percent0; _j0++) {
            data[_i0].percent[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        data[_i0].he.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        data[_i0].he.nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_percent(sym_hist,hists,data,offset,end);
          for(int _aux = 0; _aux < _len_sym_hist0; _aux++) {
          free(sym_hist[_aux].addr);
          }
          free(sym_hist);
          free(hists);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].percent);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
