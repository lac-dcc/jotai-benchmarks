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
typedef  int DWORD ;

/* Variables and functions */
 int MCIERR_OUT_OF_MEMORY ; 
 int MCIERR_SEQ_PORT_INUSE ; 
 int MCIERR_SEQ_PORT_MAPNODEVICE ; 
 int MCIERR_SEQ_PORT_NONEXISTENT ; 
#define  MIDIERR_INVALIDSETUP 131 
#define  MMSYSERR_ALLOCATED 130 
#define  MMSYSERR_BADDEVICEID 129 
#define  MMSYSERR_NOMEM 128 

__attribute__((used)) static DWORD mmr2mci(DWORD ret)
{
    switch (ret) {
    case MMSYSERR_ALLOCATED:
	return			MCIERR_SEQ_PORT_INUSE;
    case MMSYSERR_NOMEM:
	return			MCIERR_OUT_OF_MEMORY;
    case MMSYSERR_BADDEVICEID:	/* wine*.drv disabled */
      return			MCIERR_SEQ_PORT_NONEXISTENT;
    case MIDIERR_INVALIDSETUP:	/* from midimap.dll without snd-seq module  */
	return			MCIERR_SEQ_PORT_MAPNODEVICE;
    default:
	return ret;
    }
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
          int ret = 100;
          int benchRet = mmr2mci(ret);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ret = 255;
          int benchRet = mmr2mci(ret);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ret = 10;
          int benchRet = mmr2mci(ret);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
