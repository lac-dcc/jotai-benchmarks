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
       2            empty\n\
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
struct netxbig_led_timer {unsigned long delay_on; unsigned long delay_off; int mode; } ;
typedef  enum netxbig_led_mode { ____Placeholder_netxbig_led_mode } netxbig_led_mode ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int netxbig_led_get_timer_mode(enum netxbig_led_mode *mode,
				      unsigned long delay_on,
				      unsigned long delay_off,
				      struct netxbig_led_timer *timer,
				      int num_timer)
{
	int i;

	for (i = 0; i < num_timer; i++) {
		if (timer[i].delay_on == delay_on &&
		    timer[i].delay_off == delay_off) {
			*mode = timer[i].mode;
			return 0;
		}
	}
	return -EINVAL;
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
          unsigned long delay_on = 255;
        
          unsigned long delay_off = 255;
        
          int num_timer = 255;
        
          int _len_mode0 = 65025;
          enum netxbig_led_mode * mode = (enum netxbig_led_mode *) malloc(_len_mode0*sizeof(enum netxbig_led_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
        
          int _len_timer0 = 65025;
          struct netxbig_led_timer * timer = (struct netxbig_led_timer *) malloc(_len_timer0*sizeof(struct netxbig_led_timer));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
              timer[_i0].delay_on = ((-2 * (next_i()%2)) + 1) * next_i();
          timer[_i0].delay_off = ((-2 * (next_i()%2)) + 1) * next_i();
          timer[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = netxbig_led_get_timer_mode(mode,delay_on,delay_off,timer,num_timer);
          printf("%d\n", benchRet); 
          free(mode);
          free(timer);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long delay_on = 10;
        
          unsigned long delay_off = 10;
        
          int num_timer = 10;
        
          int _len_mode0 = 100;
          enum netxbig_led_mode * mode = (enum netxbig_led_mode *) malloc(_len_mode0*sizeof(enum netxbig_led_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
        
          int _len_timer0 = 100;
          struct netxbig_led_timer * timer = (struct netxbig_led_timer *) malloc(_len_timer0*sizeof(struct netxbig_led_timer));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
              timer[_i0].delay_on = ((-2 * (next_i()%2)) + 1) * next_i();
          timer[_i0].delay_off = ((-2 * (next_i()%2)) + 1) * next_i();
          timer[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = netxbig_led_get_timer_mode(mode,delay_on,delay_off,timer,num_timer);
          printf("%d\n", benchRet); 
          free(mode);
          free(timer);
        
        break;
    }
    // empty
    case 2:
    {
          unsigned long delay_on = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long delay_off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int num_timer = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mode0 = 1;
          enum netxbig_led_mode * mode = (enum netxbig_led_mode *) malloc(_len_mode0*sizeof(enum netxbig_led_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
        
          int _len_timer0 = 1;
          struct netxbig_led_timer * timer = (struct netxbig_led_timer *) malloc(_len_timer0*sizeof(struct netxbig_led_timer));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
              timer[_i0].delay_on = ((-2 * (next_i()%2)) + 1) * next_i();
          timer[_i0].delay_off = ((-2 * (next_i()%2)) + 1) * next_i();
          timer[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = netxbig_led_get_timer_mode(mode,delay_on,delay_off,timer,num_timer);
          printf("%d\n", benchRet); 
          free(mode);
          free(timer);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
