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
       1            big-arr-10x\n\
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
struct f54_data {int capabilities; } ;
typedef  enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;

/* Variables and functions */
#define  F54_16BIT_IMAGE 133 
#define  F54_8BIT_IMAGE 132 
 int F54_CAP_IMAGE16 ; 
 int F54_CAP_IMAGE8 ; 
#define  F54_FULL_RAW_CAP 131 
#define  F54_FULL_RAW_CAP_RX_OFFSET_REMOVED 130 
#define  F54_RAW_16BIT_IMAGE 129 
#define  F54_TRUE_BASELINE 128 

__attribute__((used)) static bool is_f54_report_type_valid(struct f54_data *f54,
				     enum rmi_f54_report_type reptype)
{
	switch (reptype) {
	case F54_8BIT_IMAGE:
		return f54->capabilities & F54_CAP_IMAGE8;
	case F54_16BIT_IMAGE:
	case F54_RAW_16BIT_IMAGE:
		return f54->capabilities & F54_CAP_IMAGE16;
	case F54_TRUE_BASELINE:
		return f54->capabilities & F54_CAP_IMAGE16;
	case F54_FULL_RAW_CAP:
	case F54_FULL_RAW_CAP_RX_OFFSET_REMOVED:
		return true;
	default:
		return false;
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

    // int-bounds
    case 0:
    {
          enum rmi_f54_report_type reptype = 0;
          int _len_f540 = 1;
          struct f54_data * f54 = (struct f54_data *) malloc(_len_f540*sizeof(struct f54_data));
          for(int _i0 = 0; _i0 < _len_f540; _i0++) {
            f54[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_f54_report_type_valid(f54,reptype);
          printf("%d\n", benchRet); 
          free(f54);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum rmi_f54_report_type reptype = 0;
          int _len_f540 = 100;
          struct f54_data * f54 = (struct f54_data *) malloc(_len_f540*sizeof(struct f54_data));
          for(int _i0 = 0; _i0 < _len_f540; _i0++) {
            f54[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_f54_report_type_valid(f54,reptype);
          printf("%d\n", benchRet); 
          free(f54);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
