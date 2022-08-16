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
struct gpio_fan_speed {unsigned long rpm; } ;
struct gpio_fan_data {int num_speed; struct gpio_fan_speed* speed; } ;

/* Variables and functions */

__attribute__((used)) static int rpm_to_speed_index(struct gpio_fan_data *fan_data, unsigned long rpm)
{
	struct gpio_fan_speed *speed = fan_data->speed;
	int i;

	for (i = 0; i < fan_data->num_speed; i++)
		if (speed[i].rpm >= rpm)
			return i;

	return fan_data->num_speed - 1;
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
          unsigned long rpm = 100;
          int _len_fan_data0 = 1;
          struct gpio_fan_data * fan_data = (struct gpio_fan_data *) malloc(_len_fan_data0*sizeof(struct gpio_fan_data));
          for(int _i0 = 0; _i0 < _len_fan_data0; _i0++) {
            fan_data[_i0].num_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fan_data__i0__speed0 = 1;
          fan_data[_i0].speed = (struct gpio_fan_speed *) malloc(_len_fan_data__i0__speed0*sizeof(struct gpio_fan_speed));
          for(int _j0 = 0; _j0 < _len_fan_data__i0__speed0; _j0++) {
            fan_data[_i0].speed->rpm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rpm_to_speed_index(fan_data,rpm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fan_data0; _aux++) {
          free(fan_data[_aux].speed);
          }
          free(fan_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
