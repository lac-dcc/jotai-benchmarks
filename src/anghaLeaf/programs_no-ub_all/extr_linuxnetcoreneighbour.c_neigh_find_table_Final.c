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
       0            big-arr\n\
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
struct neigh_table {int dummy; } ;

/* Variables and functions */
#define  AF_DECnet 130 
#define  AF_INET 129 
#define  AF_INET6 128 
 size_t NEIGH_ARP_TABLE ; 
 size_t NEIGH_DN_TABLE ; 
 size_t NEIGH_ND_TABLE ; 
 struct neigh_table** neigh_tables ; 

__attribute__((used)) static struct neigh_table *neigh_find_table(int family)
{
	struct neigh_table *tbl = NULL;

	switch (family) {
	case AF_INET:
		tbl = neigh_tables[NEIGH_ARP_TABLE];
		break;
	case AF_INET6:
		tbl = neigh_tables[NEIGH_ND_TABLE];
		break;
	case AF_DECnet:
		tbl = neigh_tables[NEIGH_DN_TABLE];
		break;
	}

	return tbl;
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

    // big-arr
    case 0:
    {
          int family = 255;
          struct neigh_table * benchRet = neigh_find_table(family);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
