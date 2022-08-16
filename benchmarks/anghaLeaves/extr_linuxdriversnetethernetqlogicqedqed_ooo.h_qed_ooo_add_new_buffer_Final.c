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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct qed_ooo_info {int dummy; } ;
struct qed_ooo_buffer {int dummy; } ;
struct qed_hwfn {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void qed_ooo_add_new_buffer(struct qed_hwfn *p_hwfn,
					  struct qed_ooo_info *p_ooo_info,
					  u32 cid, u8 ooo_isle,
					  struct qed_ooo_buffer *p_buffer,
					  u8 buffer_side) {}


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
          int cid = 100;
          int ooo_isle = 100;
          int buffer_side = 100;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_ooo_info0 = 1;
          struct qed_ooo_info * p_ooo_info = (struct qed_ooo_info *) malloc(_len_p_ooo_info0*sizeof(struct qed_ooo_info));
          for(int _i0 = 0; _i0 < _len_p_ooo_info0; _i0++) {
            p_ooo_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_buffer0 = 1;
          struct qed_ooo_buffer * p_buffer = (struct qed_ooo_buffer *) malloc(_len_p_buffer0*sizeof(struct qed_ooo_buffer));
          for(int _i0 = 0; _i0 < _len_p_buffer0; _i0++) {
            p_buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_ooo_add_new_buffer(p_hwfn,p_ooo_info,cid,ooo_isle,p_buffer,buffer_side);
          free(p_hwfn);
          free(p_ooo_info);
          free(p_buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
