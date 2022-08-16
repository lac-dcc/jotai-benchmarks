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
       1            big-arr-10x\n\
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
struct ev7_lf_subpackets {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
marvel_print_680_frame(struct ev7_lf_subpackets *lf_subpackets)
{
#ifdef CONFIG_VERBOSE_MCHECK
	struct ev7_pal_environmental_subpacket *env;
	struct { int type; char *name; } ev_packets[] = {
		{ EL_TYPE__PAL__ENV__AMBIENT_TEMPERATURE,
		  "Ambient Temperature" },
		{ EL_TYPE__PAL__ENV__AIRMOVER_FAN,
		  "AirMover / Fan" },
		{ EL_TYPE__PAL__ENV__VOLTAGE,
		  "Voltage" },
		{ EL_TYPE__PAL__ENV__INTRUSION,
		  "Intrusion" },
		{ EL_TYPE__PAL__ENV__POWER_SUPPLY,
		  "Power Supply" },
		{ EL_TYPE__PAL__ENV__LAN,
		  "LAN" },
		{ EL_TYPE__PAL__ENV__HOT_PLUG,
		  "Hot Plug" },
		{ 0, NULL }
	};
	int i;

	for (i = 0; ev_packets[i].type != 0; i++) {
		env = lf_subpackets->env[ev7_lf_env_index(ev_packets[i].type)];
		if (!env)
			continue;

		printk("%s**%s event (cabinet %d, drawer %d)\n",
		       err_print_prefix,
		       ev_packets[i].name,
		       env->cabinet,
		       env->drawer);
		printk("%s   Module Type: 0x%x - Unit ID 0x%x - "
		       "Condition 0x%x\n",
		       err_print_prefix,
		       env->module_type,
		       env->unit_id,
		       env->condition);
	}
#endif /* CONFIG_VERBOSE_MCHECK */
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
          int _len_lf_subpackets0 = 1;
          struct ev7_lf_subpackets * lf_subpackets = (struct ev7_lf_subpackets *) malloc(_len_lf_subpackets0*sizeof(struct ev7_lf_subpackets));
          for(int _i0 = 0; _i0 < _len_lf_subpackets0; _i0++) {
            lf_subpackets[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          marvel_print_680_frame(lf_subpackets);
          free(lf_subpackets);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_lf_subpackets0 = 100;
          struct ev7_lf_subpackets * lf_subpackets = (struct ev7_lf_subpackets *) malloc(_len_lf_subpackets0*sizeof(struct ev7_lf_subpackets));
          for(int _i0 = 0; _i0 < _len_lf_subpackets0; _i0++) {
            lf_subpackets[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          marvel_print_680_frame(lf_subpackets);
          free(lf_subpackets);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
