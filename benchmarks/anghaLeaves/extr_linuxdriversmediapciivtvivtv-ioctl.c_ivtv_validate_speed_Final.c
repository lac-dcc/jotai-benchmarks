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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static int ivtv_validate_speed(int cur_speed, int new_speed)
{
	int fact = new_speed < 0 ? -1 : 1;
	int s;

	if (cur_speed == 0)
		cur_speed = 1000;
	if (new_speed < 0)
		new_speed = -new_speed;
	if (cur_speed < 0)
		cur_speed = -cur_speed;

	if (cur_speed <= new_speed) {
		if (new_speed > 1500)
			return fact * 2000;
		if (new_speed > 1000)
			return fact * 1500;
	}
	else {
		if (new_speed >= 2000)
			return fact * 2000;
		if (new_speed >= 1500)
			return fact * 1500;
		if (new_speed >= 1000)
			return fact * 1000;
	}
	if (new_speed == 0)
		return 1000;
	if (new_speed == 1 || new_speed == 1000)
		return fact * new_speed;

	s = new_speed;
	new_speed = 1000 / new_speed;
	if (1000 / cur_speed == new_speed)
		new_speed += (cur_speed < s) ? -1 : 1;
	if (new_speed > 60) return 1000 / (fact * 60);
	return 1000 / (fact * new_speed);
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
          int cur_speed = 100;
          int new_speed = 100;
          int benchRet = ivtv_validate_speed(cur_speed,new_speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cur_speed = 255;
          int new_speed = 255;
          int benchRet = ivtv_validate_speed(cur_speed,new_speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cur_speed = 10;
          int new_speed = 10;
          int benchRet = ivtv_validate_speed(cur_speed,new_speed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
