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
typedef  int u32 ;
struct ibmveth_buff_pool {int size; int index; int buff_size; int threshold; int active; } ;

/* Variables and functions */

__attribute__((used)) static void ibmveth_init_buffer_pool(struct ibmveth_buff_pool *pool,
				     u32 pool_index, u32 pool_size,
				     u32 buff_size, u32 pool_active)
{
	pool->size = pool_size;
	pool->index = pool_index;
	pool->buff_size = buff_size;
	pool->threshold = pool_size * 7 / 8;
	pool->active = pool_active;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int pool_index = 100;
        
          int pool_size = 100;
        
          int buff_size = 100;
        
          int pool_active = 100;
        
          int _len_pool0 = 1;
          struct ibmveth_buff_pool * pool = (struct ibmveth_buff_pool *) malloc(_len_pool0*sizeof(struct ibmveth_buff_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ibmveth_init_buffer_pool(pool,pool_index,pool_size,buff_size,pool_active);
          free(pool);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int pool_index = 255;
        
          int pool_size = 255;
        
          int buff_size = 255;
        
          int pool_active = 255;
        
          int _len_pool0 = 65025;
          struct ibmveth_buff_pool * pool = (struct ibmveth_buff_pool *) malloc(_len_pool0*sizeof(struct ibmveth_buff_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ibmveth_init_buffer_pool(pool,pool_index,pool_size,buff_size,pool_active);
          free(pool);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int pool_index = 10;
        
          int pool_size = 10;
        
          int buff_size = 10;
        
          int pool_active = 10;
        
          int _len_pool0 = 100;
          struct ibmveth_buff_pool * pool = (struct ibmveth_buff_pool *) malloc(_len_pool0*sizeof(struct ibmveth_buff_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ibmveth_init_buffer_pool(pool,pool_index,pool_size,buff_size,pool_active);
          free(pool);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int pool_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int pool_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int pool_active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pool0 = 1;
          struct ibmveth_buff_pool * pool = (struct ibmveth_buff_pool *) malloc(_len_pool0*sizeof(struct ibmveth_buff_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          pool[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ibmveth_init_buffer_pool(pool,pool_index,pool_size,buff_size,pool_active);
          free(pool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
