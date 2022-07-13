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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ hour_spec_min; } ;

/* Variables and functions */
 TYPE_1__ conf ; 

__attribute__((used)) static void
parse_time_specificity_string (char *hmark, char *ftime)
{
  /* tenth of a minute specificity - e.g., 18:2 */
  if (conf.hour_spec_min && hmark[1] != '\0') {
    hmark[2] = '\0';
    return;
  }

  /* hour specificity (default) */
  if ((hmark - ftime) > 0)
    *hmark = '\0';
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
          int _len_hmark0 = 1;
          char * hmark = (char *) malloc(_len_hmark0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hmark0; _i0++) {
            hmark[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ftime0 = 1;
          char * ftime = (char *) malloc(_len_ftime0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ftime0; _i0++) {
            ftime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_time_specificity_string(hmark,ftime);
          free(hmark);
          free(ftime);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hmark0 = 65025;
          char * hmark = (char *) malloc(_len_hmark0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hmark0; _i0++) {
            hmark[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ftime0 = 65025;
          char * ftime = (char *) malloc(_len_ftime0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ftime0; _i0++) {
            ftime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_time_specificity_string(hmark,ftime);
          free(hmark);
          free(ftime);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hmark0 = 100;
          char * hmark = (char *) malloc(_len_hmark0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hmark0; _i0++) {
            hmark[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ftime0 = 100;
          char * ftime = (char *) malloc(_len_ftime0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ftime0; _i0++) {
            ftime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_time_specificity_string(hmark,ftime);
          free(hmark);
          free(ftime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
