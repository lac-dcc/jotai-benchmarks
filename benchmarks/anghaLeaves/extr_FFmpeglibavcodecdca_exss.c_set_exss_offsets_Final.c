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
struct TYPE_3__ {int asset_offset; int asset_size; int extension_mask; int core_offset; int core_size; int xbr_offset; int xbr_size; int xxch_offset; int xxch_size; int x96_offset; int x96_size; int lbr_offset; int lbr_size; int xll_offset; int xll_size; } ;
typedef  TYPE_1__ DCAExssAsset ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 
 int DCA_EXSS_CORE ; 
 int DCA_EXSS_LBR ; 
 int DCA_EXSS_X96 ; 
 int DCA_EXSS_XBR ; 
 int DCA_EXSS_XLL ; 
 int DCA_EXSS_XXCH ; 

__attribute__((used)) static int set_exss_offsets(DCAExssAsset *asset)
{
    int offs = asset->asset_offset;
    int size = asset->asset_size;

    if (asset->extension_mask & DCA_EXSS_CORE) {
        asset->core_offset = offs;
        if (asset->core_size > size)
            return AVERROR_INVALIDDATA;
        offs += asset->core_size;
        size -= asset->core_size;
    }

    if (asset->extension_mask & DCA_EXSS_XBR) {
        asset->xbr_offset = offs;
        if (asset->xbr_size > size)
            return AVERROR_INVALIDDATA;
        offs += asset->xbr_size;
        size -= asset->xbr_size;
    }

    if (asset->extension_mask & DCA_EXSS_XXCH) {
        asset->xxch_offset = offs;
        if (asset->xxch_size > size)
            return AVERROR_INVALIDDATA;
        offs += asset->xxch_size;
        size -= asset->xxch_size;
    }

    if (asset->extension_mask & DCA_EXSS_X96) {
        asset->x96_offset = offs;
        if (asset->x96_size > size)
            return AVERROR_INVALIDDATA;
        offs += asset->x96_size;
        size -= asset->x96_size;
    }

    if (asset->extension_mask & DCA_EXSS_LBR) {
        asset->lbr_offset = offs;
        if (asset->lbr_size > size)
            return AVERROR_INVALIDDATA;
        offs += asset->lbr_size;
        size -= asset->lbr_size;
    }

    if (asset->extension_mask & DCA_EXSS_XLL) {
        asset->xll_offset = offs;
        if (asset->xll_size > size)
            return AVERROR_INVALIDDATA;
        offs += asset->xll_size;
        size -= asset->xll_size;
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
          int _len_asset0 = 1;
          struct TYPE_3__ * asset = (struct TYPE_3__ *) malloc(_len_asset0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asset0; _i0++) {
            asset[_i0].asset_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].asset_size = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].extension_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].core_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].core_size = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].xbr_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].xbr_size = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].xxch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].xxch_size = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].x96_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].x96_size = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].lbr_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].lbr_size = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].xll_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        asset[_i0].xll_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_exss_offsets(asset);
          printf("%d\n", benchRet); 
          free(asset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
