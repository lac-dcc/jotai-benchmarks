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
struct qed_dcbx_results {TYPE_1__* arr; } ;
struct protocol_dcb_data {int /*<<< orphan*/  dcb_dont_add_vlan0; int /*<<< orphan*/  dcb_tc; int /*<<< orphan*/  dcb_priority; int /*<<< orphan*/  dcb_enable_flag; } ;
typedef  enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_2__ {int /*<<< orphan*/  dont_add_vlan0; int /*<<< orphan*/  tc; int /*<<< orphan*/  priority; int /*<<< orphan*/  enable; } ;

/* Variables and functions */

__attribute__((used)) static void qed_dcbx_update_protocol_data(struct protocol_dcb_data *p_data,
					  struct qed_dcbx_results *p_src,
					  enum dcbx_protocol_type type)
{
	p_data->dcb_enable_flag = p_src->arr[type].enable;
	p_data->dcb_priority = p_src->arr[type].priority;
	p_data->dcb_tc = p_src->arr[type].tc;
	p_data->dcb_dont_add_vlan0 = p_src->arr[type].dont_add_vlan0;
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
          enum dcbx_protocol_type type = 0;
          int _len_p_data0 = 1;
          struct protocol_dcb_data * p_data = (struct protocol_dcb_data *) malloc(_len_p_data0*sizeof(struct protocol_dcb_data));
          for(int _i0 = 0; _i0 < _len_p_data0; _i0++) {
            p_data[_i0].dcb_dont_add_vlan0 = ((-2 * (next_i()%2)) + 1) * next_i();
        p_data[_i0].dcb_tc = ((-2 * (next_i()%2)) + 1) * next_i();
        p_data[_i0].dcb_priority = ((-2 * (next_i()%2)) + 1) * next_i();
        p_data[_i0].dcb_enable_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_src0 = 1;
          struct qed_dcbx_results * p_src = (struct qed_dcbx_results *) malloc(_len_p_src0*sizeof(struct qed_dcbx_results));
          for(int _i0 = 0; _i0 < _len_p_src0; _i0++) {
              int _len_p_src__i0__arr0 = 1;
          p_src[_i0].arr = (struct TYPE_2__ *) malloc(_len_p_src__i0__arr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_src__i0__arr0; _j0++) {
            p_src[_i0].arr->dont_add_vlan0 = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].arr->tc = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].arr->priority = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].arr->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_dcbx_update_protocol_data(p_data,p_src,type);
          free(p_data);
          for(int _aux = 0; _aux < _len_p_src0; _aux++) {
          free(p_src[_aux].arr);
          }
          free(p_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
