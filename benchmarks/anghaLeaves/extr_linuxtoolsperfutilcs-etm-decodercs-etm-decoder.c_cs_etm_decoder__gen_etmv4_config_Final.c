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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  reg_idr8; int /*<<< orphan*/  reg_idr2; int /*<<< orphan*/  reg_idr1; int /*<<< orphan*/  reg_idr0; int /*<<< orphan*/  reg_traceidr; int /*<<< orphan*/  reg_configr; } ;
struct cs_etm_trace_params {TYPE_1__ etmv4; } ;
struct TYPE_5__ {int /*<<< orphan*/  core_prof; int /*<<< orphan*/  arch_ver; scalar_t__ reg_idr13; scalar_t__ reg_idr12; scalar_t__ reg_idr11; scalar_t__ reg_idr10; scalar_t__ reg_idr9; int /*<<< orphan*/  reg_idr8; int /*<<< orphan*/  reg_idr2; int /*<<< orphan*/  reg_idr1; int /*<<< orphan*/  reg_idr0; int /*<<< orphan*/  reg_traceidr; int /*<<< orphan*/  reg_configr; } ;
typedef  TYPE_2__ ocsd_etmv4_cfg ;

/* Variables and functions */
 int /*<<< orphan*/  ARCH_V8 ; 
 int /*<<< orphan*/  profile_CortexA ; 

__attribute__((used)) static void cs_etm_decoder__gen_etmv4_config(struct cs_etm_trace_params *params,
					     ocsd_etmv4_cfg *config)
{
	config->reg_configr = params->etmv4.reg_configr;
	config->reg_traceidr = params->etmv4.reg_traceidr;
	config->reg_idr0 = params->etmv4.reg_idr0;
	config->reg_idr1 = params->etmv4.reg_idr1;
	config->reg_idr2 = params->etmv4.reg_idr2;
	config->reg_idr8 = params->etmv4.reg_idr8;
	config->reg_idr9 = 0;
	config->reg_idr10 = 0;
	config->reg_idr11 = 0;
	config->reg_idr12 = 0;
	config->reg_idr13 = 0;
	config->arch_ver = ARCH_V8;
	config->core_prof = profile_CortexA;
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
          struct cs_etm_trace_params * params = (struct cs_etm_trace_params *) malloc(_len_params0*sizeof(struct cs_etm_trace_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].etmv4.reg_idr8 = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].etmv4.reg_idr2 = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].etmv4.reg_idr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].etmv4.reg_idr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].etmv4.reg_traceidr = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].etmv4.reg_configr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config0 = 1;
          struct TYPE_5__ * config = (struct TYPE_5__ *) malloc(_len_config0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].core_prof = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].arch_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr13 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr12 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr11 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr10 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr9 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr8 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr2 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_idr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_traceidr = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].reg_configr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cs_etm_decoder__gen_etmv4_config(params,config);
          free(params);
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
