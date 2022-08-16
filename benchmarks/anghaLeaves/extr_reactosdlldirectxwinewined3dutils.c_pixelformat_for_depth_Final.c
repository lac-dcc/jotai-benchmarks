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
typedef  enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef  int DWORD ;

/* Variables and functions */
 int WINED3DFMT_B5G5R5X1_UNORM ; 
 int WINED3DFMT_B5G6R5_UNORM ; 
 int WINED3DFMT_B8G8R8X8_UNORM ; 
 int WINED3DFMT_P8_UINT ; 
 int WINED3DFMT_UNKNOWN ; 

enum wined3d_format_id pixelformat_for_depth(DWORD depth)
{
    switch (depth)
    {
        case 8:  return WINED3DFMT_P8_UINT;
        case 15: return WINED3DFMT_B5G5R5X1_UNORM;
        case 16: return WINED3DFMT_B5G6R5_UNORM;
        case 24: return WINED3DFMT_B8G8R8X8_UNORM; /* Robots needs 24bit to be WINED3DFMT_B8G8R8X8_UNORM */
        case 32: return WINED3DFMT_B8G8R8X8_UNORM; /* EVE online and the Fur demo need 32bit AdapterDisplayMode to return WINED3DFMT_B8G8R8X8_UNORM */
        default: return WINED3DFMT_UNKNOWN;
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
          int depth = 100;
          enum wined3d_format_id benchRet = pixelformat_for_depth(depth);
        
        break;
    }
    // big-arr
    case 1:
    {
          int depth = 255;
          enum wined3d_format_id benchRet = pixelformat_for_depth(depth);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int depth = 10;
          enum wined3d_format_id benchRet = pixelformat_for_depth(depth);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
