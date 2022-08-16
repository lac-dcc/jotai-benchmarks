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
struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {int ca_index; int channels; } ;

/* Variables and functions */
 int SNDRV_CTL_TLVT_CHMAP_FIXED ; 
 int SNDRV_CTL_TLVT_CHMAP_VAR ; 

__attribute__((used)) static int nvhdmi_chmap_cea_alloc_validate_get_type(struct hdac_chmap *chmap,
		struct hdac_cea_channel_speaker_allocation *cap, int channels)
{
	if (cap->ca_index == 0x00 && channels == 2)
		return SNDRV_CTL_TLVT_CHMAP_FIXED;

	/* If the speaker allocation matches the channel count, it is OK. */
	if (cap->channels != channels)
		return -1;

	/* all channels are remappable freely */
	return SNDRV_CTL_TLVT_CHMAP_VAR;
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
          int channels = 100;
          int _len_chmap0 = 1;
          struct hdac_chmap * chmap = (struct hdac_chmap *) malloc(_len_chmap0*sizeof(struct hdac_chmap));
          for(int _i0 = 0; _i0 < _len_chmap0; _i0++) {
            chmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap0 = 1;
          struct hdac_cea_channel_speaker_allocation * cap = (struct hdac_cea_channel_speaker_allocation *) malloc(_len_cap0*sizeof(struct hdac_cea_channel_speaker_allocation));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
            cap[_i0].ca_index = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvhdmi_chmap_cea_alloc_validate_get_type(chmap,cap,channels);
          printf("%d\n", benchRet); 
          free(chmap);
          free(cap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
