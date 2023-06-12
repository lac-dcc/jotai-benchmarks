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
struct TYPE_2__ {int client; int port; } ;
struct snd_seq_event {TYPE_1__ dest; int /*<<< orphan*/  source; int /*<<< orphan*/  queue; } ;
struct seq_oss_devinfo {int /*<<< orphan*/  addr; int /*<<< orphan*/  queue; } ;

/* Variables and functions */

__attribute__((used)) static inline void
snd_seq_oss_fill_addr(struct seq_oss_devinfo *dp, struct snd_seq_event *ev,
		     int dest_client, int dest_port)
{
	ev->queue = dp->queue;
	ev->source = dp->addr;
	ev->dest.client = dest_client;
	ev->dest.port = dest_port;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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

          int dest_client = 100;
        
          int dest_port = 100;
        
          int _len_dp0 = 1;
          struct seq_oss_devinfo * dp = (struct seq_oss_devinfo *) malloc(_len_dp0*sizeof(struct seq_oss_devinfo));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
              dp[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          dp[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ev0 = 1;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].dest.client = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].dest.port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ev[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_oss_fill_addr(dp,ev,dest_client,dest_port);
          free(dp);
          free(ev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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

          int dest_client = 255;
        
          int dest_port = 255;
        
          int _len_dp0 = 65025;
          struct seq_oss_devinfo * dp = (struct seq_oss_devinfo *) malloc(_len_dp0*sizeof(struct seq_oss_devinfo));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
              dp[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          dp[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ev0 = 65025;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].dest.client = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].dest.port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ev[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_oss_fill_addr(dp,ev,dest_client,dest_port);
          free(dp);
          free(ev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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

          int dest_client = 10;
        
          int dest_port = 10;
        
          int _len_dp0 = 100;
          struct seq_oss_devinfo * dp = (struct seq_oss_devinfo *) malloc(_len_dp0*sizeof(struct seq_oss_devinfo));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
              dp[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          dp[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ev0 = 100;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].dest.client = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].dest.port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ev[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_oss_fill_addr(dp,ev,dest_client,dest_port);
          free(dp);
          free(ev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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

          int dest_client = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dest_port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dp0 = 1;
          struct seq_oss_devinfo * dp = (struct seq_oss_devinfo *) malloc(_len_dp0*sizeof(struct seq_oss_devinfo));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
              dp[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          dp[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ev0 = 1;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].dest.client = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].dest.port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ev[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_oss_fill_addr(dp,ev,dest_client,dest_port);
          free(dp);
          free(ev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
