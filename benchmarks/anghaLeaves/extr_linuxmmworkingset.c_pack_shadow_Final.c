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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned long node_id; } ;
typedef  TYPE_1__ pg_data_t ;

/* Variables and functions */
 unsigned long MEM_CGROUP_ID_SHIFT ; 
 unsigned long NODES_SHIFT ; 
 unsigned long RADIX_TREE_EXCEPTIONAL_ENTRY ; 
 unsigned long RADIX_TREE_EXCEPTIONAL_SHIFT ; 
 unsigned long bucket_order ; 

__attribute__((used)) static void *pack_shadow(int memcgid, pg_data_t *pgdat, unsigned long eviction)
{
	eviction >>= bucket_order;
	eviction = (eviction << MEM_CGROUP_ID_SHIFT) | memcgid;
	eviction = (eviction << NODES_SHIFT) | pgdat->node_id;
	eviction = (eviction << RADIX_TREE_EXCEPTIONAL_SHIFT);

	return (void *)(eviction | RADIX_TREE_EXCEPTIONAL_ENTRY);
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
          int memcgid = 100;
          unsigned long eviction = 100;
          int _len_pgdat0 = 1;
          struct TYPE_3__ * pgdat = (struct TYPE_3__ *) malloc(_len_pgdat0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pgdat0; _i0++) {
            pgdat[_i0].node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = pack_shadow(memcgid,pgdat,eviction);
          free(pgdat);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int memcgid = 10;
          unsigned long eviction = 10;
          int _len_pgdat0 = 100;
          struct TYPE_3__ * pgdat = (struct TYPE_3__ *) malloc(_len_pgdat0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pgdat0; _i0++) {
            pgdat[_i0].node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = pack_shadow(memcgid,pgdat,eviction);
          free(pgdat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
