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
struct pr_usrreqs {int /*<<< orphan*/ * pru_preconnect; int /*<<< orphan*/ * pru_socheckopt; int /*<<< orphan*/ * pru_sosend_list; int /*<<< orphan*/ * pru_sosend; int /*<<< orphan*/ * pru_soreceive_list; int /*<<< orphan*/ * pru_soreceive; int /*<<< orphan*/ * pru_sopoll; int /*<<< orphan*/ * pru_sockaddr; int /*<<< orphan*/ * pru_shutdown; int /*<<< orphan*/ * pru_sense; int /*<<< orphan*/ * pru_send_list; int /*<<< orphan*/ * pru_send; int /*<<< orphan*/ * pru_rcvoob; int /*<<< orphan*/ * pru_rcvd; int /*<<< orphan*/ * pru_peeraddr; int /*<<< orphan*/ * pru_listen; int /*<<< orphan*/ * pru_disconnectx; int /*<<< orphan*/ * pru_disconnect; int /*<<< orphan*/ * pru_detach; int /*<<< orphan*/ * pru_control; int /*<<< orphan*/ * pru_connectx; int /*<<< orphan*/ * pru_connect2; int /*<<< orphan*/ * pru_connect; int /*<<< orphan*/ * pru_bind; int /*<<< orphan*/ * pru_attach; int /*<<< orphan*/ * pru_accept; int /*<<< orphan*/ * pru_abort; } ;

/* Variables and functions */
 int /*<<< orphan*/ * pru_abort_notsupp ; 
 int /*<<< orphan*/ * pru_accept_notsupp ; 
 int /*<<< orphan*/ * pru_attach_notsupp ; 
 int /*<<< orphan*/ * pru_bind_notsupp ; 
 int /*<<< orphan*/ * pru_connect2_notsupp ; 
 int /*<<< orphan*/ * pru_connect_notsupp ; 
 int /*<<< orphan*/ * pru_connectx_notsupp ; 
 int /*<<< orphan*/ * pru_control_notsupp ; 
 int /*<<< orphan*/ * pru_detach_notsupp ; 
 int /*<<< orphan*/ * pru_disconnect_notsupp ; 
 int /*<<< orphan*/ * pru_disconnectx_notsupp ; 
 int /*<<< orphan*/ * pru_listen_notsupp ; 
 int /*<<< orphan*/ * pru_peeraddr_notsupp ; 
 int /*<<< orphan*/ * pru_preconnect_null ; 
 int /*<<< orphan*/ * pru_rcvd_notsupp ; 
 int /*<<< orphan*/ * pru_rcvoob_notsupp ; 
 int /*<<< orphan*/ * pru_send_list_notsupp ; 
 int /*<<< orphan*/ * pru_send_notsupp ; 
 int /*<<< orphan*/ * pru_sense_null ; 
 int /*<<< orphan*/ * pru_shutdown_notsupp ; 
 int /*<<< orphan*/ * pru_socheckopt_null ; 
 int /*<<< orphan*/ * pru_sockaddr_notsupp ; 
 int /*<<< orphan*/ * pru_sopoll_notsupp ; 
 int /*<<< orphan*/ * pru_soreceive_list_notsupp ; 
 int /*<<< orphan*/ * pru_soreceive_notsupp ; 
 int /*<<< orphan*/ * pru_sosend_list_notsupp ; 
 int /*<<< orphan*/ * pru_sosend_notsupp ; 

