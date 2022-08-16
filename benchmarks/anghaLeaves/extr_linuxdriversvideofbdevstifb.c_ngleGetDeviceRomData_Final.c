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
       1            big-arr-10x\n\
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
struct stifb_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void 
ngleGetDeviceRomData(struct stifb_info *fb)
{
#if 0
XXX: FIXME: !!!
	int	*pBytePerLongDevDepData;/* data byte == LSB */
	int 	*pRomTable;
	NgleDevRomData	*pPackedDevRomData;
	int	sizePackedDevRomData = sizeof(*pPackedDevRomData);
	char	*pCard8;
	int	i;
	char	*mapOrigin = NULL;
    
	int romTableIdx;

	pPackedDevRomData = fb->ngle_rom;

	SETUP_HW(fb);
	if (fb->id == S9000_ID_ARTIST) {
		pPackedDevRomData->cursor_pipeline_delay = 4;
		pPackedDevRomData->video_interleaves     = 4;
	} else {
		/* Get pointer to unpacked byte/long data in ROM */
		pBytePerLongDevDepData = fb->sti->regions[NGLEDEVDEPROM_CRT_REGION];

		/* Tomcat supports several resolutions: 1280x1024, 1024x768, 640x480 */
		if (fb->id == S9000_ID_TOMCAT)
	{
	    /*  jump to the correct ROM table  */
	    GET_ROMTABLE_INDEX(romTableIdx);
	    while  (romTableIdx > 0)
	    {
		pCard8 = (Card8 *) pPackedDevRomData;
		pRomTable = pBytePerLongDevDepData;
		/* Pack every fourth byte from ROM into structure */
		for (i = 0; i < sizePackedDevRomData; i++)
		{
		    *pCard8++ = (Card8) (*pRomTable++);
		}

		pBytePerLongDevDepData = (Card32 *)
			((Card8 *) pBytePerLongDevDepData +
			       pPackedDevRomData->sizeof_ngle_data);

		romTableIdx--;
	    }
	}

	pCard8 = (Card8 *) pPackedDevRomData;

	/* Pack every fourth byte from ROM into structure */
	for (i = 0; i < sizePackedDevRomData; i++)
	{
	    *pCard8++ = (Card8) (*pBytePerLongDevDepData++);
	}
    }

    SETUP_FB(fb);
#endif
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
          int _len_fb0 = 1;
          struct stifb_info * fb = (struct stifb_info *) malloc(_len_fb0*sizeof(struct stifb_info));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngleGetDeviceRomData(fb);
          free(fb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fb0 = 100;
          struct stifb_info * fb = (struct stifb_info *) malloc(_len_fb0*sizeof(struct stifb_info));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngleGetDeviceRomData(fb);
          free(fb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
