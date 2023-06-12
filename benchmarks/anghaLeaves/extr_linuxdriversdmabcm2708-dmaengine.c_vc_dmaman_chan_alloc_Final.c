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
typedef  int u32 ;
struct vc_dmaman {int chan_available; int* has_feature; } ;

/* Variables and functions */
 int BCM_DMA_FEATURE_COUNT ; 
 int ENOENT ; 

__attribute__((used)) static int vc_dmaman_chan_alloc(struct vc_dmaman *dmaman,
				unsigned required_feature_set)
{
	u32 chans;
	int chan = 0;
	int feature;

	chans = dmaman->chan_available;
	for (feature = 0; feature < BCM_DMA_FEATURE_COUNT; feature++)
		/* select the subset of available channels with the desired
		   features */
		if (required_feature_set & (1 << feature))
			chans &= dmaman->has_feature[feature];

	if (!chans)
		return -ENOENT;

	/* return the ordinal of the first channel in the bitmap */
	while (chans != 0 && (chans & 1) == 0) {
		chans >>= 1;
		chan++;
	}
	/* claim the channel */
	dmaman->chan_available &= ~(1 << chan);

	return chan;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          unsigned int required_feature_set = 100;
        
          int _len_dmaman0 = 1;
          struct vc_dmaman * dmaman = (struct vc_dmaman *) malloc(_len_dmaman0*sizeof(struct vc_dmaman));
          for(int _i0 = 0; _i0 < _len_dmaman0; _i0++) {
              dmaman[_i0].chan_available = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dmaman__i0__has_feature0 = 1;
          dmaman[_i0].has_feature = (int *) malloc(_len_dmaman__i0__has_feature0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dmaman__i0__has_feature0; _j0++) {
            dmaman[_i0].has_feature[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = vc_dmaman_chan_alloc(dmaman,required_feature_set);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmaman0; _aux++) {
          free(dmaman[_aux].has_feature);
          }
          free(dmaman);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          unsigned int required_feature_set = 255;
        
          int _len_dmaman0 = 65025;
          struct vc_dmaman * dmaman = (struct vc_dmaman *) malloc(_len_dmaman0*sizeof(struct vc_dmaman));
          for(int _i0 = 0; _i0 < _len_dmaman0; _i0++) {
              dmaman[_i0].chan_available = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dmaman__i0__has_feature0 = 1;
          dmaman[_i0].has_feature = (int *) malloc(_len_dmaman__i0__has_feature0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dmaman__i0__has_feature0; _j0++) {
            dmaman[_i0].has_feature[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = vc_dmaman_chan_alloc(dmaman,required_feature_set);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmaman0; _aux++) {
          free(dmaman[_aux].has_feature);
          }
          free(dmaman);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          unsigned int required_feature_set = 10;
        
          int _len_dmaman0 = 100;
          struct vc_dmaman * dmaman = (struct vc_dmaman *) malloc(_len_dmaman0*sizeof(struct vc_dmaman));
          for(int _i0 = 0; _i0 < _len_dmaman0; _i0++) {
              dmaman[_i0].chan_available = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dmaman__i0__has_feature0 = 1;
          dmaman[_i0].has_feature = (int *) malloc(_len_dmaman__i0__has_feature0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dmaman__i0__has_feature0; _j0++) {
            dmaman[_i0].has_feature[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = vc_dmaman_chan_alloc(dmaman,required_feature_set);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmaman0; _aux++) {
          free(dmaman[_aux].has_feature);
          }
          free(dmaman);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          unsigned int required_feature_set = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dmaman0 = 1;
          struct vc_dmaman * dmaman = (struct vc_dmaman *) malloc(_len_dmaman0*sizeof(struct vc_dmaman));
          for(int _i0 = 0; _i0 < _len_dmaman0; _i0++) {
              dmaman[_i0].chan_available = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dmaman__i0__has_feature0 = 1;
          dmaman[_i0].has_feature = (int *) malloc(_len_dmaman__i0__has_feature0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dmaman__i0__has_feature0; _j0++) {
            dmaman[_i0].has_feature[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = vc_dmaman_chan_alloc(dmaman,required_feature_set);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dmaman0; _aux++) {
          free(dmaman[_aux].has_feature);
          }
          free(dmaman);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
