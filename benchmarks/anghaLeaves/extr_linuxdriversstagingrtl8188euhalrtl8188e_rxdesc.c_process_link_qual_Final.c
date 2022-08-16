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
struct signal_stat {int total_num; int total_val; int avg_val; scalar_t__ update_req; } ;
struct TYPE_4__ {scalar_t__ SignalQuality; } ;
struct rx_pkt_attrib {TYPE_2__ phy_info; } ;
struct recv_frame {struct rx_pkt_attrib attrib; } ;
struct TYPE_3__ {struct signal_stat signal_qual_data; } ;
struct adapter {TYPE_1__ recvpriv; } ;

/* Variables and functions */

__attribute__((used)) static void process_link_qual(struct adapter *padapter,
			      struct recv_frame *prframe)
{
	struct rx_pkt_attrib *pattrib;
	struct signal_stat *signal_stat;

	if (!prframe || !padapter)
		return;

	pattrib = &prframe->attrib;
	signal_stat = &padapter->recvpriv.signal_qual_data;

	if (signal_stat->update_req) {
		signal_stat->total_num = 0;
		signal_stat->total_val = 0;
		signal_stat->update_req = 0;
	}

	signal_stat->total_num++;
	signal_stat->total_val  += pattrib->phy_info.SignalQuality;
	signal_stat->avg_val = signal_stat->total_val / signal_stat->total_num;
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
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].recvpriv.signal_qual_data.total_num = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].recvpriv.signal_qual_data.total_val = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].recvpriv.signal_qual_data.avg_val = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].recvpriv.signal_qual_data.update_req = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prframe0 = 1;
          struct recv_frame * prframe = (struct recv_frame *) malloc(_len_prframe0*sizeof(struct recv_frame));
          for(int _i0 = 0; _i0 < _len_prframe0; _i0++) {
            prframe[_i0].attrib.phy_info.SignalQuality = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_link_qual(padapter,prframe);
          free(padapter);
          free(prframe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
