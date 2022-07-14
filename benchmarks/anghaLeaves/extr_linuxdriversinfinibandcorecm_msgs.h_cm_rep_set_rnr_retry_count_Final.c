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
typedef  int u8 ;
struct cm_rep_msg {int offset27; } ;

/* Variables and functions */

__attribute__((used)) static inline void cm_rep_set_rnr_retry_count(struct cm_rep_msg *rep_msg,
					      u8 rnr_retry_count)
{
	rep_msg->offset27 = (u8) ((rep_msg->offset27 & 0x1F) |
				  (rnr_retry_count << 5));
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
          int rnr_retry_count = 100;
          int _len_rep_msg0 = 1;
          struct cm_rep_msg * rep_msg = (struct cm_rep_msg *) malloc(_len_rep_msg0*sizeof(struct cm_rep_msg));
          for(int _i0 = 0; _i0 < _len_rep_msg0; _i0++) {
            rep_msg[_i0].offset27 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cm_rep_set_rnr_retry_count(rep_msg,rnr_retry_count);
          free(rep_msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rnr_retry_count = 255;
          int _len_rep_msg0 = 65025;
          struct cm_rep_msg * rep_msg = (struct cm_rep_msg *) malloc(_len_rep_msg0*sizeof(struct cm_rep_msg));
          for(int _i0 = 0; _i0 < _len_rep_msg0; _i0++) {
            rep_msg[_i0].offset27 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cm_rep_set_rnr_retry_count(rep_msg,rnr_retry_count);
          free(rep_msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rnr_retry_count = 10;
          int _len_rep_msg0 = 100;
          struct cm_rep_msg * rep_msg = (struct cm_rep_msg *) malloc(_len_rep_msg0*sizeof(struct cm_rep_msg));
          for(int _i0 = 0; _i0 < _len_rep_msg0; _i0++) {
            rep_msg[_i0].offset27 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cm_rep_set_rnr_retry_count(rep_msg,rnr_retry_count);
          free(rep_msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}