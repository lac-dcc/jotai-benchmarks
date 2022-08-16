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
struct xkb_rule_names {int /*<<< orphan*/  variant; int /*<<< orphan*/  rules; int /*<<< orphan*/  options; int /*<<< orphan*/  model; int /*<<< orphan*/  layout; } ;
struct input_config {int /*<<< orphan*/  xkb_variant; int /*<<< orphan*/  xkb_rules; int /*<<< orphan*/  xkb_options; int /*<<< orphan*/  xkb_model; int /*<<< orphan*/  xkb_layout; } ;

/* Variables and functions */

void input_config_fill_rule_names(struct input_config *ic,
		struct xkb_rule_names *rules) {
	rules->layout = ic->xkb_layout;
	rules->model = ic->xkb_model;
	rules->options = ic->xkb_options;
	rules->rules = ic->xkb_rules;
	rules->variant = ic->xkb_variant;
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
          int _len_ic0 = 1;
          struct input_config * ic = (struct input_config *) malloc(_len_ic0*sizeof(struct input_config));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0].xkb_variant = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].xkb_rules = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].xkb_options = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].xkb_model = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].xkb_layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rules0 = 1;
          struct xkb_rule_names * rules = (struct xkb_rule_names *) malloc(_len_rules0*sizeof(struct xkb_rule_names));
          for(int _i0 = 0; _i0 < _len_rules0; _i0++) {
            rules[_i0].variant = ((-2 * (next_i()%2)) + 1) * next_i();
        rules[_i0].rules = ((-2 * (next_i()%2)) + 1) * next_i();
        rules[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        rules[_i0].model = ((-2 * (next_i()%2)) + 1) * next_i();
        rules[_i0].layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          input_config_fill_rule_names(ic,rules);
          free(ic);
          free(rules);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
