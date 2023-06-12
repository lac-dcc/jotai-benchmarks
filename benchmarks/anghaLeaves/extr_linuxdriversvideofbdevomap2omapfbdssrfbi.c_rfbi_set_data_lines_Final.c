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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int data_lines; } ;

/* Variables and functions */
 TYPE_1__ rfbi ; 

__attribute__((used)) static void rfbi_set_data_lines(struct omap_dss_device *dssdev, int data_lines)
{
	rfbi.data_lines = data_lines;
}

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
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int data_lines = 100;
        
          int _len_dssdev0 = 1;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
              dssdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rfbi_set_data_lines(dssdev,data_lines);
          free(dssdev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int data_lines = 255;
        
          int _len_dssdev0 = 65025;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
              dssdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rfbi_set_data_lines(dssdev,data_lines);
          free(dssdev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int data_lines = 10;
        
          int _len_dssdev0 = 100;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
              dssdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rfbi_set_data_lines(dssdev,data_lines);
          free(dssdev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int data_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dssdev0 = 1;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
              dssdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rfbi_set_data_lines(dssdev,data_lines);
          free(dssdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
