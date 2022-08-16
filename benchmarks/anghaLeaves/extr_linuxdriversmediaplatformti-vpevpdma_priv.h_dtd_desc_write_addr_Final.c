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
typedef  unsigned int u32 ;

/* Variables and functions */
 unsigned int DTD_DESC_START_MASK ; 
 int DTD_DROP_DATA_SHIFT ; 
 int DTD_WRITE_DESC_SHIFT ; 

__attribute__((used)) static inline u32 dtd_desc_write_addr(unsigned int addr, bool write_desc,
			bool drop_data, bool use_desc)
{
	return (addr & DTD_DESC_START_MASK) |
		(write_desc << DTD_WRITE_DESC_SHIFT) |
		(drop_data << DTD_DROP_DATA_SHIFT) |
		use_desc;
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
          unsigned int addr = 100;
          int write_desc = 100;
          int drop_data = 100;
          int use_desc = 100;
          unsigned int benchRet = dtd_desc_write_addr(addr,write_desc,drop_data,use_desc);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int addr = 255;
          int write_desc = 255;
          int drop_data = 255;
          int use_desc = 255;
          unsigned int benchRet = dtd_desc_write_addr(addr,write_desc,drop_data,use_desc);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int addr = 10;
          int write_desc = 10;
          int drop_data = 10;
          int use_desc = 10;
          unsigned int benchRet = dtd_desc_write_addr(addr,write_desc,drop_data,use_desc);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
