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
       3            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int queue_length; } ;
struct ua101 {TYPE_1__ playback; } ;

/* Variables and functions */

__attribute__((used)) static inline void add_with_wraparound(struct ua101 *ua,
				       unsigned int *value, unsigned int add)
{
	*value += add;
	if (*value >= ua->playback.queue_length)
		*value -= ua->playback.queue_length;
}

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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int add = 100;
        
          int _len_ua0 = 1;
          struct ua101 * ua = (struct ua101 *) malloc(_len_ua0*sizeof(struct ua101));
          for(int _i0 = 0; _i0 < _len_ua0; _i0++) {
              ua[_i0].playback.queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_value0 = 1;
          unsigned int * value = (unsigned int *) malloc(_len_value0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_with_wraparound(ua,value,add);
          free(ua);
          free(value);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int add = 255;
        
          int _len_ua0 = 65025;
          struct ua101 * ua = (struct ua101 *) malloc(_len_ua0*sizeof(struct ua101));
          for(int _i0 = 0; _i0 < _len_ua0; _i0++) {
              ua[_i0].playback.queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_value0 = 65025;
          unsigned int * value = (unsigned int *) malloc(_len_value0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_with_wraparound(ua,value,add);
          free(ua);
          free(value);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int add = 10;
        
          int _len_ua0 = 100;
          struct ua101 * ua = (struct ua101 *) malloc(_len_ua0*sizeof(struct ua101));
          for(int _i0 = 0; _i0 < _len_ua0; _i0++) {
              ua[_i0].playback.queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_value0 = 100;
          unsigned int * value = (unsigned int *) malloc(_len_value0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_with_wraparound(ua,value,add);
          free(ua);
          free(value);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int add = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ua0 = 1;
          struct ua101 * ua = (struct ua101 *) malloc(_len_ua0*sizeof(struct ua101));
          for(int _i0 = 0; _i0 < _len_ua0; _i0++) {
              ua[_i0].playback.queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_value0 = 1;
          unsigned int * value = (unsigned int *) malloc(_len_value0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_with_wraparound(ua,value,add);
          free(ua);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
