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
typedef  enum mp_chroma_location { ____Placeholder_mp_chroma_location } mp_chroma_location ;

/* Variables and functions */
 int AVCHROMA_LOC_CENTER ; 
 int AVCHROMA_LOC_LEFT ; 
 int AVCHROMA_LOC_UNSPECIFIED ; 
#define  MP_CHROMA_CENTER 129 
#define  MP_CHROMA_LEFT 128 

int mp_chroma_location_to_av(enum mp_chroma_location mploc)
{
    switch (mploc) {
    case MP_CHROMA_LEFT:                return AVCHROMA_LOC_LEFT;
    case MP_CHROMA_CENTER:              return AVCHROMA_LOC_CENTER;
    default:                            return AVCHROMA_LOC_UNSPECIFIED;
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
          enum mp_chroma_location mploc = 0;
          int benchRet = mp_chroma_location_to_av(mploc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
