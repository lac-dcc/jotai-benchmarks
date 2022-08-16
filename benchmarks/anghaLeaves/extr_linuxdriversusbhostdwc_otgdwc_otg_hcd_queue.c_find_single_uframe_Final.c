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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {unsigned short usecs; unsigned short* frame_usecs; } ;
typedef  TYPE_1__ dwc_otg_qh_t ;
struct TYPE_6__ {unsigned short* frame_usecs; } ;
typedef  TYPE_2__ dwc_otg_hcd_t ;

/* Variables and functions */

__attribute__((used)) static int find_single_uframe(dwc_otg_hcd_t * _hcd, dwc_otg_qh_t * _qh)
{
	int i;
	unsigned short utime;
	int t_left;
	int ret;
	int done;

	ret = -1;
	utime = _qh->usecs;
	t_left = utime;
	i = 0;
	done = 0;
	while (done == 0) {
		/* At the start _hcd->frame_usecs[i] = max_uframe_usecs[i]; */
		if (utime <= _hcd->frame_usecs[i]) {
			_hcd->frame_usecs[i] -= utime;
			_qh->frame_usecs[i] += utime;
			t_left -= utime;
			ret = i;
			done = 1;
			return ret;
		} else {
			i++;
			if (i == 8) {
				done = 1;
				ret = -1;
			}
		}
	}
	return ret;
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
          int _len__hcd0 = 1;
          struct TYPE_6__ * _hcd = (struct TYPE_6__ *) malloc(_len__hcd0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len__hcd0; _i0++) {
              int _len__hcd__i0__frame_usecs0 = 1;
          _hcd[_i0].frame_usecs = (unsigned short *) malloc(_len__hcd__i0__frame_usecs0*sizeof(unsigned short));
          for(int _j0 = 0; _j0 < _len__hcd__i0__frame_usecs0; _j0++) {
            _hcd[_i0].frame_usecs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len__qh0 = 1;
          struct TYPE_5__ * _qh = (struct TYPE_5__ *) malloc(_len__qh0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len__qh0; _i0++) {
            _qh[_i0].usecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__qh__i0__frame_usecs0 = 1;
          _qh[_i0].frame_usecs = (unsigned short *) malloc(_len__qh__i0__frame_usecs0*sizeof(unsigned short));
          for(int _j0 = 0; _j0 < _len__qh__i0__frame_usecs0; _j0++) {
            _qh[_i0].frame_usecs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = find_single_uframe(_hcd,_qh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__hcd0; _aux++) {
          free(_hcd[_aux].frame_usecs);
          }
          free(_hcd);
          for(int _aux = 0; _aux < _len__qh0; _aux++) {
          free(_qh[_aux].frame_usecs);
          }
          free(_qh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
