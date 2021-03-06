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
       0            big-arr\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8 ;
typedef  scalar_t__ uint32 ;
struct TYPE_4__ {int /*<<< orphan*/  packets; int /*<<< orphan*/  bytes; } ;
typedef  TYPE_1__ c_p_data ;
struct TYPE_5__ {int key_len; } ;
typedef  TYPE_2__ TME_DATA ;
typedef  int /*<<< orphan*/  MEM_TYPE ;

/* Variables and functions */
 scalar_t__ TME_SUCCESS ; 

uint32 count_packets(uint8 *block, uint32 pkt_size, TME_DATA *data, MEM_TYPE *mem_ex, uint8 *mem_data)
{
		
	c_p_data *counters=(c_p_data*)(block+data->key_len*4);

	counters->bytes+=pkt_size;
	counters->packets++;
	
	return TME_SUCCESS;

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

    // big-arr
    case 0:
    {
          long pkt_size = 255;
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].key_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mem_ex0 = 65025;
          int * mem_ex = (int *) malloc(_len_mem_ex0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mem_ex0; _i0++) {
            mem_ex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mem_data0 = 65025;
          int * mem_data = (int *) malloc(_len_mem_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mem_data0; _i0++) {
            mem_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = count_packets(block,pkt_size,data,mem_ex,mem_data);
          printf("%ld\n", benchRet); 
          free(block);
          free(data);
          free(mem_ex);
          free(mem_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
