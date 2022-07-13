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

/* Type definitions */
struct ip_fw_in_args {int /*<<< orphan*/  fwai_divert_rule; int /*<<< orphan*/  fwai_pf_rule; int /*<<< orphan*/  fwai_ipfw_rule; int /*<<< orphan*/  fwai_next_hop; } ;
struct ip_fw_args {int /*<<< orphan*/  fwa_divert_rule; int /*<<< orphan*/  fwa_pf_rule; int /*<<< orphan*/  fwa_ipfw_rule; int /*<<< orphan*/  fwa_next_hop; } ;

/* Variables and functions */

__attribute__((used)) static void
ip_input_cpin_args(struct ip_fw_args *args1, struct ip_fw_in_args *args)
{
	args->fwai_next_hop = args1->fwa_next_hop;
	args->fwai_ipfw_rule = args1->fwa_ipfw_rule;
	args->fwai_pf_rule = args1->fwa_pf_rule;
	args->fwai_divert_rule = args1->fwa_divert_rule;
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
          int _len_args10 = 1;
          struct ip_fw_args * args1 = (struct ip_fw_args *) malloc(_len_args10*sizeof(struct ip_fw_args));
          for(int _i0 = 0; _i0 < _len_args10; _i0++) {
            args1[_i0].fwa_divert_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_pf_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_ipfw_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_next_hop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 1;
          struct ip_fw_in_args * args = (struct ip_fw_in_args *) malloc(_len_args0*sizeof(struct ip_fw_in_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].fwai_divert_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_pf_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_ipfw_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_next_hop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_input_cpin_args(args1,args);
          free(args1);
          free(args);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_args10 = 65025;
          struct ip_fw_args * args1 = (struct ip_fw_args *) malloc(_len_args10*sizeof(struct ip_fw_args));
          for(int _i0 = 0; _i0 < _len_args10; _i0++) {
            args1[_i0].fwa_divert_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_pf_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_ipfw_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_next_hop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 65025;
          struct ip_fw_in_args * args = (struct ip_fw_in_args *) malloc(_len_args0*sizeof(struct ip_fw_in_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].fwai_divert_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_pf_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_ipfw_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_next_hop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_input_cpin_args(args1,args);
          free(args1);
          free(args);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_args10 = 100;
          struct ip_fw_args * args1 = (struct ip_fw_args *) malloc(_len_args10*sizeof(struct ip_fw_args));
          for(int _i0 = 0; _i0 < _len_args10; _i0++) {
            args1[_i0].fwa_divert_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_pf_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_ipfw_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args1[_i0].fwa_next_hop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 100;
          struct ip_fw_in_args * args = (struct ip_fw_in_args *) malloc(_len_args0*sizeof(struct ip_fw_in_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].fwai_divert_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_pf_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_ipfw_rule = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].fwai_next_hop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_input_cpin_args(args1,args);
          free(args1);
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
