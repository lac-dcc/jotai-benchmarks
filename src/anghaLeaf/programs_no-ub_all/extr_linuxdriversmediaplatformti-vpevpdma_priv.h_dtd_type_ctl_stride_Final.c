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

/* Type definitions */
typedef  int u32 ;

/* Variables and functions */
 int DTD_1D_SHFT ; 
 int DTD_DATA_TYPE_SHFT ; 
 int DTD_EVEN_LINE_SKIP_SHFT ; 
 int DTD_FIELD_SHFT ; 
 int DTD_NOTIFY_SHFT ; 
 int DTD_ODD_LINE_SKIP_SHFT ; 

__attribute__((used)) static inline u32 dtd_type_ctl_stride(int type, bool notify, int field,
			bool one_d, bool even_line_skip, bool odd_line_skip,
			int line_stride)
{
	return (type << DTD_DATA_TYPE_SHFT) | (notify << DTD_NOTIFY_SHFT) |
		(field << DTD_FIELD_SHFT) | (one_d << DTD_1D_SHFT) |
		(even_line_skip << DTD_EVEN_LINE_SKIP_SHFT) |
		(odd_line_skip << DTD_ODD_LINE_SKIP_SHFT) |
		line_stride;
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
          int type = 255;
          int notify = 255;
          int field = 255;
          int one_d = 255;
          int even_line_skip = 255;
          int odd_line_skip = 255;
          int line_stride = 255;
          int benchRet = dtd_type_ctl_stride(type,notify,field,one_d,even_line_skip,odd_line_skip,line_stride);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
