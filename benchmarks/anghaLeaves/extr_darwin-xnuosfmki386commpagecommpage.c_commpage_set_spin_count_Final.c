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
typedef  scalar_t__ uint32_t ;

/* Variables and functions */
 scalar_t__ _COMM_PAGE32_BASE_ADDRESS ; 
 scalar_t__ _COMM_PAGE32_START_ADDRESS ; 
 scalar_t__ _COMM_PAGE_SPIN_COUNT ; 
 char* commPagePtr32 ; 
 char* commPagePtr64 ; 

void
commpage_set_spin_count(
	unsigned int 	count )
{
	char	    *cp;
	uint32_t    *ip;
	
	if (count == 0)	    /* we test for 0 after decrement, not before */
	    count = 1;
	    
	cp = commPagePtr32;
	if ( cp ) {
		cp += (_COMM_PAGE_SPIN_COUNT - _COMM_PAGE32_BASE_ADDRESS);
		ip = (uint32_t*) (void *) cp;
		*ip = (uint32_t) count;
	}
	
	cp = commPagePtr64;
	if ( cp ) {
		cp += (_COMM_PAGE_SPIN_COUNT - _COMM_PAGE32_START_ADDRESS);
		ip = (uint32_t*) (void *) cp;
		*ip = (uint32_t) count;
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
          unsigned int count = 100;
          commpage_set_spin_count(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int count = 255;
          commpage_set_spin_count(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int count = 10;
          commpage_set_spin_count(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
