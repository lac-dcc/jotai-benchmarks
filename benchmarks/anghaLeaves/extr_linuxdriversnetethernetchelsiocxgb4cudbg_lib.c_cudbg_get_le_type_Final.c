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
typedef  scalar_t__ u32 ;
struct cudbg_tcam {scalar_t__ server_start; scalar_t__ filter_start; scalar_t__ clip_start; scalar_t__ routing_start; scalar_t__ tid_hash_base; scalar_t__ max_tid; } ;

/* Variables and functions */
 int LE_ET_HASH_CON ; 
 int LE_ET_INVALID_TID ; 
 int LE_ET_TCAM_CLIP ; 
 int LE_ET_TCAM_CON ; 
 int LE_ET_TCAM_FILTER ; 
 int LE_ET_TCAM_ROUTING ; 
 int LE_ET_TCAM_SERVER ; 
 int LE_ET_UNKNOWN ; 

__attribute__((used)) static int cudbg_get_le_type(u32 tid, struct cudbg_tcam tcam_region)
{
	int type = LE_ET_UNKNOWN;

	if (tid < tcam_region.server_start)
		type = LE_ET_TCAM_CON;
	else if (tid < tcam_region.filter_start)
		type = LE_ET_TCAM_SERVER;
	else if (tid < tcam_region.clip_start)
		type = LE_ET_TCAM_FILTER;
	else if (tid < tcam_region.routing_start)
		type = LE_ET_TCAM_CLIP;
	else if (tid < tcam_region.tid_hash_base)
		type = LE_ET_TCAM_ROUTING;
	else if (tid < tcam_region.max_tid)
		type = LE_ET_HASH_CON;
	else
		type = LE_ET_INVALID_TID;

	return type;
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
          long tid = 100;
          struct cudbg_tcam tcam_region;
        tcam_region.server_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.filter_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.clip_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.routing_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.tid_hash_base = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.max_tid = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = cudbg_get_le_type(tid,tcam_region);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long tid = 255;
          struct cudbg_tcam tcam_region;
        tcam_region.server_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.filter_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.clip_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.routing_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.tid_hash_base = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.max_tid = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = cudbg_get_le_type(tid,tcam_region);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long tid = 10;
          struct cudbg_tcam tcam_region;
        tcam_region.server_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.filter_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.clip_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.routing_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.tid_hash_base = ((-2 * (next_i()%2)) + 1) * next_i();
        tcam_region.max_tid = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = cudbg_get_le_type(tid,tcam_region);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
