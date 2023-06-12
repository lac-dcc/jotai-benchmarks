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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct fc_disc {void* priv; } ;
struct TYPE_2__ {scalar_t__ disc_recv_req; scalar_t__ disc_stop_final; scalar_t__ disc_stop; scalar_t__ disc_start; } ;
struct fc_lport {struct fc_disc disc; TYPE_1__ tt; } ;

/* Variables and functions */
 scalar_t__ fc_disc_recv_req ; 
 scalar_t__ fc_disc_start ; 
 scalar_t__ fc_disc_stop ; 
 scalar_t__ fc_disc_stop_final ; 

void fc_disc_config(struct fc_lport *lport, void *priv)
{
	struct fc_disc *disc;

	if (!lport->tt.disc_start)
		lport->tt.disc_start = fc_disc_start;

	if (!lport->tt.disc_stop)
		lport->tt.disc_stop = fc_disc_stop;

	if (!lport->tt.disc_stop_final)
		lport->tt.disc_stop_final = fc_disc_stop_final;

	if (!lport->tt.disc_recv_req)
		lport->tt.disc_recv_req = fc_disc_recv_req;

	disc = &lport->disc;

	disc->priv = priv;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_lport0 = 65025;
          struct fc_lport * lport = (struct fc_lport *) malloc(_len_lport0*sizeof(struct fc_lport));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            
          lport[_i0].tt.disc_recv_req = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_stop_final = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_stop = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * priv;
        
          fc_disc_config(lport,priv);
          free(lport);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_lport0 = 100;
          struct fc_lport * lport = (struct fc_lport *) malloc(_len_lport0*sizeof(struct fc_lport));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            
          lport[_i0].tt.disc_recv_req = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_stop_final = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_stop = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * priv;
        
          fc_disc_config(lport,priv);
          free(lport);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_lport0 = 1;
          struct fc_lport * lport = (struct fc_lport *) malloc(_len_lport0*sizeof(struct fc_lport));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            
          lport[_i0].tt.disc_recv_req = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_stop_final = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_stop = ((-2 * (next_i()%2)) + 1) * next_i();
          lport[_i0].tt.disc_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * priv;
        
          fc_disc_config(lport,priv);
          free(lport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
