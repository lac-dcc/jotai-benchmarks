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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ddsPF_t ;
struct TYPE_4__ {unsigned int fourCC; } ;
struct TYPE_5__ {TYPE_1__ pixelFormat; } ;
typedef  TYPE_2__ ddsBuffer_t ;

/* Variables and functions */
 int /*<<< orphan*/  DDS_PF_ARGB8888 ; 
 int /*<<< orphan*/  DDS_PF_DXT1 ; 
 int /*<<< orphan*/  DDS_PF_DXT2 ; 
 int /*<<< orphan*/  DDS_PF_DXT3 ; 
 int /*<<< orphan*/  DDS_PF_DXT4 ; 
 int /*<<< orphan*/  DDS_PF_DXT5 ; 
 int /*<<< orphan*/  DDS_PF_UNKNOWN ; 

__attribute__((used)) static void DDSDecodePixelFormat( ddsBuffer_t *dds, ddsPF_t *pf ){
	unsigned int fourCC;


	/* dummy check */
	if ( dds == NULL || pf == NULL ) {
		return;
	}

	/* extract fourCC */
	fourCC = dds->pixelFormat.fourCC;

	/* test it */
	if ( fourCC == 0 ) {
		*pf = DDS_PF_ARGB8888;
	}
	else if ( fourCC == *( (unsigned int*) "DXT1" ) ) {
		*pf = DDS_PF_DXT1;
	}
	else if ( fourCC == *( (unsigned int*) "DXT2" ) ) {
		*pf = DDS_PF_DXT2;
	}
	else if ( fourCC == *( (unsigned int*) "DXT3" ) ) {
		*pf = DDS_PF_DXT3;
	}
	else if ( fourCC == *( (unsigned int*) "DXT4" ) ) {
		*pf = DDS_PF_DXT4;
	}
	else if ( fourCC == *( (unsigned int*) "DXT5" ) ) {
		*pf = DDS_PF_DXT5;
	}
	else{
		*pf = DDS_PF_UNKNOWN;
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

    // big-arr
    case 0:
    {
          int _len_dds0 = 1;
          struct TYPE_5__ * dds = (struct TYPE_5__ *) malloc(_len_dds0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dds0; _i0++) {
            dds->pixelFormat.fourCC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf0 = 65025;
          int * pf = (int *) malloc(_len_pf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DDSDecodePixelFormat(dds,pf);
          free(dds);
          free(pf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
