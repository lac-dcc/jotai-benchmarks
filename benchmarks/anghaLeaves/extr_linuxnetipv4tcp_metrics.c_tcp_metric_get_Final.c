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
typedef  int /*<<< orphan*/  u32 ;
struct tcp_metrics_block {int /*<<< orphan*/ * tcpm_vals; } ;
typedef  enum tcp_metric_index { ____Placeholder_tcp_metric_index } tcp_metric_index ;

/* Variables and functions */

__attribute__((used)) static u32 tcp_metric_get(struct tcp_metrics_block *tm,
			  enum tcp_metric_index idx)
{
	return tm->tcpm_vals[idx];
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
          enum tcp_metric_index idx = 0;
          int _len_tm0 = 1;
          struct tcp_metrics_block * tm = (struct tcp_metrics_block *) malloc(_len_tm0*sizeof(struct tcp_metrics_block));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
              int _len_tm__i0__tcpm_vals0 = 1;
          tm[_i0].tcpm_vals = (int *) malloc(_len_tm__i0__tcpm_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tm__i0__tcpm_vals0; _j0++) {
            tm[_i0].tcpm_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tcp_metric_get(tm,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tm0; _aux++) {
          free(tm[_aux].tcpm_vals);
          }
          free(tm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
