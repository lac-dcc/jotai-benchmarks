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
typedef  int /*<<< orphan*/  u32 ;
struct qlcnic_adapter {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void
qlcnic_pf_set_interface_id_macaddr(struct qlcnic_adapter *adapter, u32 *int_id)
{}


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
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_int_id0 = 1;
          int * int_id = (int *) malloc(_len_int_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_int_id0; _i0++) {
            int_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qlcnic_pf_set_interface_id_macaddr(adapter,int_id);
          free(adapter);
          free(int_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}