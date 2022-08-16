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
       1            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct device_node {int dummy; } ;
struct TYPE_2__ {long model_id; long board_flags; char* model_name; } ;

/* Variables and functions */
 long EINVAL ; 
#define  PMAC_MB_INFO_FLAGS 130 
#define  PMAC_MB_INFO_MODEL 129 
#define  PMAC_MB_INFO_NAME 128 
 TYPE_1__ pmac_mb ; 

__attribute__((used)) static long generic_get_mb_info(struct device_node *node, long param, long value)
{
	switch(param) {
		case PMAC_MB_INFO_MODEL:
			return pmac_mb.model_id;
		case PMAC_MB_INFO_FLAGS:
			return pmac_mb.board_flags;
		case PMAC_MB_INFO_NAME:
			/* hack hack hack... but should work */
			*((const char **)value) = pmac_mb.model_name;
			return 0;
	}
	return -EINVAL;
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
          long param = 100;
          long value = 100;
          int _len_node0 = 1;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = generic_get_mb_info(node,param,value);
          printf("%ld\n", benchRet); 
          free(node);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long param = 10;
          long value = 10;
          int _len_node0 = 100;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = generic_get_mb_info(node,param,value);
          printf("%ld\n", benchRet); 
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
