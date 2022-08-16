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

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct talitos_ptr {int /*<<< orphan*/  j_extent; } ;

/* Variables and functions */

__attribute__((used)) static void to_talitos_ptr_ext_or(struct talitos_ptr *ptr, u8 val, bool is_sec1)
{
	if (!is_sec1)
		ptr->j_extent |= val;
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
          int val = 100;
          int is_sec1 = 100;
          int _len_ptr0 = 1;
          struct talitos_ptr * ptr = (struct talitos_ptr *) malloc(_len_ptr0*sizeof(struct talitos_ptr));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].j_extent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          to_talitos_ptr_ext_or(ptr,val,is_sec1);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int val = 10;
          int is_sec1 = 10;
          int _len_ptr0 = 100;
          struct talitos_ptr * ptr = (struct talitos_ptr *) malloc(_len_ptr0*sizeof(struct talitos_ptr));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].j_extent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          to_talitos_ptr_ext_or(ptr,val,is_sec1);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
