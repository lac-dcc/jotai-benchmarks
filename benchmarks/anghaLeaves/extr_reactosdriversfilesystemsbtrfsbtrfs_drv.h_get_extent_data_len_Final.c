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
typedef  int UINT8 ;
typedef  int UINT16 ;
typedef  int /*<<< orphan*/  TREE_BLOCK_REF ;
typedef  int /*<<< orphan*/  SHARED_DATA_REF ;
typedef  int /*<<< orphan*/  SHARED_BLOCK_REF ;
typedef  int /*<<< orphan*/  EXTENT_REF_V0 ;
typedef  int /*<<< orphan*/  EXTENT_DATA_REF ;

/* Variables and functions */
#define  TYPE_EXTENT_DATA_REF 132 
#define  TYPE_EXTENT_REF_V0 131 
#define  TYPE_SHARED_BLOCK_REF 130 
#define  TYPE_SHARED_DATA_REF 129 
#define  TYPE_TREE_BLOCK_REF 128 

__attribute__((used)) __inline static UINT16 get_extent_data_len(UINT8 type) {
    switch (type) {
        case TYPE_TREE_BLOCK_REF:
            return sizeof(TREE_BLOCK_REF);

        case TYPE_EXTENT_DATA_REF:
            return sizeof(EXTENT_DATA_REF);

        case TYPE_EXTENT_REF_V0:
            return sizeof(EXTENT_REF_V0);

        case TYPE_SHARED_BLOCK_REF:
            return sizeof(SHARED_BLOCK_REF);

        case TYPE_SHARED_DATA_REF:
            return sizeof(SHARED_DATA_REF);

        default:
            return 0;
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
          int type = 100;
          int benchRet = get_extent_data_len(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int benchRet = get_extent_data_len(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int benchRet = get_extent_data_len(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
