// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct pattern_trig_data {int delta_t; TYPE_2__* curr; TYPE_1__* next; } ;
struct TYPE_4__ {int delta_t; int brightness; } ;
struct TYPE_3__ {scalar_t__ brightness; } ;

/* Variables and functions */
 int UPDATE_INTERVAL ; 

__attribute__((used)) static int pattern_trig_compute_brightness(struct pattern_trig_data *data)
{
	int step_brightness;

	/*
	 * If current tuple's duration is less than the dimming interval,
	 * we should treat it as a step change of brightness instead of
	 * doing gradual dimming.
	 */
	if (data->delta_t == 0 || data->curr->delta_t < UPDATE_INTERVAL)
		return data->curr->brightness;

	step_brightness = abs(data->next->brightness - data->curr->brightness);
	step_brightness = data->delta_t * step_brightness / data->curr->delta_t;

	if (data->next->brightness > data->curr->brightness)
		return data->curr->brightness + step_brightness;
	else
		return data->curr->brightness - step_brightness;
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
          int _len_data0 = 1;
          struct pattern_trig_data * data = (struct pattern_trig_data *) malloc(_len_data0*sizeof(struct pattern_trig_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].delta_t = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__curr0 = 1;
          data[_i0].curr = (struct TYPE_4__ *) malloc(_len_data__i0__curr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__curr0; _j0++) {
            data[_i0].curr->delta_t = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].curr->brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__next0 = 1;
          data[_i0].next = (struct TYPE_3__ *) malloc(_len_data__i0__next0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__next0; _j0++) {
            data[_i0].next->brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pattern_trig_compute_brightness(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].curr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].next);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct pattern_trig_data * data = (struct pattern_trig_data *) malloc(_len_data0*sizeof(struct pattern_trig_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].delta_t = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__curr0 = 1;
          data[_i0].curr = (struct TYPE_4__ *) malloc(_len_data__i0__curr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__curr0; _j0++) {
            data[_i0].curr->delta_t = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].curr->brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__next0 = 1;
          data[_i0].next = (struct TYPE_3__ *) malloc(_len_data__i0__next0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__next0; _j0++) {
            data[_i0].next->brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pattern_trig_compute_brightness(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].curr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].next);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct pattern_trig_data * data = (struct pattern_trig_data *) malloc(_len_data0*sizeof(struct pattern_trig_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].delta_t = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__curr0 = 1;
          data[_i0].curr = (struct TYPE_4__ *) malloc(_len_data__i0__curr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__curr0; _j0++) {
            data[_i0].curr->delta_t = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].curr->brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__next0 = 1;
          data[_i0].next = (struct TYPE_3__ *) malloc(_len_data__i0__next0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__next0; _j0++) {
            data[_i0].next->brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pattern_trig_compute_brightness(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].curr);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].next);
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
