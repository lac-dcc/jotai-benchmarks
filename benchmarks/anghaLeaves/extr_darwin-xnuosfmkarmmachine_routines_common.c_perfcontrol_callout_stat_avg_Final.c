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
typedef  int uint64_t ;
typedef  size_t perfcontrol_callout_type_t ;
typedef  size_t perfcontrol_callout_stat_t ;

/* Variables and functions */
 int* perfcontrol_callout_count ; 
 int** perfcontrol_callout_stats ; 
 int /*<<< orphan*/  perfcontrol_callout_stats_enabled ; 

uint64_t perfcontrol_callout_stat_avg(perfcontrol_callout_type_t type,
	perfcontrol_callout_stat_t stat)
{
    if (!perfcontrol_callout_stats_enabled)
        return 0;
    return (perfcontrol_callout_stats[type][stat] / perfcontrol_callout_count[type]);
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
          unsigned long type = 100;
          unsigned long stat = 100;
          int benchRet = perfcontrol_callout_stat_avg(type,stat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long type = 255;
          unsigned long stat = 255;
          int benchRet = perfcontrol_callout_stat_avg(type,stat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long type = 10;
          unsigned long stat = 10;
          int benchRet = perfcontrol_callout_stat_avg(type,stat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
