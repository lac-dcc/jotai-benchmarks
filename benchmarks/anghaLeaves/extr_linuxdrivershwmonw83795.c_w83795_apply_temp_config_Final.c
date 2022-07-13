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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u8 ;
struct w83795_data {int has_in; int temp_mode; int has_temp; } ;

/* Variables and functions */

__attribute__((used)) static void w83795_apply_temp_config(struct w83795_data *data, u8 config,
				     int temp_chan, int in_chan)
{
	/* config is a 2-bit value */
	switch (config) {
	case 0x2: /* Voltage monitoring */
		data->has_in |= 1 << in_chan;
		break;
	case 0x1: /* Thermal diode */
		if (temp_chan >= 4)
			break;
		data->temp_mode |= 1 << temp_chan;
		/* fall through */
	case 0x3: /* Thermistor */
		data->has_temp |= 1 << temp_chan;
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
          int config = 100;
          int temp_chan = 100;
          int in_chan = 100;
          int _len_data0 = 1;
          struct w83795_data * data = (struct w83795_data *) malloc(_len_data0*sizeof(struct w83795_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].has_in = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].has_temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          w83795_apply_temp_config(data,config,temp_chan,in_chan);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int config = 255;
          int temp_chan = 255;
          int in_chan = 255;
          int _len_data0 = 65025;
          struct w83795_data * data = (struct w83795_data *) malloc(_len_data0*sizeof(struct w83795_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].has_in = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].has_temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          w83795_apply_temp_config(data,config,temp_chan,in_chan);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int config = 10;
          int temp_chan = 10;
          int in_chan = 10;
          int _len_data0 = 100;
          struct w83795_data * data = (struct w83795_data *) malloc(_len_data0*sizeof(struct w83795_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].has_in = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].has_temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          w83795_apply_temp_config(data,config,temp_chan,in_chan);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
