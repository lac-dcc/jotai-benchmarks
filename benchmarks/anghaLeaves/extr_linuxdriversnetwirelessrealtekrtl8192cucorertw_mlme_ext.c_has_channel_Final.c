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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_3__ {int ChannelNum; } ;
typedef  TYPE_1__ RT_CHANNEL_INFO ;

/* Variables and functions */

__attribute__((used)) static int has_channel(RT_CHANNEL_INFO *channel_set,
					   u8 chanset_size,
					   u8 chan) {
	int i;

	for (i = 0; i < chanset_size; i++) {
		if (channel_set[i].ChannelNum == chan) {
			return 1;
		}
	}

	return 0;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 3328
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1285
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 1285
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 1285
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1541
          // ------------------------------- 

          int chanset_size = 255;
        
          int chan = 255;
        
          int _len_channel_set0 = 65025;
          struct TYPE_3__ * channel_set = (struct TYPE_3__ *) malloc(_len_channel_set0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_channel_set0; _i0++) {
              channel_set[_i0].ChannelNum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = has_channel(channel_set,chanset_size,chan);
          printf("%d\n", benchRet); 
          free(channel_set);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 60
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 60
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 60
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 71
          // ------------------------------- 

          int chanset_size = 10;
        
          int chan = 10;
        
          int _len_channel_set0 = 100;
          struct TYPE_3__ * channel_set = (struct TYPE_3__ *) malloc(_len_channel_set0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_channel_set0; _i0++) {
              channel_set[_i0].ChannelNum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = has_channel(channel_set,chanset_size,chan);
          printf("%d\n", benchRet); 
          free(channel_set);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int chanset_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int chan = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_channel_set0 = 1;
          struct TYPE_3__ * channel_set = (struct TYPE_3__ *) malloc(_len_channel_set0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_channel_set0; _i0++) {
              channel_set[_i0].ChannelNum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = has_channel(channel_set,chanset_size,chan);
          printf("%d\n", benchRet); 
          free(channel_set);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
