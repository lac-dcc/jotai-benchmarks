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
struct edt_reg_addr {void* reg_offset; void* reg_gain; void* reg_threshold; int /*<<< orphan*/  reg_num_y; int /*<<< orphan*/  reg_num_x; int /*<<< orphan*/  reg_report_rate; } ;
struct edt_ft5x06_ts_data {int version; struct edt_reg_addr reg_addr; } ;

/* Variables and functions */
#define  EDT_M06 131 
#define  EDT_M09 130 
#define  EDT_M12 129 
#define  GENERIC_FT 128 
 void* M09_REGISTER_GAIN ; 
 int /*<<< orphan*/  M09_REGISTER_NUM_X ; 
 int /*<<< orphan*/  M09_REGISTER_NUM_Y ; 
 void* M09_REGISTER_OFFSET ; 
 void* M09_REGISTER_THRESHOLD ; 
 int /*<<< orphan*/  NO_REGISTER ; 
 void* WORK_REGISTER_GAIN ; 
 int /*<<< orphan*/  WORK_REGISTER_NUM_X ; 
 int /*<<< orphan*/  WORK_REGISTER_NUM_Y ; 
 void* WORK_REGISTER_OFFSET ; 
 int /*<<< orphan*/  WORK_REGISTER_REPORT_RATE ; 
 void* WORK_REGISTER_THRESHOLD ; 

__attribute__((used)) static void
edt_ft5x06_ts_set_regs(struct edt_ft5x06_ts_data *tsdata)
{
	struct edt_reg_addr *reg_addr = &tsdata->reg_addr;

	switch (tsdata->version) {
	case EDT_M06:
		reg_addr->reg_threshold = WORK_REGISTER_THRESHOLD;
		reg_addr->reg_report_rate = WORK_REGISTER_REPORT_RATE;
		reg_addr->reg_gain = WORK_REGISTER_GAIN;
		reg_addr->reg_offset = WORK_REGISTER_OFFSET;
		reg_addr->reg_num_x = WORK_REGISTER_NUM_X;
		reg_addr->reg_num_y = WORK_REGISTER_NUM_Y;
		break;

	case EDT_M09:
	case EDT_M12:
		reg_addr->reg_threshold = M09_REGISTER_THRESHOLD;
		reg_addr->reg_report_rate = NO_REGISTER;
		reg_addr->reg_gain = M09_REGISTER_GAIN;
		reg_addr->reg_offset = M09_REGISTER_OFFSET;
		reg_addr->reg_num_x = M09_REGISTER_NUM_X;
		reg_addr->reg_num_y = M09_REGISTER_NUM_Y;
		break;

	case GENERIC_FT:
		/* this is a guesswork */
		reg_addr->reg_threshold = M09_REGISTER_THRESHOLD;
		reg_addr->reg_gain = M09_REGISTER_GAIN;
		reg_addr->reg_offset = M09_REGISTER_OFFSET;
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
          int _len_tsdata0 = 1;
          struct edt_ft5x06_ts_data * tsdata = (struct edt_ft5x06_ts_data *) malloc(_len_tsdata0*sizeof(struct edt_ft5x06_ts_data));
          for(int _i0 = 0; _i0 < _len_tsdata0; _i0++) {
            tsdata[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        tsdata[_i0].reg_addr.reg_num_y = ((-2 * (next_i()%2)) + 1) * next_i();
        tsdata[_i0].reg_addr.reg_num_x = ((-2 * (next_i()%2)) + 1) * next_i();
        tsdata[_i0].reg_addr.reg_report_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          edt_ft5x06_ts_set_regs(tsdata);
          free(tsdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
