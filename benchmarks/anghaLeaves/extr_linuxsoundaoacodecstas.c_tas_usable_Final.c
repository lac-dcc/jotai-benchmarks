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
struct transfer_info {int dummy; } ;
struct codec_info_item {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int tas_usable(struct codec_info_item *cii,
		      struct transfer_info *ti,
		      struct transfer_info *out)
{
	return 1;
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
          int _len_cii0 = 1;
          struct codec_info_item * cii = (struct codec_info_item *) malloc(_len_cii0*sizeof(struct codec_info_item));
          for(int _i0 = 0; _i0 < _len_cii0; _i0++) {
            cii[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ti0 = 1;
          struct transfer_info * ti = (struct transfer_info *) malloc(_len_ti0*sizeof(struct transfer_info));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
            ti[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          struct transfer_info * out = (struct transfer_info *) malloc(_len_out0*sizeof(struct transfer_info));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tas_usable(cii,ti,out);
          printf("%d\n", benchRet); 
          free(cii);
          free(ti);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
