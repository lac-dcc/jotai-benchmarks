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
typedef  int u8 ;
struct drm_dp_sideband_msg_tx {int* msg; int cur_len; } ;
struct drm_dp_sideband_msg_reply_body {int reply_type; int req_type; } ;

/* Variables and functions */

__attribute__((used)) static void drm_dp_encode_sideband_reply(struct drm_dp_sideband_msg_reply_body *rep,
					 struct drm_dp_sideband_msg_tx *raw)
{
	int idx = 0;
	u8 *buf = raw->msg;

	buf[idx++] = (rep->reply_type & 0x1) << 7 | (rep->req_type & 0x7f);

	raw->cur_len = idx;
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
          int _len_rep0 = 1;
          struct drm_dp_sideband_msg_reply_body * rep = (struct drm_dp_sideband_msg_reply_body *) malloc(_len_rep0*sizeof(struct drm_dp_sideband_msg_reply_body));
          for(int _i0 = 0; _i0 < _len_rep0; _i0++) {
            rep[_i0].reply_type = ((-2 * (next_i()%2)) + 1) * next_i();
        rep[_i0].req_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw0 = 1;
          struct drm_dp_sideband_msg_tx * raw = (struct drm_dp_sideband_msg_tx *) malloc(_len_raw0*sizeof(struct drm_dp_sideband_msg_tx));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
              int _len_raw__i0__msg0 = 1;
          raw[_i0].msg = (int *) malloc(_len_raw__i0__msg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_raw__i0__msg0; _j0++) {
            raw[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].cur_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drm_dp_encode_sideband_reply(rep,raw);
          free(rep);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].msg);
          }
          free(raw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
