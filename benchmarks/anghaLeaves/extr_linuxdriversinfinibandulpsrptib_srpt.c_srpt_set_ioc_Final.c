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
       1            big-arr-10x\n\
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
typedef  int u32 ;
typedef  size_t u16 ;

/* Variables and functions */

__attribute__((used)) static void srpt_set_ioc(u8 *c_list, u32 slot, u8 value)
{
	u16 id;
	u8 tmp;

	id = (slot - 1) / 2;
	if (slot & 0x1) {
		tmp = c_list[id] & 0xf;
		c_list[id] = (value << 4) | tmp;
	} else {
		tmp = c_list[id] & 0xf0;
		c_list[id] = (value & 0xf) | tmp;
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

    // big-arr
    case 0:
    {
          int slot = 255;
          int value = 255;
          int _len_c_list0 = 65025;
          int * c_list = (int *) malloc(_len_c_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c_list0; _i0++) {
            c_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          srpt_set_ioc(c_list,slot,value);
          free(c_list);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int slot = 10;
          int value = 10;
          int _len_c_list0 = 100;
          int * c_list = (int *) malloc(_len_c_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c_list0; _i0++) {
            c_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          srpt_set_ioc(c_list,slot,value);
          free(c_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
