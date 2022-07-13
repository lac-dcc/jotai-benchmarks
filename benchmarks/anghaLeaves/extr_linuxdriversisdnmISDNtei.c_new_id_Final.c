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
typedef  int u_int ;
struct manager {int nextid; } ;

/* Variables and functions */
 int GROUP_TEI ; 
 int TEI_SAPI ; 

__attribute__((used)) static u_int
new_id(struct manager *mgr)
{
	u_int	id;

	id = mgr->nextid++;
	if (id == 0x7fff)
		mgr->nextid = 1;
	id <<= 16;
	id |= GROUP_TEI << 8;
	id |= TEI_SAPI;
	return id;
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
          int _len_mgr0 = 1;
          struct manager * mgr = (struct manager *) malloc(_len_mgr0*sizeof(struct manager));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].nextid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = new_id(mgr);
          printf("%d\n", benchRet); 
          free(mgr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mgr0 = 65025;
          struct manager * mgr = (struct manager *) malloc(_len_mgr0*sizeof(struct manager));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].nextid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = new_id(mgr);
          printf("%d\n", benchRet); 
          free(mgr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mgr0 = 100;
          struct manager * mgr = (struct manager *) malloc(_len_mgr0*sizeof(struct manager));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
            mgr[_i0].nextid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = new_id(mgr);
          printf("%d\n", benchRet); 
          free(mgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
