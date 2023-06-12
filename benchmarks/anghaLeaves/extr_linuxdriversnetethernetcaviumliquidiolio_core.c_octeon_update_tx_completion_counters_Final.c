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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct sk_buff {scalar_t__ len; } ;
struct octnet_buf_free_info {struct sk_buff* skb; } ;
struct octeon_soft_command {struct sk_buff* callback_arg; } ;

/* Variables and functions */
#define  REQTYPE_NORESP_NET 131 
#define  REQTYPE_NORESP_NET_SG 130 
#define  REQTYPE_RESP_NET 129 
#define  REQTYPE_RESP_NET_SG 128 

void octeon_update_tx_completion_counters(void *buf, int reqtype,
					  unsigned int *pkts_compl,
					  unsigned int *bytes_compl)
{
	struct octnet_buf_free_info *finfo;
	struct sk_buff *skb = NULL;
	struct octeon_soft_command *sc;

	switch (reqtype) {
	case REQTYPE_NORESP_NET:
	case REQTYPE_NORESP_NET_SG:
		finfo = buf;
		skb = finfo->skb;
		break;

	case REQTYPE_RESP_NET_SG:
	case REQTYPE_RESP_NET:
		sc = buf;
		skb = sc->callback_arg;
		break;

	default:
		return;
	}

	(*pkts_compl)++;
	*bytes_compl += skb->len;
}

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
          int reqtype = 100;
        
          void * buf;
        
          int _len_pkts_compl0 = 1;
          unsigned int * pkts_compl = (unsigned int *) malloc(_len_pkts_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pkts_compl0; _i0++) {
            pkts_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bytes_compl0 = 1;
          unsigned int * bytes_compl = (unsigned int *) malloc(_len_bytes_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bytes_compl0; _i0++) {
            bytes_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          octeon_update_tx_completion_counters(buf,reqtype,pkts_compl,bytes_compl);
          free(pkts_compl);
          free(bytes_compl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reqtype = 255;
        
          void * buf;
        
          int _len_pkts_compl0 = 65025;
          unsigned int * pkts_compl = (unsigned int *) malloc(_len_pkts_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pkts_compl0; _i0++) {
            pkts_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bytes_compl0 = 65025;
          unsigned int * bytes_compl = (unsigned int *) malloc(_len_bytes_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bytes_compl0; _i0++) {
            bytes_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          octeon_update_tx_completion_counters(buf,reqtype,pkts_compl,bytes_compl);
          free(pkts_compl);
          free(bytes_compl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reqtype = 10;
        
          void * buf;
        
          int _len_pkts_compl0 = 100;
          unsigned int * pkts_compl = (unsigned int *) malloc(_len_pkts_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pkts_compl0; _i0++) {
            pkts_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bytes_compl0 = 100;
          unsigned int * bytes_compl = (unsigned int *) malloc(_len_bytes_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bytes_compl0; _i0++) {
            bytes_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          octeon_update_tx_completion_counters(buf,reqtype,pkts_compl,bytes_compl);
          free(pkts_compl);
          free(bytes_compl);
        
        break;
    }
    // empty
    case 3:
    {
          int reqtype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * buf;
        
          int _len_pkts_compl0 = 1;
          unsigned int * pkts_compl = (unsigned int *) malloc(_len_pkts_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pkts_compl0; _i0++) {
            pkts_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bytes_compl0 = 1;
          unsigned int * bytes_compl = (unsigned int *) malloc(_len_bytes_compl0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bytes_compl0; _i0++) {
            bytes_compl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          octeon_update_tx_completion_counters(buf,reqtype,pkts_compl,bytes_compl);
          free(pkts_compl);
          free(bytes_compl);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
