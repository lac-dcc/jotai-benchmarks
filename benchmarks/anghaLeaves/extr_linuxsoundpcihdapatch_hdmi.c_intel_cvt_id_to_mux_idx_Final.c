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
struct hdmi_spec {int num_cvts; scalar_t__* cvt_nids; } ;
typedef  scalar_t__ hda_nid_t ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int intel_cvt_id_to_mux_idx(struct hdmi_spec *spec,
			hda_nid_t cvt_nid)
{
	int i;

	for (i = 0; i < spec->num_cvts; i++)
		if (spec->cvt_nids[i] == cvt_nid)
			return i;
	return -EINVAL;
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
          long cvt_nid = 100;
          int _len_spec0 = 1;
          struct hdmi_spec * spec = (struct hdmi_spec *) malloc(_len_spec0*sizeof(struct hdmi_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
            spec[_i0].num_cvts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spec__i0__cvt_nids0 = 1;
          spec[_i0].cvt_nids = (long *) malloc(_len_spec__i0__cvt_nids0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_spec__i0__cvt_nids0; _j0++) {
            spec[_i0].cvt_nids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = intel_cvt_id_to_mux_idx(spec,cvt_nid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spec0; _aux++) {
          free(spec[_aux].cvt_nids);
          }
          free(spec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
