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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  tif_seek; void* tif_encodetile; void* tif_encodestrip; void* tif_encoderow; void* tif_decodetile; void* tif_decodestrip; void* tif_decoderow; int /*<<< orphan*/  tif_fixuptags; } ;
typedef  TYPE_1__ TIFF ;

/* Variables and functions */
 int /*<<< orphan*/  DumpFixupTags ; 
 void* DumpModeDecode ; 
 void* DumpModeEncode ; 
 int /*<<< orphan*/  DumpModeSeek ; 

int
TIFFInitDumpMode(TIFF* tif, int scheme)
{
	(void) scheme;
	tif->tif_fixuptags = DumpFixupTags;  
	tif->tif_decoderow = DumpModeDecode;
	tif->tif_decodestrip = DumpModeDecode;
	tif->tif_decodetile = DumpModeDecode;
	tif->tif_encoderow = DumpModeEncode;
	tif->tif_encodestrip = DumpModeEncode;
	tif->tif_encodetile = DumpModeEncode; 
	tif->tif_seek = DumpModeSeek;
	return (1);
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
          int scheme = 100;
          int _len_tif0 = 1;
          struct TYPE_3__ * tif = (struct TYPE_3__ *) malloc(_len_tif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0].tif_seek = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_fixuptags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = TIFFInitDumpMode(tif,scheme);
          printf("%d\n", benchRet); 
          free(tif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
