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
typedef  int u8 ;
struct cm_req_msg {int primary_offset95; } ;

/* Variables and functions */

__attribute__((used)) static inline void cm_req_set_primary_local_ack_timeout(struct cm_req_msg *req_msg,
							u8 local_ack_timeout)
{
	req_msg->primary_offset95 = (u8) ((req_msg->primary_offset95 & 0x07) |
					  (local_ack_timeout << 3));
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
          int local_ack_timeout = 255;
          int _len_req_msg0 = 1;
          struct cm_req_msg * req_msg = (struct cm_req_msg *) malloc(_len_req_msg0*sizeof(struct cm_req_msg));
          for(int _i0 = 0; _i0 < _len_req_msg0; _i0++) {
            req_msg->primary_offset95 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cm_req_set_primary_local_ack_timeout(req_msg,local_ack_timeout);
          free(req_msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
