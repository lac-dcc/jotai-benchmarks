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
       3            empty\n\
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
typedef  int uint32_t ;
struct ttm_mem_type_manager {int default_caching; } ;

/* Variables and functions */
 int TTM_PL_FLAG_CACHED ; 
 int TTM_PL_FLAG_UNCACHED ; 
 int TTM_PL_FLAG_WC ; 
 int TTM_PL_MASK_CACHING ; 

__attribute__((used)) static uint32_t ttm_bo_select_caching(struct ttm_mem_type_manager *man,
				      uint32_t cur_placement,
				      uint32_t proposed_placement)
{
	uint32_t caching = proposed_placement & TTM_PL_MASK_CACHING;
	uint32_t result = proposed_placement & ~TTM_PL_MASK_CACHING;

	/**
	 * Keep current caching if possible.
	 */

	if ((cur_placement & caching) != 0)
		result |= (cur_placement & caching);
	else if ((man->default_caching & caching) != 0)
		result |= man->default_caching;
	else if ((TTM_PL_FLAG_CACHED & caching) != 0)
		result |= TTM_PL_FLAG_CACHED;
	else if ((TTM_PL_FLAG_WC & caching) != 0)
		result |= TTM_PL_FLAG_WC;
	else if ((TTM_PL_FLAG_UNCACHED & caching) != 0)
		result |= TTM_PL_FLAG_UNCACHED;

	return result;
}

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
          int cur_placement = 100;
        
          int proposed_placement = 100;
        
          int _len_man0 = 1;
          struct ttm_mem_type_manager * man = (struct ttm_mem_type_manager *) malloc(_len_man0*sizeof(struct ttm_mem_type_manager));
          for(int _i0 = 0; _i0 < _len_man0; _i0++) {
              man[_i0].default_caching = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ttm_bo_select_caching(man,cur_placement,proposed_placement);
          printf("%d\n", benchRet); 
          free(man);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cur_placement = 255;
        
          int proposed_placement = 255;
        
          int _len_man0 = 65025;
          struct ttm_mem_type_manager * man = (struct ttm_mem_type_manager *) malloc(_len_man0*sizeof(struct ttm_mem_type_manager));
          for(int _i0 = 0; _i0 < _len_man0; _i0++) {
              man[_i0].default_caching = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ttm_bo_select_caching(man,cur_placement,proposed_placement);
          printf("%d\n", benchRet); 
          free(man);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cur_placement = 10;
        
          int proposed_placement = 10;
        
          int _len_man0 = 100;
          struct ttm_mem_type_manager * man = (struct ttm_mem_type_manager *) malloc(_len_man0*sizeof(struct ttm_mem_type_manager));
          for(int _i0 = 0; _i0 < _len_man0; _i0++) {
              man[_i0].default_caching = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ttm_bo_select_caching(man,cur_placement,proposed_placement);
          printf("%d\n", benchRet); 
          free(man);
        
        break;
    }
    // empty
    case 3:
    {
          int cur_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int proposed_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_man0 = 1;
          struct ttm_mem_type_manager * man = (struct ttm_mem_type_manager *) malloc(_len_man0*sizeof(struct ttm_mem_type_manager));
          for(int _i0 = 0; _i0 < _len_man0; _i0++) {
              man[_i0].default_caching = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ttm_bo_select_caching(man,cur_placement,proposed_placement);
          printf("%d\n", benchRet); 
          free(man);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
