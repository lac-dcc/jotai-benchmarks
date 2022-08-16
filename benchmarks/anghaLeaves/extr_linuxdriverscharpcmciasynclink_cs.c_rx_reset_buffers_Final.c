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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int rx_buf_count; int rx_buf_size; scalar_t__ rx_buf; scalar_t__ rx_frame_count; scalar_t__ rx_get; scalar_t__ rx_put; } ;
struct TYPE_4__ {scalar_t__ count; scalar_t__ status; } ;
typedef  TYPE_1__ RXBUF ;
typedef  TYPE_2__ MGSLPC_INFO ;

/* Variables and functions */

__attribute__((used)) static void rx_reset_buffers(MGSLPC_INFO *info)
{
	RXBUF *buf;
	int i;

	info->rx_put = 0;
	info->rx_get = 0;
	info->rx_frame_count = 0;
	for (i=0 ; i < info->rx_buf_count ; i++) {
		buf = (RXBUF*)(info->rx_buf + (i * info->rx_buf_size));
		buf->status = buf->count = 0;
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
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].rx_buf_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_frame_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_get = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_put = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rx_reset_buffers(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
