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
typedef  scalar_t__ u32 ;
struct wmt_pinctrl_data {int npins; TYPE_1__* pins; } ;
struct TYPE_2__ {scalar_t__ number; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int wmt_pctl_find_group_by_pin(struct wmt_pinctrl_data *data, u32 pin)
{
	int i;

	for (i = 0; i < data->npins; i++) {
		if (data->pins[i].number == pin)
			return i;
	}

	return -EINVAL;
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
          long pin = 100;
          int _len_data0 = 1;
          struct wmt_pinctrl_data * data = (struct wmt_pinctrl_data *) malloc(_len_data0*sizeof(struct wmt_pinctrl_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__pins0 = 1;
          data[_i0].pins = (struct TYPE_2__ *) malloc(_len_data__i0__pins0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__pins0; _j0++) {
            data[_i0].pins->number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wmt_pctl_find_group_by_pin(data,pin);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].pins);
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
