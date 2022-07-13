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
typedef  enum pnfs_status { ____Placeholder_pnfs_status } pnfs_status ;

/* Variables and functions */
#define  PNFSERR_INVALID_DS_INDEX 140 
#define  PNFSERR_INVALID_FH_LIST 139 
#define  PNFSERR_IO 138 
#define  PNFSERR_LAYOUT_CHANGED 137 
#define  PNFSERR_LAYOUT_RECALLED 136 
#define  PNFSERR_NOT_CONNECTED 135 
#define  PNFSERR_NOT_SUPPORTED 134 
#define  PNFSERR_NO_DEVICE 133 
#define  PNFSERR_NO_LAYOUT 132 
#define  PNFSERR_RESOURCES 131 
#define  PNFS_PENDING 130 
#define  PNFS_READ_EOF 129 
#define  PNFS_SUCCESS 128 

const char* pnfs_error_string(enum pnfs_status status)
{
    switch (status) {
    case PNFS_SUCCESS:          return "PNFS_SUCCESS";
    case PNFS_PENDING:          return "PNFS_PENDING";
    case PNFS_READ_EOF:         return "PNFS_READ_EOF";
    case PNFSERR_NOT_SUPPORTED: return "PNFSERR_NOT_SUPPORTED";
    case PNFSERR_NOT_CONNECTED: return "PNFSERR_NOT_CONNECTED";
    case PNFSERR_IO:            return "PNFSERR_IO";
    case PNFSERR_NO_DEVICE:     return "PNFSERR_NO_DEVICE";
    case PNFSERR_NO_LAYOUT:     return "PNFSERR_NO_LAYOUT";
    case PNFSERR_INVALID_FH_LIST: return "PNFSERR_INVALID_FH_LIST";
    case PNFSERR_INVALID_DS_INDEX: return "PNFSERR_INVALID_DS_INDEX";
    case PNFSERR_RESOURCES:     return "PNFSERR_RESOURCES";
    case PNFSERR_LAYOUT_RECALLED: return "PNFSERR_LAYOUT_RECALLED";
    case PNFSERR_LAYOUT_CHANGED: return "PNFSERR_LAYOUT_CHANGED";
    default:                    return "Invalid pnfs status";
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
          enum pnfs_status status = 0;
          const char * benchRet = pnfs_error_string(status);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum pnfs_status status = 0;
          const char * benchRet = pnfs_error_string(status);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum pnfs_status status = 0;
          const char * benchRet = pnfs_error_string(status);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
