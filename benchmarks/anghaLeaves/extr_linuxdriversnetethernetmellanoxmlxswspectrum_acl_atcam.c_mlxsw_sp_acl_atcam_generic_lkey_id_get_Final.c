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
typedef  int /*<<< orphan*/  u8 ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp_acl_atcam_lkey_id {int dummy; } ;
struct mlxsw_sp_acl_atcam_region_generic {struct mlxsw_sp_acl_atcam_lkey_id dummy_lkey_id; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_generic* priv; } ;

/* Variables and functions */

__attribute__((used)) static struct mlxsw_sp_acl_atcam_lkey_id *
mlxsw_sp_acl_atcam_generic_lkey_id_get(struct mlxsw_sp_acl_atcam_region *aregion,
				       struct mlxsw_sp_acl_rule_info *rulei,
				       u8 erp_id)
{
	struct mlxsw_sp_acl_atcam_region_generic *region_generic;

	region_generic = aregion->priv;
	return &region_generic->dummy_lkey_id;
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
          int erp_id = 100;
          int _len_aregion0 = 1;
          struct mlxsw_sp_acl_atcam_region * aregion = (struct mlxsw_sp_acl_atcam_region *) malloc(_len_aregion0*sizeof(struct mlxsw_sp_acl_atcam_region));
          for(int _i0 = 0; _i0 < _len_aregion0; _i0++) {
              int _len_aregion__i0__priv0 = 1;
          aregion[_i0].priv = (struct mlxsw_sp_acl_atcam_region_generic *) malloc(_len_aregion__i0__priv0*sizeof(struct mlxsw_sp_acl_atcam_region_generic));
          for(int _j0 = 0; _j0 < _len_aregion__i0__priv0; _j0++) {
            aregion[_i0].priv->dummy_lkey_id.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rulei0 = 1;
          struct mlxsw_sp_acl_rule_info * rulei = (struct mlxsw_sp_acl_rule_info *) malloc(_len_rulei0*sizeof(struct mlxsw_sp_acl_rule_info));
          for(int _i0 = 0; _i0 < _len_rulei0; _i0++) {
            rulei[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mlxsw_sp_acl_atcam_lkey_id * benchRet = mlxsw_sp_acl_atcam_generic_lkey_id_get(aregion,rulei,erp_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_aregion0; _aux++) {
          free(aregion[_aux].priv);
          }
          free(aregion);
          free(rulei);
        
        break;
    }
    // linked
    case 1:
    {
          int erp_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aregion0 = 1;
          struct mlxsw_sp_acl_atcam_region * aregion = (struct mlxsw_sp_acl_atcam_region *) malloc(_len_aregion0*sizeof(struct mlxsw_sp_acl_atcam_region));
          for(int _i0 = 0; _i0 < _len_aregion0; _i0++) {
              int _len_aregion__i0__priv0 = 1;
          aregion[_i0].priv = (struct mlxsw_sp_acl_atcam_region_generic *) malloc(_len_aregion__i0__priv0*sizeof(struct mlxsw_sp_acl_atcam_region_generic));
          for(int _j0 = 0; _j0 < _len_aregion__i0__priv0; _j0++) {
            aregion[_i0].priv->dummy_lkey_id.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rulei0 = 1;
          struct mlxsw_sp_acl_rule_info * rulei = (struct mlxsw_sp_acl_rule_info *) malloc(_len_rulei0*sizeof(struct mlxsw_sp_acl_rule_info));
          for(int _i0 = 0; _i0 < _len_rulei0; _i0++) {
            rulei[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mlxsw_sp_acl_atcam_lkey_id * benchRet = mlxsw_sp_acl_atcam_generic_lkey_id_get(aregion,rulei,erp_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_aregion0; _aux++) {
          free(aregion[_aux].priv);
          }
          free(aregion);
          free(rulei);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
