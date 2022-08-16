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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct fsg_common {unsigned int bulk_out_maxpacket; } ;
struct fsg_buffhd {unsigned int bulk_out_intended_length; TYPE_1__* outreq; } ;
struct TYPE_2__ {unsigned int length; } ;

/* Variables and functions */

__attribute__((used)) static void set_bulk_out_req_length(struct fsg_common *common,
				    struct fsg_buffhd *bh, unsigned int length)
{
	unsigned int	rem;

	bh->bulk_out_intended_length = length;
	rem = length % common->bulk_out_maxpacket;
	if (rem > 0)
		length += common->bulk_out_maxpacket - rem;
	bh->outreq->length = length;
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
          unsigned int length = 100;
          int _len_common0 = 1;
          struct fsg_common * common = (struct fsg_common *) malloc(_len_common0*sizeof(struct fsg_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
            common[_i0].bulk_out_maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bh0 = 1;
          struct fsg_buffhd * bh = (struct fsg_buffhd *) malloc(_len_bh0*sizeof(struct fsg_buffhd));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].bulk_out_intended_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bh__i0__outreq0 = 1;
          bh[_i0].outreq = (struct TYPE_2__ *) malloc(_len_bh__i0__outreq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bh__i0__outreq0; _j0++) {
            bh[_i0].outreq->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_bulk_out_req_length(common,bh,length);
          free(common);
          for(int _aux = 0; _aux < _len_bh0; _aux++) {
          free(bh[_aux].outreq);
          }
          free(bh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
