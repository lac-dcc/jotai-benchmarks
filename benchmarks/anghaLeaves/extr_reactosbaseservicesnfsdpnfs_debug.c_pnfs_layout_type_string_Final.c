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

/* Type definitions */
typedef  enum pnfs_layout_type { ____Placeholder_pnfs_layout_type } pnfs_layout_type ;

/* Variables and functions */
#define  PNFS_LAYOUTTYPE_BLOCK 130 
#define  PNFS_LAYOUTTYPE_FILE 129 
#define  PNFS_LAYOUTTYPE_OBJECT 128 

const char* pnfs_layout_type_string(enum pnfs_layout_type type)
{
    switch (type) {
    case PNFS_LAYOUTTYPE_FILE:  return "PNFS_LAYOUTTYPE_FILE";
    case PNFS_LAYOUTTYPE_OBJECT: return "PNFS_LAYOUTTYPE_OBJECT";
    case PNFS_LAYOUTTYPE_BLOCK: return "PNFS_LAYOUTTYPE_BLOCK";
    default:                    return "Invalid layout type";
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
          enum pnfs_layout_type type = 0;
          const char * benchRet = pnfs_layout_type_string(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum pnfs_layout_type type = 0;
          const char * benchRet = pnfs_layout_type_string(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum pnfs_layout_type type = 0;
          const char * benchRet = pnfs_layout_type_string(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}