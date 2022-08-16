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
struct mlxsw_pci_queue {int consumer_counter; int count; } ;

/* Variables and functions */

__attribute__((used)) static bool mlxsw_pci_elem_hw_owned(struct mlxsw_pci_queue *q, bool owner_bit)
{
	return owner_bit != !!(q->consumer_counter & q->count);
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
          int owner_bit = 100;
          int _len_q0 = 1;
          struct mlxsw_pci_queue * q = (struct mlxsw_pci_queue *) malloc(_len_q0*sizeof(struct mlxsw_pci_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].consumer_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_pci_elem_hw_owned(q,owner_bit);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
