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
struct cxgbi_sock {int /*<<< orphan*/  state; } ;

/* Variables and functions */
#define  CPL_ERR_BAD_SYN 133 
#define  CPL_ERR_CONN_RESET 132 
#define  CPL_ERR_FINWAIT2_TIMEDOUT 131 
#define  CPL_ERR_KEEPALIVE_TIMEDOUT 130 
#define  CPL_ERR_PERSIST_TIMEDOUT 129 
#define  CPL_ERR_XMIT_TIMEDOUT 128 
 int /*<<< orphan*/  CTP_ESTABLISHED ; 
 int ECONNRESET ; 
 int EIO ; 
 int EPIPE ; 
 int ETIMEDOUT ; 

__attribute__((used)) static int abort_status_to_errno(struct cxgbi_sock *csk, int abort_reason,
								int *need_rst)
{
	switch (abort_reason) {
	case CPL_ERR_BAD_SYN: /* fall through */
	case CPL_ERR_CONN_RESET:
		return csk->state > CTP_ESTABLISHED ?
			-EPIPE : -ECONNRESET;
	case CPL_ERR_XMIT_TIMEDOUT:
	case CPL_ERR_PERSIST_TIMEDOUT:
	case CPL_ERR_FINWAIT2_TIMEDOUT:
	case CPL_ERR_KEEPALIVE_TIMEDOUT:
		return -ETIMEDOUT;
	default:
		return -EIO;
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
          int abort_reason = 100;
          int _len_csk0 = 1;
          struct cxgbi_sock * csk = (struct cxgbi_sock *) malloc(_len_csk0*sizeof(struct cxgbi_sock));
          for(int _i0 = 0; _i0 < _len_csk0; _i0++) {
            csk[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_need_rst0 = 1;
          int * need_rst = (int *) malloc(_len_need_rst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_need_rst0; _i0++) {
            need_rst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = abort_status_to_errno(csk,abort_reason,need_rst);
          printf("%d\n", benchRet); 
          free(csk);
          free(need_rst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
