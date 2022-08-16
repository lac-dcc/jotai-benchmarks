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
       1            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int type; } ;
typedef  TYPE_1__ STATSD_METRIC ;
typedef  int /*<<< orphan*/  RRD_ALGORITHM ;

/* Variables and functions */
 int /*<<< orphan*/  RRD_ALGORITHM_ABSOLUTE ; 
 int /*<<< orphan*/  RRD_ALGORITHM_INCREMENTAL ; 
#define  STATSD_METRIC_TYPE_COUNTER 133 
#define  STATSD_METRIC_TYPE_GAUGE 132 
#define  STATSD_METRIC_TYPE_HISTOGRAM 131 
#define  STATSD_METRIC_TYPE_METER 130 
#define  STATSD_METRIC_TYPE_SET 129 
#define  STATSD_METRIC_TYPE_TIMER 128 

__attribute__((used)) static inline RRD_ALGORITHM statsd_algorithm_for_metric(STATSD_METRIC *m) {
    switch(m->type) {
        default:
        case STATSD_METRIC_TYPE_GAUGE:
        case STATSD_METRIC_TYPE_SET:
        case STATSD_METRIC_TYPE_TIMER:
        case STATSD_METRIC_TYPE_HISTOGRAM:
            return RRD_ALGORITHM_ABSOLUTE;

        case STATSD_METRIC_TYPE_METER:
        case STATSD_METRIC_TYPE_COUNTER:
            return RRD_ALGORITHM_INCREMENTAL;
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
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = statsd_algorithm_for_metric(m);
          printf("%d\n", benchRet); 
          free(m);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_m0 = 100;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = statsd_algorithm_for_metric(m);
          printf("%d\n", benchRet); 
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
