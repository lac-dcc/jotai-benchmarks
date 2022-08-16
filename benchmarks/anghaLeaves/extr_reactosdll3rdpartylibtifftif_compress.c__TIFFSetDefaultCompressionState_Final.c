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
struct TYPE_3__ {int tif_flags; int /*<<< orphan*/  tif_deftilesize; int /*<<< orphan*/  tif_defstripsize; void* tif_cleanup; int /*<<< orphan*/  tif_seek; void* tif_close; int /*<<< orphan*/  tif_encodetile; int /*<<< orphan*/  tif_encodestrip; int /*<<< orphan*/  tif_encoderow; void* tif_postencode; void* tif_preencode; void* tif_setupencode; void* tif_encodestatus; int /*<<< orphan*/  tif_decodetile; int /*<<< orphan*/  tif_decodestrip; int /*<<< orphan*/  tif_decoderow; void* tif_predecode; void* tif_setupdecode; void* tif_decodestatus; int /*<<< orphan*/  tif_fixuptags; } ;
typedef  TYPE_1__ TIFF ;

/* Variables and functions */
 int TIFF_NOBITREV ; 
 int TIFF_NOREADRAW ; 
 void* TRUE ; 
 int /*<<< orphan*/  _TIFFDefaultStripSize ; 
 int /*<<< orphan*/  _TIFFDefaultTileSize ; 
 int /*<<< orphan*/  _TIFFNoFixupTags ; 
 void* _TIFFNoPreCode ; 
 int /*<<< orphan*/  _TIFFNoRowDecode ; 
 int /*<<< orphan*/  _TIFFNoRowEncode ; 
 int /*<<< orphan*/  _TIFFNoSeek ; 
 int /*<<< orphan*/  _TIFFNoStripDecode ; 
 int /*<<< orphan*/  _TIFFNoStripEncode ; 
 int /*<<< orphan*/  _TIFFNoTileDecode ; 
 int /*<<< orphan*/  _TIFFNoTileEncode ; 
 void* _TIFFtrue ; 
 void* _TIFFvoid ; 

void
_TIFFSetDefaultCompressionState(TIFF* tif)
{
	tif->tif_fixuptags = _TIFFNoFixupTags; 
	tif->tif_decodestatus = TRUE;
	tif->tif_setupdecode = _TIFFtrue;
	tif->tif_predecode = _TIFFNoPreCode;
	tif->tif_decoderow = _TIFFNoRowDecode;  
	tif->tif_decodestrip = _TIFFNoStripDecode;
	tif->tif_decodetile = _TIFFNoTileDecode;  
	tif->tif_encodestatus = TRUE;
	tif->tif_setupencode = _TIFFtrue;
	tif->tif_preencode = _TIFFNoPreCode;
	tif->tif_postencode = _TIFFtrue;
	tif->tif_encoderow = _TIFFNoRowEncode;
	tif->tif_encodestrip = _TIFFNoStripEncode;  
	tif->tif_encodetile = _TIFFNoTileEncode;  
	tif->tif_close = _TIFFvoid;
	tif->tif_seek = _TIFFNoSeek;
	tif->tif_cleanup = _TIFFvoid;
	tif->tif_defstripsize = _TIFFDefaultStripSize;
	tif->tif_deftilesize = _TIFFDefaultTileSize;
	tif->tif_flags &= ~(TIFF_NOBITREV|TIFF_NOREADRAW);
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
          int _len_tif0 = 1;
          struct TYPE_3__ * tif = (struct TYPE_3__ *) malloc(_len_tif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0].tif_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_deftilesize = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_defstripsize = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_seek = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_encodetile = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_encodestrip = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_encoderow = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_decodetile = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_decodestrip = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_decoderow = ((-2 * (next_i()%2)) + 1) * next_i();
        tif[_i0].tif_fixuptags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _TIFFSetDefaultCompressionState(tif);
          free(tif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
