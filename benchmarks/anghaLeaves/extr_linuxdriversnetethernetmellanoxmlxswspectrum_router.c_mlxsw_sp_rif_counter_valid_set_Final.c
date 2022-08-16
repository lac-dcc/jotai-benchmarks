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
struct mlxsw_sp_rif {int counter_egress_valid; int counter_ingress_valid; } ;
typedef  enum mlxsw_sp_rif_counter_dir { ____Placeholder_mlxsw_sp_rif_counter_dir } mlxsw_sp_rif_counter_dir ;

/* Variables and functions */
#define  MLXSW_SP_RIF_COUNTER_EGRESS 129 
#define  MLXSW_SP_RIF_COUNTER_INGRESS 128 

__attribute__((used)) static void
mlxsw_sp_rif_counter_valid_set(struct mlxsw_sp_rif *rif,
			       enum mlxsw_sp_rif_counter_dir dir,
			       bool valid)
{
	switch (dir) {
	case MLXSW_SP_RIF_COUNTER_EGRESS:
		rif->counter_egress_valid = valid;
		break;
	case MLXSW_SP_RIF_COUNTER_INGRESS:
		rif->counter_ingress_valid = valid;
		break;
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
          enum mlxsw_sp_rif_counter_dir dir = 0;
          int valid = 100;
          int _len_rif0 = 1;
          struct mlxsw_sp_rif * rif = (struct mlxsw_sp_rif *) malloc(_len_rif0*sizeof(struct mlxsw_sp_rif));
          for(int _i0 = 0; _i0 < _len_rif0; _i0++) {
            rif[_i0].counter_egress_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        rif[_i0].counter_ingress_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_rif_counter_valid_set(rif,dir,valid);
          free(rif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
