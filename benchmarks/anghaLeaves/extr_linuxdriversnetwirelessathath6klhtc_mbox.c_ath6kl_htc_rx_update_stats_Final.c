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
struct TYPE_2__ {int /*<<< orphan*/  rx_bundle_lkahd; int /*<<< orphan*/  rx_lkahds; int /*<<< orphan*/  rx_pkts; } ;
struct htc_endpoint {TYPE_1__ ep_st; } ;

/* Variables and functions */

__attribute__((used)) static inline void ath6kl_htc_rx_update_stats(struct htc_endpoint *endpoint,
					      int n_look_ahds)
{
	endpoint->ep_st.rx_pkts++;
	if (n_look_ahds == 1)
		endpoint->ep_st.rx_lkahds++;
	else if (n_look_ahds > 1)
		endpoint->ep_st.rx_bundle_lkahd++;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n_look_ahds = 100;
        
          int _len_endpoint0 = 1;
          struct htc_endpoint * endpoint = (struct htc_endpoint *) malloc(_len_endpoint0*sizeof(struct htc_endpoint));
          for(int _i0 = 0; _i0 < _len_endpoint0; _i0++) {
              endpoint[_i0].ep_st.rx_bundle_lkahd = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_lkahds = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          ath6kl_htc_rx_update_stats(endpoint,n_look_ahds);
          free(endpoint);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n_look_ahds = 255;
        
          int _len_endpoint0 = 65025;
          struct htc_endpoint * endpoint = (struct htc_endpoint *) malloc(_len_endpoint0*sizeof(struct htc_endpoint));
          for(int _i0 = 0; _i0 < _len_endpoint0; _i0++) {
              endpoint[_i0].ep_st.rx_bundle_lkahd = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_lkahds = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          ath6kl_htc_rx_update_stats(endpoint,n_look_ahds);
          free(endpoint);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n_look_ahds = 10;
        
          int _len_endpoint0 = 100;
          struct htc_endpoint * endpoint = (struct htc_endpoint *) malloc(_len_endpoint0*sizeof(struct htc_endpoint));
          for(int _i0 = 0; _i0 < _len_endpoint0; _i0++) {
              endpoint[_i0].ep_st.rx_bundle_lkahd = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_lkahds = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          ath6kl_htc_rx_update_stats(endpoint,n_look_ahds);
          free(endpoint);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int n_look_ahds = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_endpoint0 = 1;
          struct htc_endpoint * endpoint = (struct htc_endpoint *) malloc(_len_endpoint0*sizeof(struct htc_endpoint));
          for(int _i0 = 0; _i0 < _len_endpoint0; _i0++) {
              endpoint[_i0].ep_st.rx_bundle_lkahd = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_lkahds = ((-2 * (next_i()%2)) + 1) * next_i();
          endpoint[_i0].ep_st.rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          ath6kl_htc_rx_update_stats(endpoint,n_look_ahds);
          free(endpoint);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
