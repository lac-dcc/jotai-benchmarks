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
typedef  enum source_format_class { ____Placeholder_source_format_class } source_format_class ;

/* Variables and functions */
 int dm_420_10 ; 
 int dm_420_8 ; 
 int dm_444_16 ; 
 int dm_444_32 ; 
 int dm_444_64 ; 

__attribute__((used)) static unsigned int get_bytes_per_element(enum source_format_class source_format, bool is_chroma)
{
	unsigned int ret_val = 0;

	if (source_format == dm_444_16) {
		if (!is_chroma)
			ret_val = 2;
	} else if (source_format == dm_444_32) {
		if (!is_chroma)
			ret_val = 4;
	} else if (source_format == dm_444_64) {
		if (!is_chroma)
			ret_val = 8;
	} else if (source_format == dm_420_8) {
		if (is_chroma)
			ret_val = 2;
		else
			ret_val = 1;
	} else if (source_format == dm_420_10) {
		if (is_chroma)
			ret_val = 4;
		else
			ret_val = 2;
	}
	return ret_val;
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
          enum source_format_class source_format = 0;
          int is_chroma = 100;
          unsigned int benchRet = get_bytes_per_element(source_format,is_chroma);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum source_format_class source_format = 0;
          int is_chroma = 255;
          unsigned int benchRet = get_bytes_per_element(source_format,is_chroma);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum source_format_class source_format = 0;
          int is_chroma = 10;
          unsigned int benchRet = get_bytes_per_element(source_format,is_chroma);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
