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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int ttag_t ;
struct TYPE_4__ {int td_compression; } ;
struct TYPE_5__ {TYPE_1__ tif_dir; } ;
typedef  TYPE_2__ TIFF ;

/* Variables and functions */
#define  COMPRESSION_ADOBE_DEFLATE 162 
#define  COMPRESSION_CCITTFAX3 161 
#define  COMPRESSION_CCITTFAX4 160 
#define  COMPRESSION_CCITTRLE 159 
#define  COMPRESSION_CCITTRLEW 158 
#define  COMPRESSION_DEFLATE 157 
#define  COMPRESSION_JBIG 156 
#define  COMPRESSION_JPEG 155 
#define  COMPRESSION_LERC 154 
#define  COMPRESSION_LZMA 153 
#define  COMPRESSION_LZW 152 
#define  COMPRESSION_NEXT 151 
#define  COMPRESSION_OJPEG 150 
#define  COMPRESSION_PACKBITS 149 
#define  COMPRESSION_PIXARLOG 148 
#define  COMPRESSION_SGILOG 147 
#define  COMPRESSION_SGILOG24 146 
#define  COMPRESSION_THUNDERSCAN 145 
#define  COMPRESSION_WEBP 144 
#define  COMPRESSION_ZSTD 143 
#define  TIFFTAG_BADFAXLINES 142 
#define  TIFFTAG_CLEANFAXDATA 141 
#define  TIFFTAG_CONSECUTIVEBADFAXLINES 140 
#define  TIFFTAG_GROUP3OPTIONS 139 
#define  TIFFTAG_GROUP4OPTIONS 138 
#define  TIFFTAG_JPEGACTABLES 137 
#define  TIFFTAG_JPEGDCTABLES 136 
#define  TIFFTAG_JPEGIFBYTECOUNT 135 
#define  TIFFTAG_JPEGIFOFFSET 134 
#define  TIFFTAG_JPEGPROC 133 
#define  TIFFTAG_JPEGQTABLES 132 
#define  TIFFTAG_JPEGRESTARTINTERVAL 131 
#define  TIFFTAG_JPEGTABLES 130 
#define  TIFFTAG_LERC_PARAMETERS 129 
#define  TIFFTAG_PREDICTOR 128 

int
_TIFFCheckFieldIsValidForCodec(TIFF *tif, ttag_t tag)
{
	/* Filter out non-codec specific tags */
	switch (tag) {
	    /* Shared tags */
	    case TIFFTAG_PREDICTOR:
	    /* JPEG tags */
	    case TIFFTAG_JPEGTABLES:
	    /* OJPEG tags */
	    case TIFFTAG_JPEGIFOFFSET:
	    case TIFFTAG_JPEGIFBYTECOUNT:
	    case TIFFTAG_JPEGQTABLES:
	    case TIFFTAG_JPEGDCTABLES:
	    case TIFFTAG_JPEGACTABLES:
	    case TIFFTAG_JPEGPROC:
	    case TIFFTAG_JPEGRESTARTINTERVAL:
	    /* CCITT* */
	    case TIFFTAG_BADFAXLINES:
	    case TIFFTAG_CLEANFAXDATA:
	    case TIFFTAG_CONSECUTIVEBADFAXLINES:
	    case TIFFTAG_GROUP3OPTIONS:
	    case TIFFTAG_GROUP4OPTIONS:
	    /* LERC */
	    case TIFFTAG_LERC_PARAMETERS:
		break;
	    default:
		return 1;
	}
	/* Check if codec specific tags are allowed for the current
	 * compression scheme (codec) */
	switch (tif->tif_dir.td_compression) {
	    case COMPRESSION_LZW:
		if (tag == TIFFTAG_PREDICTOR)
		    return 1;
		break;
	    case COMPRESSION_PACKBITS:
		/* No codec-specific tags */
		break;
	    case COMPRESSION_THUNDERSCAN:
		/* No codec-specific tags */
		break;
	    case COMPRESSION_NEXT:
		/* No codec-specific tags */
		break;
	    case COMPRESSION_JPEG:
		if (tag == TIFFTAG_JPEGTABLES)
		    return 1;
		break;
	    case COMPRESSION_OJPEG:
		switch (tag) {
		    case TIFFTAG_JPEGIFOFFSET:
		    case TIFFTAG_JPEGIFBYTECOUNT:
		    case TIFFTAG_JPEGQTABLES:
		    case TIFFTAG_JPEGDCTABLES:
		    case TIFFTAG_JPEGACTABLES:
		    case TIFFTAG_JPEGPROC:
		    case TIFFTAG_JPEGRESTARTINTERVAL:
			return 1;
		}
		break;
	    case COMPRESSION_CCITTRLE:
	    case COMPRESSION_CCITTRLEW:
	    case COMPRESSION_CCITTFAX3:
	    case COMPRESSION_CCITTFAX4:
		switch (tag) {
		    case TIFFTAG_BADFAXLINES:
		    case TIFFTAG_CLEANFAXDATA:
		    case TIFFTAG_CONSECUTIVEBADFAXLINES:
			return 1;
		    case TIFFTAG_GROUP3OPTIONS:
			if (tif->tif_dir.td_compression == COMPRESSION_CCITTFAX3)
			    return 1;
			break;
		    case TIFFTAG_GROUP4OPTIONS:
			if (tif->tif_dir.td_compression == COMPRESSION_CCITTFAX4)
			    return 1;
			break;
		}
		break;
	    case COMPRESSION_JBIG:
		/* No codec-specific tags */
		break;
	    case COMPRESSION_DEFLATE:
	    case COMPRESSION_ADOBE_DEFLATE:
		if (tag == TIFFTAG_PREDICTOR)
		    return 1;
		break;
	   case COMPRESSION_PIXARLOG:
		if (tag == TIFFTAG_PREDICTOR)
		    return 1;
		break;
	    case COMPRESSION_SGILOG:
	    case COMPRESSION_SGILOG24:
		/* No codec-specific tags */
		break;
	    case COMPRESSION_LZMA:
		if (tag == TIFFTAG_PREDICTOR)
		    return 1;
		break;
	    case COMPRESSION_ZSTD:
		if (tag == TIFFTAG_PREDICTOR)
		    return 1;
		break;
	    case COMPRESSION_LERC:
		if (tag == TIFFTAG_LERC_PARAMETERS)
		    return 1;
		break;
		  case COMPRESSION_WEBP:
		if (tag == TIFFTAG_PREDICTOR)
				return 1;
		break;
	}
	return 0;
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
          int tag = 100;
          int _len_tif0 = 1;
          struct TYPE_5__ * tif = (struct TYPE_5__ *) malloc(_len_tif0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0].tif_dir.td_compression = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _TIFFCheckFieldIsValidForCodec(tif,tag);
          printf("%d\n", benchRet); 
          free(tif);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int tag = 10;
          int _len_tif0 = 100;
          struct TYPE_5__ * tif = (struct TYPE_5__ *) malloc(_len_tif0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
            tif[_i0].tif_dir.td_compression = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _TIFFCheckFieldIsValidForCodec(tif,tag);
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
