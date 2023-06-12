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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {unsigned int sb_preconn_hiwat; } ;
struct TYPE_3__ {unsigned int sb_preconn_hiwat; } ;
struct socket {TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;

/* Variables and functions */

void
soreserve_preconnect(struct socket *so, unsigned int pre_cc)
{
	/* As of now, same bytes for both preconnect read and write */
	so->so_snd.sb_preconn_hiwat = pre_cc;
	so->so_rcv.sb_preconn_hiwat = pre_cc;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int pre_cc = 100;
        
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_rcv.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          so[_i0].so_snd.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          soreserve_preconnect(so,pre_cc);
          free(so);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int pre_cc = 255;
        
          int _len_so0 = 65025;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_rcv.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          so[_i0].so_snd.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          soreserve_preconnect(so,pre_cc);
          free(so);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int pre_cc = 10;
        
          int _len_so0 = 100;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_rcv.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          so[_i0].so_snd.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          soreserve_preconnect(so,pre_cc);
          free(so);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int pre_cc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_rcv.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          so[_i0].so_snd.sb_preconn_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          soreserve_preconnect(so,pre_cc);
          free(so);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
