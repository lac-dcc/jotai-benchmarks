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
       0            empty\n\
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
typedef  scalar_t__ u32 ;
struct mlxsw_sp_qdisc {scalar_t__ handle; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* tclass_qdiscs; struct mlxsw_sp_qdisc* root_qdisc; } ;

/* Variables and functions */
 int IEEE_8021QAZ_MAX_TCS ; 
 scalar_t__ TC_H_UNSPEC ; 

__attribute__((used)) static struct mlxsw_sp_qdisc *
mlxsw_sp_qdisc_find_by_handle(struct mlxsw_sp_port *mlxsw_sp_port, u32 handle)
{
	int i;

	if (mlxsw_sp_port->root_qdisc->handle == handle)
		return mlxsw_sp_port->root_qdisc;

	if (mlxsw_sp_port->root_qdisc->handle == TC_H_UNSPEC)
		return NULL;

	for (i = 0; i < IEEE_8021QAZ_MAX_TCS; i++)
		if (mlxsw_sp_port->tclass_qdiscs[i].handle == handle)
			return &mlxsw_sp_port->tclass_qdiscs[i];

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mlxsw_sp_port0 = 1;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
              int _len_mlxsw_sp_port__i0__tclass_qdiscs0 = 1;
          mlxsw_sp_port[_i0].tclass_qdiscs = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_port__i0__tclass_qdiscs0*sizeof(struct mlxsw_sp_qdisc));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__tclass_qdiscs0; _j0++) {
              mlxsw_sp_port[_i0].tclass_qdiscs->handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_mlxsw_sp_port__i0__root_qdisc0 = 1;
          mlxsw_sp_port[_i0].root_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_port__i0__root_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__root_qdisc0; _j0++) {
              mlxsw_sp_port[_i0].root_qdisc->handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct mlxsw_sp_qdisc * benchRet = mlxsw_sp_qdisc_find_by_handle(mlxsw_sp_port,handle);
          printf("%ld\n", (*benchRet).handle);
          for(int _aux = 0; _aux < _len_mlxsw_sp_port0; _aux++) {
          free(mlxsw_sp_port[_aux].tclass_qdiscs);
          }
          for(int _aux = 0; _aux < _len_mlxsw_sp_port0; _aux++) {
          free(mlxsw_sp_port[_aux].root_qdisc);
          }
          free(mlxsw_sp_port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
