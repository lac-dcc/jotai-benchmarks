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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int UINT8 ;
typedef  int UINT32 ;
struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {int count; } ;
typedef  TYPE_1__ SHARED_DATA_REF ;
typedef  TYPE_2__ EXTENT_REF_V0 ;
typedef  TYPE_3__ EXTENT_DATA_REF ;

/* Variables and functions */
#define  TYPE_EXTENT_DATA_REF 132 
#define  TYPE_EXTENT_REF_V0 131 
#define  TYPE_SHARED_BLOCK_REF 130 
#define  TYPE_SHARED_DATA_REF 129 
#define  TYPE_TREE_BLOCK_REF 128 

__attribute__((used)) __inline static UINT32 get_extent_data_refcount(UINT8 type, void* data) {
    switch (type) {
        case TYPE_TREE_BLOCK_REF:
            return 1;

        case TYPE_EXTENT_DATA_REF:
        {
            EXTENT_DATA_REF* edr = (EXTENT_DATA_REF*)data;
            return edr->count;
        }

        case TYPE_EXTENT_REF_V0:
        {
            EXTENT_REF_V0* erv0 = (EXTENT_REF_V0*)data;
            return erv0->count;
        }

        case TYPE_SHARED_BLOCK_REF:
            return 1;

        case TYPE_SHARED_DATA_REF:
        {
            SHARED_DATA_REF* sdr = (SHARED_DATA_REF*)data;
            return sdr->count;
        }

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
          void * data;
          int benchRet = get_extent_data_refcount(type,data);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          void * data;
          int benchRet = get_extent_data_refcount(type,data);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          void * data;
          int benchRet = get_extent_data_refcount(type,data);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
