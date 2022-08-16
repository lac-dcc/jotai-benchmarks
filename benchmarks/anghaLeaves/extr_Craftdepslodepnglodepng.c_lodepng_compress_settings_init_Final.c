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
struct TYPE_3__ {int btype; int use_lz77; int minmatch; int nicematch; int lazymatching; scalar_t__ custom_context; scalar_t__ custom_deflate; scalar_t__ custom_zlib; int /*<<< orphan*/  windowsize; } ;
typedef  TYPE_1__ LodePNGCompressSettings ;

/* Variables and functions */
 int /*<<< orphan*/  DEFAULT_WINDOWSIZE ; 

void lodepng_compress_settings_init(LodePNGCompressSettings* settings)
{
  /*compress with dynamic huffman tree (not in the mathematical sense, just not the predefined one)*/
  settings->btype = 2;
  settings->use_lz77 = 1;
  settings->windowsize = DEFAULT_WINDOWSIZE;
  settings->minmatch = 3;
  settings->nicematch = 128;
  settings->lazymatching = 1;

  settings->custom_zlib = 0;
  settings->custom_deflate = 0;
  settings->custom_context = 0;
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
          int _len_settings0 = 1;
          struct TYPE_3__ * settings = (struct TYPE_3__ *) malloc(_len_settings0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_settings0; _i0++) {
            settings[_i0].btype = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].use_lz77 = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].minmatch = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].nicematch = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].lazymatching = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].custom_context = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].custom_deflate = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].custom_zlib = ((-2 * (next_i()%2)) + 1) * next_i();
        settings[_i0].windowsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lodepng_compress_settings_init(settings);
          free(settings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
