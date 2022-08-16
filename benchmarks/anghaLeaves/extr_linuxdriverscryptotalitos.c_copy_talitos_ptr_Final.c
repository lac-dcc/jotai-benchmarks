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
struct talitos_ptr {int /*<<< orphan*/  eptr; int /*<<< orphan*/  len; int /*<<< orphan*/  len1; int /*<<< orphan*/  ptr; } ;

/* Variables and functions */

__attribute__((used)) static void copy_talitos_ptr(struct talitos_ptr *dst_ptr,
			     struct talitos_ptr *src_ptr, bool is_sec1)
{
	dst_ptr->ptr = src_ptr->ptr;
	if (is_sec1) {
		dst_ptr->len1 = src_ptr->len1;
	} else {
		dst_ptr->len = src_ptr->len;
		dst_ptr->eptr = src_ptr->eptr;
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
          int is_sec1 = 100;
          int _len_dst_ptr0 = 1;
          struct talitos_ptr * dst_ptr = (struct talitos_ptr *) malloc(_len_dst_ptr0*sizeof(struct talitos_ptr));
          for(int _i0 = 0; _i0 < _len_dst_ptr0; _i0++) {
            dst_ptr[_i0].eptr = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_ptr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_ptr[_i0].len1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_ptr[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_ptr0 = 1;
          struct talitos_ptr * src_ptr = (struct talitos_ptr *) malloc(_len_src_ptr0*sizeof(struct talitos_ptr));
          for(int _i0 = 0; _i0 < _len_src_ptr0; _i0++) {
            src_ptr[_i0].eptr = ((-2 * (next_i()%2)) + 1) * next_i();
        src_ptr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        src_ptr[_i0].len1 = ((-2 * (next_i()%2)) + 1) * next_i();
        src_ptr[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_talitos_ptr(dst_ptr,src_ptr,is_sec1);
          free(dst_ptr);
          free(src_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
