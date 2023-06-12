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
struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {scalar_t__* speakers; } ;

/* Variables and functions */
 int SNDRV_CTL_TLVT_CHMAP_PAIRED ; 

__attribute__((used)) static int atihdmi_paired_chmap_cea_alloc_validate_get_type(
		struct hdac_chmap *chmap,
		struct hdac_cea_channel_speaker_allocation *cap,
		int channels)
{
	int c;

	/*
	 * Pre-rev3 ATI/AMD codecs operate in a paired channel mode, so
	 * we need to take that into account (a single channel may take 2
	 * channel slots if we need to carry a silent channel next to it).
	 * On Rev3+ AMD codecs this function is not used.
	 */
	int chanpairs = 0;

	/* We only produce even-numbered channel count TLVs */
	if ((channels % 2) != 0)
		return -1;

	for (c = 0; c < 7; c += 2) {
		if (cap->speakers[c] || cap->speakers[c+1])
			chanpairs++;
	}

	if (chanpairs * 2 != channels)
		return -1;

	return SNDRV_CTL_TLVT_CHMAP_PAIRED;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int channels = 255;
        
          int _len_chmap0 = 65025;
          struct hdac_chmap * chmap = (struct hdac_chmap *) malloc(_len_chmap0*sizeof(struct hdac_chmap));
          for(int _i0 = 0; _i0 < _len_chmap0; _i0++) {
              chmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cap0 = 65025;
          struct hdac_cea_channel_speaker_allocation * cap = (struct hdac_cea_channel_speaker_allocation *) malloc(_len_cap0*sizeof(struct hdac_cea_channel_speaker_allocation));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
              int _len_cap__i0__speakers0 = 1;
          cap[_i0].speakers = (long *) malloc(_len_cap__i0__speakers0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cap__i0__speakers0; _j0++) {
            cap[_i0].speakers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = atihdmi_paired_chmap_cea_alloc_validate_get_type(chmap,cap,channels);
          printf("%d\n", benchRet); 
          free(chmap);
          for(int _aux = 0; _aux < _len_cap0; _aux++) {
          free(cap[_aux].speakers);
          }
          free(cap);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chmap0 = 1;
          struct hdac_chmap * chmap = (struct hdac_chmap *) malloc(_len_chmap0*sizeof(struct hdac_chmap));
          for(int _i0 = 0; _i0 < _len_chmap0; _i0++) {
              chmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cap0 = 1;
          struct hdac_cea_channel_speaker_allocation * cap = (struct hdac_cea_channel_speaker_allocation *) malloc(_len_cap0*sizeof(struct hdac_cea_channel_speaker_allocation));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
              int _len_cap__i0__speakers0 = 1;
          cap[_i0].speakers = (long *) malloc(_len_cap__i0__speakers0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cap__i0__speakers0; _j0++) {
            cap[_i0].speakers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = atihdmi_paired_chmap_cea_alloc_validate_get_type(chmap,cap,channels);
          printf("%d\n", benchRet); 
          free(chmap);
          for(int _aux = 0; _aux < _len_cap0; _aux++) {
          free(cap[_aux].speakers);
          }
          free(cap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
