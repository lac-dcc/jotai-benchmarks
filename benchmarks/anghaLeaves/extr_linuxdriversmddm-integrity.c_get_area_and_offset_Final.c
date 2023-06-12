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
struct dm_integrity_c {TYPE_1__* sb; int /*<<< orphan*/  meta_dev; } ;
typedef  unsigned int sector_t ;
typedef  unsigned int __u8 ;
struct TYPE_2__ {unsigned int log2_interleave_sectors; } ;

/* Variables and functions */

__attribute__((used)) static void get_area_and_offset(struct dm_integrity_c *ic, sector_t data_sector,
				sector_t *area, sector_t *offset)
{
	if (!ic->meta_dev) {
		__u8 log2_interleave_sectors = ic->sb->log2_interleave_sectors;
		*area = data_sector >> log2_interleave_sectors;
		*offset = (unsigned)data_sector & ((1U << log2_interleave_sectors) - 1);
	} else {
		*area = 0;
		*offset = data_sector;
	}
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int data_sector = 100;
        
          int _len_ic0 = 1;
          struct dm_integrity_c * ic = (struct dm_integrity_c *) malloc(_len_ic0*sizeof(struct dm_integrity_c));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__sb0 = 1;
          ic[_i0].sb = (struct TYPE_2__ *) malloc(_len_ic__i0__sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__sb0; _j0++) {
              ic[_i0].sb->log2_interleave_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          ic[_i0].meta_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_area0 = 1;
          unsigned int * area = (unsigned int *) malloc(_len_area0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_area0; _i0++) {
            area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_offset0 = 1;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_area_and_offset(ic,data_sector,area,offset);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].sb);
          }
          free(ic);
          free(area);
          free(offset);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int data_sector = 255;
        
          int _len_ic0 = 65025;
          struct dm_integrity_c * ic = (struct dm_integrity_c *) malloc(_len_ic0*sizeof(struct dm_integrity_c));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__sb0 = 1;
          ic[_i0].sb = (struct TYPE_2__ *) malloc(_len_ic__i0__sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__sb0; _j0++) {
              ic[_i0].sb->log2_interleave_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          ic[_i0].meta_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_area0 = 65025;
          unsigned int * area = (unsigned int *) malloc(_len_area0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_area0; _i0++) {
            area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_offset0 = 65025;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_area_and_offset(ic,data_sector,area,offset);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].sb);
          }
          free(ic);
          free(area);
          free(offset);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int data_sector = 10;
        
          int _len_ic0 = 100;
          struct dm_integrity_c * ic = (struct dm_integrity_c *) malloc(_len_ic0*sizeof(struct dm_integrity_c));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__sb0 = 1;
          ic[_i0].sb = (struct TYPE_2__ *) malloc(_len_ic__i0__sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__sb0; _j0++) {
              ic[_i0].sb->log2_interleave_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          ic[_i0].meta_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_area0 = 100;
          unsigned int * area = (unsigned int *) malloc(_len_area0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_area0; _i0++) {
            area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_offset0 = 100;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_area_and_offset(ic,data_sector,area,offset);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].sb);
          }
          free(ic);
          free(area);
          free(offset);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int data_sector = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ic0 = 1;
          struct dm_integrity_c * ic = (struct dm_integrity_c *) malloc(_len_ic0*sizeof(struct dm_integrity_c));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__sb0 = 1;
          ic[_i0].sb = (struct TYPE_2__ *) malloc(_len_ic__i0__sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__sb0; _j0++) {
              ic[_i0].sb->log2_interleave_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          ic[_i0].meta_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_area0 = 1;
          unsigned int * area = (unsigned int *) malloc(_len_area0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_area0; _i0++) {
            area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_offset0 = 1;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_area_and_offset(ic,data_sector,area,offset);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].sb);
          }
          free(ic);
          free(area);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
