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
typedef  scalar_t__ zend_uchar ;
typedef  int uint32_t ;

/* Variables and functions */
 scalar_t__ IS_CONST ; 
 scalar_t__ IS_UNUSED ; 
 int MAY_BE_ANY ; 
 int MAY_BE_ARRAY ; 
 int MAY_BE_ARRAY_KEY_ANY ; 
 int MAY_BE_ARRAY_KEY_LONG ; 
 int MAY_BE_ARRAY_KEY_STRING ; 
 int MAY_BE_ARRAY_OF_NULL ; 
 int MAY_BE_ARRAY_SHIFT ; 
 int MAY_BE_DOUBLE ; 
 int MAY_BE_FALSE ; 
 int MAY_BE_LONG ; 
 int MAY_BE_NULL ; 
 int MAY_BE_OBJECT ; 
 int MAY_BE_RC1 ; 
 int MAY_BE_RCN ; 
 int MAY_BE_RESOURCE ; 
 int MAY_BE_STRING ; 
 int MAY_BE_TRUE ; 
 int MAY_BE_UNDEF ; 

__attribute__((used)) static uint32_t assign_dim_result_type(
		uint32_t arr_type, uint32_t dim_type, uint32_t value_type, zend_uchar dim_op_type) {
	uint32_t tmp = arr_type & ~(MAY_BE_RC1|MAY_BE_RCN);

	if (arr_type & (MAY_BE_UNDEF|MAY_BE_NULL|MAY_BE_FALSE)) {
		tmp &= ~(MAY_BE_UNDEF|MAY_BE_NULL|MAY_BE_FALSE);
		tmp |= MAY_BE_ARRAY|MAY_BE_RC1;
	}
	if (tmp & (MAY_BE_ARRAY|MAY_BE_STRING)) {
		tmp |= MAY_BE_RC1;
	}
	if (tmp & (MAY_BE_OBJECT|MAY_BE_RESOURCE)) {
		tmp |= MAY_BE_RC1 | MAY_BE_RCN;
	}
	if (tmp & MAY_BE_ARRAY) {
		if (value_type & MAY_BE_UNDEF) {
			tmp |= MAY_BE_ARRAY_OF_NULL;
		}
		if (dim_op_type == IS_UNUSED) {
			tmp |= MAY_BE_ARRAY_KEY_LONG;
		} else {
			if (dim_type & (MAY_BE_LONG|MAY_BE_FALSE|MAY_BE_TRUE|MAY_BE_RESOURCE|MAY_BE_DOUBLE)) {
				tmp |= MAY_BE_ARRAY_KEY_LONG;
			}
			if (dim_type & MAY_BE_STRING) {
				tmp |= MAY_BE_ARRAY_KEY_STRING;
				if (dim_op_type != IS_CONST) {
					// FIXME: numeric string
					tmp |= MAY_BE_ARRAY_KEY_LONG;
				}
			}
			if (dim_type & (MAY_BE_UNDEF|MAY_BE_NULL)) {
				tmp |= MAY_BE_ARRAY_KEY_STRING;
			}
		}
		/* Only add value type if we have a key type. It might be that the key type is illegal
		 * for arrays. */
		if (tmp & MAY_BE_ARRAY_KEY_ANY) {
			tmp |= (value_type & MAY_BE_ANY) << MAY_BE_ARRAY_SHIFT;
		}
	}
	return tmp;
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
          int arr_type = 100;
          int dim_type = 100;
          int value_type = 100;
          long dim_op_type = 100;
          int benchRet = assign_dim_result_type(arr_type,dim_type,value_type,dim_op_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int arr_type = 255;
          int dim_type = 255;
          int value_type = 255;
          long dim_op_type = 255;
          int benchRet = assign_dim_result_type(arr_type,dim_type,value_type,dim_op_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int arr_type = 10;
          int dim_type = 10;
          int value_type = 10;
          long dim_op_type = 10;
          int benchRet = assign_dim_result_type(arr_type,dim_type,value_type,dim_op_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
