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
       0            big-arr-10x\n\
       1            empty\n\
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
struct vc_dmaman {int chan_available; } ;

/* Variables and functions */
 int EIDRM ; 
 int EINVAL ; 

__attribute__((used)) static int vc_dmaman_chan_free(struct vc_dmaman *dmaman, int chan)
{
	if (chan < 0)
		return -EINVAL;

	if ((1 << chan) & dmaman->chan_available)
		return -EIDRM;

	dmaman->chan_available |= (1 << chan);

	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int chan = 10;
        
          int _len_dmaman0 = 100;
          struct vc_dmaman * dmaman = (struct vc_dmaman *) malloc(_len_dmaman0*sizeof(struct vc_dmaman));
          for(int _i0 = 0; _i0 < _len_dmaman0; _i0++) {
              dmaman[_i0].chan_available = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = vc_dmaman_chan_free(dmaman,chan);
          printf("%d\n", benchRet); 
          free(dmaman);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int chan = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dmaman0 = 1;
          struct vc_dmaman * dmaman = (struct vc_dmaman *) malloc(_len_dmaman0*sizeof(struct vc_dmaman));
          for(int _i0 = 0; _i0 < _len_dmaman0; _i0++) {
              dmaman[_i0].chan_available = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = vc_dmaman_chan_free(dmaman,chan);
          printf("%d\n", benchRet); 
          free(dmaman);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