void
pru_sanitize(struct pr_usrreqs *pru)
{
#define	DEFAULT(foo, bar)	if ((foo) == NULL) (foo) = (bar)
	DEFAULT(pru->pru_abort, pru_abort_notsupp);
	DEFAULT(pru->pru_accept, pru_accept_notsupp);
	DEFAULT(pru->pru_attach, pru_attach_notsupp);
	DEFAULT(pru->pru_bind, pru_bind_notsupp);
	DEFAULT(pru->pru_connect, pru_connect_notsupp);
	DEFAULT(pru->pru_connect2, pru_connect2_notsupp);
	DEFAULT(pru->pru_connectx, pru_connectx_notsupp);
	DEFAULT(pru->pru_control, pru_control_notsupp);
	DEFAULT(pru->pru_detach, pru_detach_notsupp);
	DEFAULT(pru->pru_disconnect, pru_disconnect_notsupp);
	DEFAULT(pru->pru_disconnectx, pru_disconnectx_notsupp);
	DEFAULT(pru->pru_listen, pru_listen_notsupp);
	DEFAULT(pru->pru_peeraddr, pru_peeraddr_notsupp);
	DEFAULT(pru->pru_rcvd, pru_rcvd_notsupp);
	DEFAULT(pru->pru_rcvoob, pru_rcvoob_notsupp);
	DEFAULT(pru->pru_send, pru_send_notsupp);
	DEFAULT(pru->pru_send_list, pru_send_list_notsupp);
	DEFAULT(pru->pru_sense, pru_sense_null);
	DEFAULT(pru->pru_shutdown, pru_shutdown_notsupp);
	DEFAULT(pru->pru_sockaddr, pru_sockaddr_notsupp);
	DEFAULT(pru->pru_sopoll, pru_sopoll_notsupp);
	DEFAULT(pru->pru_soreceive, pru_soreceive_notsupp);
	DEFAULT(pru->pru_soreceive_list, pru_soreceive_list_notsupp);
	DEFAULT(pru->pru_sosend, pru_sosend_notsupp);
	DEFAULT(pru->pru_sosend_list, pru_sosend_list_notsupp);
	DEFAULT(pru->pru_socheckopt, pru_socheckopt_null);
	DEFAULT(pru->pru_preconnect, pru_preconnect_null);
#undef DEFAULT
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
          int _len_pru0 = 1;
          struct pr_usrreqs * pru = (struct pr_usrreqs *) malloc(_len_pru0*sizeof(struct pr_usrreqs));
          for(int _i0 = 0; _i0 < _len_pru0; _i0++) {
              int _len_pru__i0__pru_preconnect0 = 1;
          pru[_i0].pru_preconnect = (int *) malloc(_len_pru__i0__pru_preconnect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_preconnect0; _j0++) {
            pru[_i0].pru_preconnect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_socheckopt0 = 1;
          pru[_i0].pru_socheckopt = (int *) malloc(_len_pru__i0__pru_socheckopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_socheckopt0; _j0++) {
            pru[_i0].pru_socheckopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_sosend_list0 = 1;
          pru[_i0].pru_sosend_list = (int *) malloc(_len_pru__i0__pru_sosend_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_sosend_list0; _j0++) {
            pru[_i0].pru_sosend_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_sosend0 = 1;
          pru[_i0].pru_sosend = (int *) malloc(_len_pru__i0__pru_sosend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_sosend0; _j0++) {
            pru[_i0].pru_sosend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_soreceive_list0 = 1;
          pru[_i0].pru_soreceive_list = (int *) malloc(_len_pru__i0__pru_soreceive_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_soreceive_list0; _j0++) {
            pru[_i0].pru_soreceive_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_soreceive0 = 1;
          pru[_i0].pru_soreceive = (int *) malloc(_len_pru__i0__pru_soreceive0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_soreceive0; _j0++) {
            pru[_i0].pru_soreceive[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_sopoll0 = 1;
          pru[_i0].pru_sopoll = (int *) malloc(_len_pru__i0__pru_sopoll0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_sopoll0; _j0++) {
            pru[_i0].pru_sopoll[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_sockaddr0 = 1;
          pru[_i0].pru_sockaddr = (int *) malloc(_len_pru__i0__pru_sockaddr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_sockaddr0; _j0++) {
            pru[_i0].pru_sockaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_shutdown0 = 1;
          pru[_i0].pru_shutdown = (int *) malloc(_len_pru__i0__pru_shutdown0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_shutdown0; _j0++) {
            pru[_i0].pru_shutdown[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_sense0 = 1;
          pru[_i0].pru_sense = (int *) malloc(_len_pru__i0__pru_sense0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_sense0; _j0++) {
            pru[_i0].pru_sense[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_send_list0 = 1;
          pru[_i0].pru_send_list = (int *) malloc(_len_pru__i0__pru_send_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_send_list0; _j0++) {
            pru[_i0].pru_send_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_send0 = 1;
          pru[_i0].pru_send = (int *) malloc(_len_pru__i0__pru_send0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_send0; _j0++) {
            pru[_i0].pru_send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_rcvoob0 = 1;
          pru[_i0].pru_rcvoob = (int *) malloc(_len_pru__i0__pru_rcvoob0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_rcvoob0; _j0++) {
            pru[_i0].pru_rcvoob[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_rcvd0 = 1;
          pru[_i0].pru_rcvd = (int *) malloc(_len_pru__i0__pru_rcvd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_rcvd0; _j0++) {
            pru[_i0].pru_rcvd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_peeraddr0 = 1;
          pru[_i0].pru_peeraddr = (int *) malloc(_len_pru__i0__pru_peeraddr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_peeraddr0; _j0++) {
            pru[_i0].pru_peeraddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_listen0 = 1;
          pru[_i0].pru_listen = (int *) malloc(_len_pru__i0__pru_listen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_listen0; _j0++) {
            pru[_i0].pru_listen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_disconnectx0 = 1;
          pru[_i0].pru_disconnectx = (int *) malloc(_len_pru__i0__pru_disconnectx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_disconnectx0; _j0++) {
            pru[_i0].pru_disconnectx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_disconnect0 = 1;
          pru[_i0].pru_disconnect = (int *) malloc(_len_pru__i0__pru_disconnect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_disconnect0; _j0++) {
            pru[_i0].pru_disconnect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_detach0 = 1;
          pru[_i0].pru_detach = (int *) malloc(_len_pru__i0__pru_detach0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_detach0; _j0++) {
            pru[_i0].pru_detach[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_control0 = 1;
          pru[_i0].pru_control = (int *) malloc(_len_pru__i0__pru_control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_control0; _j0++) {
            pru[_i0].pru_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_connectx0 = 1;
          pru[_i0].pru_connectx = (int *) malloc(_len_pru__i0__pru_connectx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_connectx0; _j0++) {
            pru[_i0].pru_connectx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_connect20 = 1;
          pru[_i0].pru_connect2 = (int *) malloc(_len_pru__i0__pru_connect20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_connect20; _j0++) {
            pru[_i0].pru_connect2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_connect0 = 1;
          pru[_i0].pru_connect = (int *) malloc(_len_pru__i0__pru_connect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_connect0; _j0++) {
            pru[_i0].pru_connect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_bind0 = 1;
          pru[_i0].pru_bind = (int *) malloc(_len_pru__i0__pru_bind0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_bind0; _j0++) {
            pru[_i0].pru_bind[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_attach0 = 1;
          pru[_i0].pru_attach = (int *) malloc(_len_pru__i0__pru_attach0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_attach0; _j0++) {
            pru[_i0].pru_attach[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_accept0 = 1;
          pru[_i0].pru_accept = (int *) malloc(_len_pru__i0__pru_accept0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_accept0; _j0++) {
            pru[_i0].pru_accept[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pru__i0__pru_abort0 = 1;
          pru[_i0].pru_abort = (int *) malloc(_len_pru__i0__pru_abort0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pru__i0__pru_abort0; _j0++) {
            pru[_i0].pru_abort[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pru_sanitize(pru);
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_preconnect);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_socheckopt);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_sosend_list);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_sosend);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_soreceive_list);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_soreceive);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_sopoll);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_sockaddr);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_shutdown);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_sense);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_send_list);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_send);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_rcvoob);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_rcvd);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_peeraddr);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_listen);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_disconnectx);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_disconnect);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_detach);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_control);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_connectx);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_connect2);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_connect);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_bind);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_attach);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_accept);
          }
          for(int _aux = 0; _aux < _len_pru0; _aux++) {
          free(pru[_aux].pru_abort);
          }
          free(pru);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
