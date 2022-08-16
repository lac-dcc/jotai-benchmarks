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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_1__* sgl; } ;
struct hsi_msg {TYPE_2__ sgt; } ;
struct TYPE_3__ {unsigned int length; } ;

/* Variables and functions */

__attribute__((used)) static inline void hsc_msg_len_set(struct hsi_msg *msg, unsigned int len)
{
	msg->sgt.sgl->length = len;
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
          unsigned int len = 100;
          int _len_msg0 = 1;
          struct hsi_msg * msg = (struct hsi_msg *) malloc(_len_msg0*sizeof(struct hsi_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__sgt_sgl0 = 1;
          msg[_i0].sgt.sgl = (struct TYPE_3__ *) malloc(_len_msg__i0__sgt_sgl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_msg__i0__sgt_sgl0; _j0++) {
            msg[_i0].sgt.sgl->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hsc_msg_len_set(msg,len);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
