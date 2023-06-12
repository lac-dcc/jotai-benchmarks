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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct d3dx_parameter {void* top_level_param; } ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

__attribute__((used)) static BOOL param_set_top_level_param(void *top_level_param, struct d3dx_parameter *param)
{
    param->top_level_param = top_level_param;
    return FALSE;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          void * top_level_param;
        
          int _len_param0 = 65025;
          struct d3dx_parameter * param = (struct d3dx_parameter *) malloc(_len_param0*sizeof(struct d3dx_parameter));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            
          }
        
          int benchRet = param_set_top_level_param(top_level_param,param);
          printf("%d\n", benchRet); 
          free(param);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          void * top_level_param;
        
          int _len_param0 = 100;
          struct d3dx_parameter * param = (struct d3dx_parameter *) malloc(_len_param0*sizeof(struct d3dx_parameter));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            
          }
        
          int benchRet = param_set_top_level_param(top_level_param,param);
          printf("%d\n", benchRet); 
          free(param);
        
        break;
    }
    // empty
    case 2:
    {
          void * top_level_param;
        
          int _len_param0 = 1;
          struct d3dx_parameter * param = (struct d3dx_parameter *) malloc(_len_param0*sizeof(struct d3dx_parameter));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            
          }
        
          int benchRet = param_set_top_level_param(top_level_param,param);
          printf("%d\n", benchRet); 
          free(param);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
