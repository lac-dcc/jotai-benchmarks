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
struct smi_settings {int pack_data; int read_setup_time; int read_hold_time; int read_pace_time; int read_strobe_time; int write_setup_time; int write_hold_time; int write_pace_time; int write_strobe_time; int dma_enable; int dma_passthrough_enable; int dma_read_thresh; int dma_write_thresh; int dma_panic_read_thresh; int dma_panic_write_thresh; int /*<<< orphan*/  data_width; } ;
struct bcm2835_smi_instance {struct smi_settings settings; } ;

/* Variables and functions */
 int /*<<< orphan*/  SMI_WIDTH_16BIT ; 

__attribute__((used)) static void smi_get_default_settings(struct bcm2835_smi_instance *inst)
{
	struct smi_settings *settings = &inst->settings;

	settings->data_width = SMI_WIDTH_16BIT;
	settings->pack_data = true;

	settings->read_setup_time = 1;
	settings->read_hold_time = 1;
	settings->read_pace_time = 1;
	settings->read_strobe_time = 3;

	settings->write_setup_time = settings->read_setup_time;
	settings->write_hold_time = settings->read_hold_time;
	settings->write_pace_time = settings->read_pace_time;
	settings->write_strobe_time = settings->read_strobe_time;

	settings->dma_enable = true;
	settings->dma_passthrough_enable = false;
	settings->dma_read_thresh = 0x01;
	settings->dma_write_thresh = 0x3f;
	settings->dma_panic_read_thresh = 0x20;
	settings->dma_panic_write_thresh = 0x20;
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
          int _len_inst0 = 1;
          struct bcm2835_smi_instance * inst = (struct bcm2835_smi_instance *) malloc(_len_inst0*sizeof(struct bcm2835_smi_instance));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].settings.pack_data = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.read_setup_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.read_hold_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.read_pace_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.read_strobe_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.write_setup_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.write_hold_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.write_pace_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.write_strobe_time = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.dma_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.dma_passthrough_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.dma_read_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.dma_write_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.dma_panic_read_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.dma_panic_write_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].settings.data_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smi_get_default_settings(inst);
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
