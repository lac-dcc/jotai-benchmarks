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
typedef  int /*<<< orphan*/  u64 ;
struct TYPE_2__ {int /*<<< orphan*/  partition_handle; } ;
struct visorchannel {TYPE_1__ chan_hdr; } ;

/* Variables and functions */

int visorchannel_set_clientpartition(struct visorchannel *channel,
				     u64 partition_handle)
{
	channel->chan_hdr.partition_handle = partition_handle;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int partition_handle = 100;
        
          int _len_channel0 = 1;
          struct visorchannel * channel = (struct visorchannel *) malloc(_len_channel0*sizeof(struct visorchannel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].chan_hdr.partition_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = visorchannel_set_clientpartition(channel,partition_handle);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int partition_handle = 255;
        
          int _len_channel0 = 65025;
          struct visorchannel * channel = (struct visorchannel *) malloc(_len_channel0*sizeof(struct visorchannel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].chan_hdr.partition_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = visorchannel_set_clientpartition(channel,partition_handle);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int partition_handle = 10;
        
          int _len_channel0 = 100;
          struct visorchannel * channel = (struct visorchannel *) malloc(_len_channel0*sizeof(struct visorchannel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].chan_hdr.partition_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = visorchannel_set_clientpartition(channel,partition_handle);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int partition_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_channel0 = 1;
          struct visorchannel * channel = (struct visorchannel *) malloc(_len_channel0*sizeof(struct visorchannel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].chan_hdr.partition_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = visorchannel_set_clientpartition(channel,partition_handle);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
