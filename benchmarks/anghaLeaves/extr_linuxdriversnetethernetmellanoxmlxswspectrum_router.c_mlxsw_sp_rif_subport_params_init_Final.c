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
struct mlxsw_sp_rif_params {int /*<<< orphan*/  system_port; int /*<<< orphan*/  lag_id; int /*<<< orphan*/  lag; int /*<<< orphan*/  vid; } ;
struct mlxsw_sp_port_vlan {int /*<<< orphan*/  vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int /*<<< orphan*/  local_port; int /*<<< orphan*/  lag_id; int /*<<< orphan*/  lagged; } ;

/* Variables and functions */

__attribute__((used)) static void
mlxsw_sp_rif_subport_params_init(struct mlxsw_sp_rif_params *params,
				 struct mlxsw_sp_port_vlan *mlxsw_sp_port_vlan)
{
	struct mlxsw_sp_port *mlxsw_sp_port = mlxsw_sp_port_vlan->mlxsw_sp_port;

	params->vid = mlxsw_sp_port_vlan->vid;
	params->lag = mlxsw_sp_port->lagged;
	if (params->lag)
		params->lag_id = mlxsw_sp_port->lag_id;
	else
		params->system_port = mlxsw_sp_port->local_port;
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
          int _len_params0 = 1;
          struct mlxsw_sp_rif_params * params = (struct mlxsw_sp_rif_params *) malloc(_len_params0*sizeof(struct mlxsw_sp_rif_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].system_port = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].lag_id = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].lag = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].vid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_port_vlan0 = 1;
          struct mlxsw_sp_port_vlan * mlxsw_sp_port_vlan = (struct mlxsw_sp_port_vlan *) malloc(_len_mlxsw_sp_port_vlan0*sizeof(struct mlxsw_sp_port_vlan));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port_vlan0; _i0++) {
            mlxsw_sp_port_vlan[_i0].vid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp_port_vlan__i0__mlxsw_sp_port0 = 1;
          mlxsw_sp_port_vlan[_i0].mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port_vlan__i0__mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port_vlan__i0__mlxsw_sp_port0; _j0++) {
            mlxsw_sp_port_vlan[_i0].mlxsw_sp_port->local_port = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_port_vlan[_i0].mlxsw_sp_port->lag_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_port_vlan[_i0].mlxsw_sp_port->lagged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mlxsw_sp_rif_subport_params_init(params,mlxsw_sp_port_vlan);
          free(params);
          for(int _aux = 0; _aux < _len_mlxsw_sp_port_vlan0; _aux++) {
          free(mlxsw_sp_port_vlan[_aux].mlxsw_sp_port);
          }
          free(mlxsw_sp_port_vlan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
