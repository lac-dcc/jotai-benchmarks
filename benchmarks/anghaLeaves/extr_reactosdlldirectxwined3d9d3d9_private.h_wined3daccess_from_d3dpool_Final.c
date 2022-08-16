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
typedef  int D3DPOOL ;

/* Variables and functions */
#define  D3DPOOL_DEFAULT 131 
#define  D3DPOOL_MANAGED 130 
#define  D3DPOOL_SCRATCH 129 
#define  D3DPOOL_SYSTEMMEM 128 
 unsigned int D3DUSAGE_DYNAMIC ; 
 unsigned int WINED3D_RESOURCE_ACCESS_CPU ; 
 unsigned int WINED3D_RESOURCE_ACCESS_GPU ; 
 unsigned int WINED3D_RESOURCE_ACCESS_MAP_R ; 
 unsigned int WINED3D_RESOURCE_ACCESS_MAP_W ; 

__attribute__((used)) static inline unsigned int wined3daccess_from_d3dpool(D3DPOOL pool, unsigned int usage)
{
    switch (pool)
    {
        case D3DPOOL_DEFAULT:
            if (usage & D3DUSAGE_DYNAMIC)
                return WINED3D_RESOURCE_ACCESS_GPU | WINED3D_RESOURCE_ACCESS_MAP_R | WINED3D_RESOURCE_ACCESS_MAP_W;
            return WINED3D_RESOURCE_ACCESS_GPU;
        case D3DPOOL_MANAGED:
            return WINED3D_RESOURCE_ACCESS_GPU | WINED3D_RESOURCE_ACCESS_CPU
                    | WINED3D_RESOURCE_ACCESS_MAP_R | WINED3D_RESOURCE_ACCESS_MAP_W;
        case D3DPOOL_SYSTEMMEM:
        case D3DPOOL_SCRATCH:
            return WINED3D_RESOURCE_ACCESS_CPU | WINED3D_RESOURCE_ACCESS_MAP_R | WINED3D_RESOURCE_ACCESS_MAP_W;
        default:
            return 0;
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
          int pool = 100;
          unsigned int usage = 100;
          unsigned int benchRet = wined3daccess_from_d3dpool(pool,usage);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pool = 255;
          unsigned int usage = 255;
          unsigned int benchRet = wined3daccess_from_d3dpool(pool,usage);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pool = 10;
          unsigned int usage = 10;
          unsigned int benchRet = wined3daccess_from_d3dpool(pool,usage);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
