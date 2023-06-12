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
       0            big-arr\n\
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
struct op_system_config {int /*<<< orphan*/  enable_user; int /*<<< orphan*/  enable_kernel; int /*<<< orphan*/  enable_pal; } ;
struct op_register_config {int mux_select; int proc_mode; int freq; int reset_values; int need_reset; } ;
struct op_counter_config {unsigned long event; unsigned long count; int /*<<< orphan*/  enabled; } ;

/* Variables and functions */

__attribute__((used)) static void
common_reg_setup(struct op_register_config *reg,
		 struct op_counter_config *ctr,
		 struct op_system_config *sys,
		 int cbox1_ofs, int cbox2_ofs)
{
	int i, ctl, reset, need_reset;

	/* Select desired events.  The event numbers are selected such
	   that they map directly into the event selection fields:

		PCSEL0:	0, 1
		PCSEL1:	24-39
		 CBOX1: 40-47
		PCSEL2: 48-63
		 CBOX2: 64-71

	   There are two special cases, in that CYCLES can be measured
	   on PCSEL[02], and SCACHE_WRITE can be measured on CBOX[12].
	   These event numbers are canonicalizes to their first appearance.  */

	ctl = 0;
	for (i = 0; i < 3; ++i) {
		unsigned long event = ctr[i].event;
		if (!ctr[i].enabled)
			continue;

		/* Remap the duplicate events, as described above.  */
		if (i == 2) {
			if (event == 0)
				event = 12+48;
			else if (event == 2+41)
				event = 4+65;
		}

		/* Convert the event numbers onto mux_select bit mask.  */
		if (event < 2)
			ctl |= event << 31;
		else if (event < 24)
			/* error */;
		else if (event < 40)
			ctl |= (event - 24) << 4;
		else if (event < 48)
			ctl |= (event - 40) << cbox1_ofs | 15 << 4;
		else if (event < 64)
			ctl |= event - 48;
		else if (event < 72)
			ctl |= (event - 64) << cbox2_ofs | 15;
	}
	reg->mux_select = ctl;

	/* Select processor mode.  */
	/* ??? Need to come up with some mechanism to trace only selected
	   processes.  For now select from pal, kernel and user mode.  */
	ctl = 0;
	ctl |= !sys->enable_pal << 9;
	ctl |= !sys->enable_kernel << 8;
	ctl |= !sys->enable_user << 30;
	reg->proc_mode = ctl;

	/* Select interrupt frequencies.  Take the interrupt count selected
	   by the user, and map it onto one of the possible counter widths.
	   If the user value is in between, compute a value to which the
	   counter is reset at each interrupt.  */

	ctl = reset = need_reset = 0;
	for (i = 0; i < 3; ++i) {
		unsigned long max, hilo, count = ctr[i].count;
		if (!ctr[i].enabled)
			continue;

		if (count <= 256)
			count = 256, hilo = 3, max = 256;
		else {
			max = (i == 2 ? 16384 : 65536);
			hilo = 2;
			if (count > max)
				count = max;
		}
		ctr[i].count = count;

		ctl |= hilo << (8 - i*2);
		reset |= (max - count) << (48 - 16*i);
		if (count != max)
			need_reset |= 1 << i;
	}
	reg->freq = ctl;
	reg->reset_values = reset;
	reg->need_reset = need_reset;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 169
          // dynamic_instructions_O0 : 383
          // ------------------------------- 
          // static_instructions_O1 : 110
          // dynamic_instructions_O1 : 222
          // ------------------------------- 
          // static_instructions_O2 : 153
          // dynamic_instructions_O2 : 153
          // ------------------------------- 
          // static_instructions_O3 : 153
          // dynamic_instructions_O3 : 153
          // ------------------------------- 
          // static_instructions_Ofast : 153
          // dynamic_instructions_Ofast : 153
          // ------------------------------- 
          // static_instructions_Os : 111
          // dynamic_instructions_Os : 225
          // ------------------------------- 
          // static_instructions_Oz : 116
          // dynamic_instructions_Oz : 240
          // ------------------------------- 

          int cbox1_ofs = 255;
        
          int cbox2_ofs = 255;
        
          int _len_reg0 = 65025;
          struct op_register_config * reg = (struct op_register_config *) malloc(_len_reg0*sizeof(struct op_register_config));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
              reg[_i0].mux_select = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].proc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].freq = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].reset_values = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ctr0 = 65025;
          struct op_counter_config * ctr = (struct op_counter_config *) malloc(_len_ctr0*sizeof(struct op_counter_config));
          for(int _i0 = 0; _i0 < _len_ctr0; _i0++) {
              ctr[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
          ctr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          ctr[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sys0 = 65025;
          struct op_system_config * sys = (struct op_system_config *) malloc(_len_sys0*sizeof(struct op_system_config));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
              sys[_i0].enable_user = ((-2 * (next_i()%2)) + 1) * next_i();
          sys[_i0].enable_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
          sys[_i0].enable_pal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          common_reg_setup(reg,ctr,sys,cbox1_ofs,cbox2_ofs);
          free(reg);
          free(ctr);
          free(sys);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 169
          // dynamic_instructions_O0 : 383
          // ------------------------------- 
          // static_instructions_O1 : 110
          // dynamic_instructions_O1 : 222
          // ------------------------------- 
          // static_instructions_O2 : 153
          // dynamic_instructions_O2 : 153
          // ------------------------------- 
          // static_instructions_O3 : 153
          // dynamic_instructions_O3 : 153
          // ------------------------------- 
          // static_instructions_Ofast : 153
          // dynamic_instructions_Ofast : 153
          // ------------------------------- 
          // static_instructions_Os : 111
          // dynamic_instructions_Os : 225
          // ------------------------------- 
          // static_instructions_Oz : 116
          // dynamic_instructions_Oz : 240
          // ------------------------------- 

          int cbox1_ofs = 10;
        
          int cbox2_ofs = 10;
        
          int _len_reg0 = 100;
          struct op_register_config * reg = (struct op_register_config *) malloc(_len_reg0*sizeof(struct op_register_config));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
              reg[_i0].mux_select = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].proc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].freq = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].reset_values = ((-2 * (next_i()%2)) + 1) * next_i();
          reg[_i0].need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ctr0 = 100;
          struct op_counter_config * ctr = (struct op_counter_config *) malloc(_len_ctr0*sizeof(struct op_counter_config));
          for(int _i0 = 0; _i0 < _len_ctr0; _i0++) {
              ctr[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
          ctr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          ctr[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sys0 = 100;
          struct op_system_config * sys = (struct op_system_config *) malloc(_len_sys0*sizeof(struct op_system_config));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
              sys[_i0].enable_user = ((-2 * (next_i()%2)) + 1) * next_i();
          sys[_i0].enable_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
          sys[_i0].enable_pal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          common_reg_setup(reg,ctr,sys,cbox1_ofs,cbox2_ofs);
          free(reg);
          free(ctr);
          free(sys);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
