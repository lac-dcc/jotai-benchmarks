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
typedef  int /*<<< orphan*/  user64_namespace_handler_info_ext ;
typedef  int /*<<< orphan*/  user64_namespace_handler_info ;
typedef  int /*<<< orphan*/  user64_namespace_handler_data ;
typedef  int /*<<< orphan*/  user32_namespace_handler_info_ext ;
typedef  int /*<<< orphan*/  user32_namespace_handler_info ;
typedef  int /*<<< orphan*/  user32_namespace_handler_data ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int validate_namespace_args (int is64bit, int size) {

	if (is64bit) {
		/* Must be one of these */
		if (size == sizeof(user64_namespace_handler_info)) {
			goto sizeok;
		}
		if (size == sizeof(user64_namespace_handler_info_ext)) {
			goto sizeok;
		}
		if (size == sizeof(user64_namespace_handler_data)) {
			goto sizeok;
		}
		return EINVAL;
	}
	else {
		/* 32 bit -- must be one of these */
		if (size == sizeof(user32_namespace_handler_info)) {
			goto sizeok;
		}
		if (size == sizeof(user32_namespace_handler_info_ext)) {
			goto sizeok;
		}
		if (size == sizeof(user32_namespace_handler_data)) {
			goto sizeok;
		}
		return EINVAL;
	}

sizeok:

	return 0;

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
          int is64bit = 100;
          int size = 100;
          int benchRet = validate_namespace_args(is64bit,size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int is64bit = 255;
          int size = 255;
          int benchRet = validate_namespace_args(is64bit,size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is64bit = 10;
          int size = 10;
          int benchRet = validate_namespace_args(is64bit,size);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
