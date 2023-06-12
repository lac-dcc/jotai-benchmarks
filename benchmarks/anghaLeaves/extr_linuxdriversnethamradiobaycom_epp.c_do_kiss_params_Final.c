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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned char tx_delay; unsigned char ppersist; unsigned char slottime; unsigned char tx_tail; int fulldup; } ;
struct baycom_state {TYPE_1__ ch_params; } ;

/* Variables and functions */
#define  PARAM_FULLDUP 132 
#define  PARAM_PERSIST 131 
#define  PARAM_SLOTTIME 130 
#define  PARAM_TXDELAY 129 
#define  PARAM_TXTAIL 128 

__attribute__((used)) static inline void do_kiss_params(struct baycom_state *bc,
				  unsigned char *data, unsigned long len)
{

#ifdef KISS_VERBOSE
#define PKP(a,b) printk(KERN_INFO "baycomm_epp: channel params: " a "\n", b)
#else /* KISS_VERBOSE */	      
#define PKP(a,b) 
#endif /* KISS_VERBOSE */	      

	if (len < 2)
		return;
	switch(data[0]) {
	case PARAM_TXDELAY:
		bc->ch_params.tx_delay = data[1];
		PKP("TX delay = %ums", 10 * bc->ch_params.tx_delay);
		break;
	case PARAM_PERSIST:   
		bc->ch_params.ppersist = data[1];
		PKP("p persistence = %u", bc->ch_params.ppersist);
		break;
	case PARAM_SLOTTIME:  
		bc->ch_params.slottime = data[1];
		PKP("slot time = %ums", bc->ch_params.slottime);
		break;
	case PARAM_TXTAIL:    
		bc->ch_params.tx_tail = data[1];
		PKP("TX tail = %ums", bc->ch_params.tx_tail);
		break;
	case PARAM_FULLDUP:   
		bc->ch_params.fulldup = !!data[1];
		PKP("%s duplex", bc->ch_params.fulldup ? "full" : "half");
		break;
	default:
		break;
	}
#undef PKP
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
          unsigned long len = 100;
        
          int _len_bc0 = 1;
          struct baycom_state * bc = (struct baycom_state *) malloc(_len_bc0*sizeof(struct baycom_state));
          for(int _i0 = 0; _i0 < _len_bc0; _i0++) {
              bc[_i0].ch_params.tx_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.ppersist = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.slottime = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.tx_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.fulldup = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_data0 = 1;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_kiss_params(bc,data,len);
          free(bc);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
        
          int _len_bc0 = 65025;
          struct baycom_state * bc = (struct baycom_state *) malloc(_len_bc0*sizeof(struct baycom_state));
          for(int _i0 = 0; _i0 < _len_bc0; _i0++) {
              bc[_i0].ch_params.tx_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.ppersist = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.slottime = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.tx_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.fulldup = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_data0 = 65025;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_kiss_params(bc,data,len);
          free(bc);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
        
          int _len_bc0 = 100;
          struct baycom_state * bc = (struct baycom_state *) malloc(_len_bc0*sizeof(struct baycom_state));
          for(int _i0 = 0; _i0 < _len_bc0; _i0++) {
              bc[_i0].ch_params.tx_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.ppersist = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.slottime = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.tx_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.fulldup = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_data0 = 100;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_kiss_params(bc,data,len);
          free(bc);
          free(data);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bc0 = 1;
          struct baycom_state * bc = (struct baycom_state *) malloc(_len_bc0*sizeof(struct baycom_state));
          for(int _i0 = 0; _i0 < _len_bc0; _i0++) {
              bc[_i0].ch_params.tx_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.ppersist = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.slottime = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.tx_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          bc[_i0].ch_params.fulldup = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_data0 = 1;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_kiss_params(bc,data,len);
          free(bc);
          free(data);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
