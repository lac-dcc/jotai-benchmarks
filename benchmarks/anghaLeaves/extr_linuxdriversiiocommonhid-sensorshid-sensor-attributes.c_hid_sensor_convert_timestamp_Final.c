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
struct hid_sensor_common {int timestamp_ns_scale; } ;
typedef  int int64_t ;

/* Variables and functions */

int64_t hid_sensor_convert_timestamp(struct hid_sensor_common *st,
				     int64_t raw_value)
{
	return st->timestamp_ns_scale * raw_value;
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
          int raw_value = 100;
          int _len_st0 = 1;
          struct hid_sensor_common * st = (struct hid_sensor_common *) malloc(_len_st0*sizeof(struct hid_sensor_common));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].timestamp_ns_scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hid_sensor_convert_timestamp(st,raw_value);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int raw_value = 10;
          int _len_st0 = 100;
          struct hid_sensor_common * st = (struct hid_sensor_common *) malloc(_len_st0*sizeof(struct hid_sensor_common));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].timestamp_ns_scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hid_sensor_convert_timestamp(st,raw_value);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
