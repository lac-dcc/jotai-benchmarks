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
typedef  scalar_t__ u16 ;
struct nes_cm_node {scalar_t__ ord_size; scalar_t__ ird_size; } ;

/* Variables and functions */
 scalar_t__ NES_MAX_IRD ; 
 scalar_t__ NES_MAX_ORD ; 

__attribute__((used)) static void record_ird_ord(struct nes_cm_node *cm_node,
					u16 conn_ird, u16 conn_ord)
{
	if (conn_ird > NES_MAX_IRD)
		conn_ird = NES_MAX_IRD;

	if (conn_ord > NES_MAX_ORD)
		conn_ord = NES_MAX_ORD;

	cm_node->ird_size = conn_ird;
	cm_node->ord_size = conn_ord;
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
          long conn_ird = 100;
          long conn_ord = 100;
          int _len_cm_node0 = 1;
          struct nes_cm_node * cm_node = (struct nes_cm_node *) malloc(_len_cm_node0*sizeof(struct nes_cm_node));
          for(int _i0 = 0; _i0 < _len_cm_node0; _i0++) {
            cm_node[_i0].ord_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cm_node[_i0].ird_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          record_ird_ord(cm_node,conn_ird,conn_ord);
          free(cm_node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
