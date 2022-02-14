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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  UID ;
struct TYPE_3__ {int profile; int level; } ;
typedef  TYPE_1__ AVCodecParameters ;

/* Variables and functions */
 int /*<<< orphan*/  const* mxf_mpeg2_codec_uls ; 

__attribute__((used)) static const UID *mxf_get_mpeg2_codec_ul(AVCodecParameters *par)
{
    int long_gop = 1;

    if (par->profile == 4) { // Main
        if (par->level == 8) // Main
            return &mxf_mpeg2_codec_uls[0+long_gop];
        else if (par->level == 4) // High
            return &mxf_mpeg2_codec_uls[4+long_gop];
        else if (par->level == 6) // High 14
            return &mxf_mpeg2_codec_uls[8+long_gop];
    } else if (par->profile == 0) { // 422
        if (par->level == 5) // Main
            return &mxf_mpeg2_codec_uls[2+long_gop];
        else if (par->level == 2) // High
            return &mxf_mpeg2_codec_uls[6+long_gop];
    }
    return NULL;
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
          int _len_par0 = 1;
          struct TYPE_3__ * par = (struct TYPE_3__ *) malloc(_len_par0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par->profile = ((-2 * (next_i()%2)) + 1) * next_i();
        par->level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = mxf_get_mpeg2_codec_ul(par);
          printf("{{other_type}} %p\n", &benchRet); 
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
