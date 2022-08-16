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
typedef  int u32 ;

/* Variables and functions */
#define  PRCMU_FW_PROJECT_A9420 144 
#define  PRCMU_FW_PROJECT_L8540 143 
#define  PRCMU_FW_PROJECT_L8580 142 
#define  PRCMU_FW_PROJECT_U8400 141 
#define  PRCMU_FW_PROJECT_U8420 140 
#define  PRCMU_FW_PROJECT_U8500 139 
#define  PRCMU_FW_PROJECT_U8500_C1 138 
#define  PRCMU_FW_PROJECT_U8500_C2 137 
#define  PRCMU_FW_PROJECT_U8500_C3 136 
#define  PRCMU_FW_PROJECT_U8500_C4 135 
#define  PRCMU_FW_PROJECT_U8500_MBB 134 
#define  PRCMU_FW_PROJECT_U8500_MBL 133 
#define  PRCMU_FW_PROJECT_U8500_MBL2 132 
#define  PRCMU_FW_PROJECT_U8520 131 
#define  PRCMU_FW_PROJECT_U9500 130 
#define  PRCMU_FW_PROJECT_U9500_MBL 129 
#define  PRCMU_FW_PROJECT_U9540 128 

__attribute__((used)) static char *fw_project_name(u32 project)
{
	switch (project) {
	case PRCMU_FW_PROJECT_U8500:
		return "U8500";
	case PRCMU_FW_PROJECT_U8400:
		return "U8400";
	case PRCMU_FW_PROJECT_U9500:
		return "U9500";
	case PRCMU_FW_PROJECT_U8500_MBB:
		return "U8500 MBB";
	case PRCMU_FW_PROJECT_U8500_C1:
		return "U8500 C1";
	case PRCMU_FW_PROJECT_U8500_C2:
		return "U8500 C2";
	case PRCMU_FW_PROJECT_U8500_C3:
		return "U8500 C3";
	case PRCMU_FW_PROJECT_U8500_C4:
		return "U8500 C4";
	case PRCMU_FW_PROJECT_U9500_MBL:
		return "U9500 MBL";
	case PRCMU_FW_PROJECT_U8500_MBL:
		return "U8500 MBL";
	case PRCMU_FW_PROJECT_U8500_MBL2:
		return "U8500 MBL2";
	case PRCMU_FW_PROJECT_U8520:
		return "U8520 MBL";
	case PRCMU_FW_PROJECT_U8420:
		return "U8420";
	case PRCMU_FW_PROJECT_U9540:
		return "U9540";
	case PRCMU_FW_PROJECT_A9420:
		return "A9420";
	case PRCMU_FW_PROJECT_L8540:
		return "L8540";
	case PRCMU_FW_PROJECT_L8580:
		return "L8580";
	default:
		return "Unknown";
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
          int project = 100;
          char * benchRet = fw_project_name(project);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int project = 255;
          char * benchRet = fw_project_name(project);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int project = 10;
          char * benchRet = fw_project_name(project);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
