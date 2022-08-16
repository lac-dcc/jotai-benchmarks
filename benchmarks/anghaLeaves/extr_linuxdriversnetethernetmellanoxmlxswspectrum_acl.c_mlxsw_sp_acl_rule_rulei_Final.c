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
       1            linked\n\
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
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp_acl_rule {struct mlxsw_sp_acl_rule_info* rulei; } ;

/* Variables and functions */

struct mlxsw_sp_acl_rule_info *
mlxsw_sp_acl_rule_rulei(struct mlxsw_sp_acl_rule *rule)
{
	return rule->rulei;
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
          int _len_rule0 = 1;
          struct mlxsw_sp_acl_rule * rule = (struct mlxsw_sp_acl_rule *) malloc(_len_rule0*sizeof(struct mlxsw_sp_acl_rule));
          for(int _i0 = 0; _i0 < _len_rule0; _i0++) {
              int _len_rule__i0__rulei0 = 1;
          rule[_i0].rulei = (struct mlxsw_sp_acl_rule_info *) malloc(_len_rule__i0__rulei0*sizeof(struct mlxsw_sp_acl_rule_info));
          for(int _j0 = 0; _j0 < _len_rule__i0__rulei0; _j0++) {
            rule[_i0].rulei->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlxsw_sp_acl_rule_info * benchRet = mlxsw_sp_acl_rule_rulei(rule);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rule0; _aux++) {
          free(rule[_aux].rulei);
          }
          free(rule);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_rule0 = 1;
          struct mlxsw_sp_acl_rule * rule = (struct mlxsw_sp_acl_rule *) malloc(_len_rule0*sizeof(struct mlxsw_sp_acl_rule));
          for(int _i0 = 0; _i0 < _len_rule0; _i0++) {
              int _len_rule__i0__rulei0 = 1;
          rule[_i0].rulei = (struct mlxsw_sp_acl_rule_info *) malloc(_len_rule__i0__rulei0*sizeof(struct mlxsw_sp_acl_rule_info));
          for(int _j0 = 0; _j0 < _len_rule__i0__rulei0; _j0++) {
            rule[_i0].rulei->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlxsw_sp_acl_rule_info * benchRet = mlxsw_sp_acl_rule_rulei(rule);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rule0; _aux++) {
          free(rule[_aux].rulei);
          }
          free(rule);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
