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
struct vml_info {unsigned int num_areas; unsigned long vram_start; TYPE_1__* vram; } ;
struct TYPE_2__ {unsigned long phys; unsigned long size; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int vmlfb_vram_offset(struct vml_info *vinfo, unsigned long offset)
{
	unsigned long aoffset;
	unsigned i;

	for (i = 0; i < vinfo->num_areas; ++i) {
		aoffset = offset - (vinfo->vram[i].phys - vinfo->vram_start);

		if (aoffset < vinfo->vram[i].size) {
			return 0;
		}
	}

	return -EINVAL;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned long offset = 100;
        
          int _len_vinfo0 = 1;
          struct vml_info * vinfo = (struct vml_info *) malloc(_len_vinfo0*sizeof(struct vml_info));
          for(int _i0 = 0; _i0 < _len_vinfo0; _i0++) {
              vinfo[_i0].num_areas = ((-2 * (next_i()%2)) + 1) * next_i();
          vinfo[_i0].vram_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vinfo__i0__vram0 = 1;
          vinfo[_i0].vram = (struct TYPE_2__ *) malloc(_len_vinfo__i0__vram0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vinfo__i0__vram0; _j0++) {
              vinfo[_i0].vram->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          vinfo[_i0].vram->size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = vmlfb_vram_offset(vinfo,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vinfo0; _aux++) {
          free(vinfo[_aux].vram);
          }
          free(vinfo);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned long offset = 255;
        
          int _len_vinfo0 = 65025;
          struct vml_info * vinfo = (struct vml_info *) malloc(_len_vinfo0*sizeof(struct vml_info));
          for(int _i0 = 0; _i0 < _len_vinfo0; _i0++) {
              vinfo[_i0].num_areas = ((-2 * (next_i()%2)) + 1) * next_i();
          vinfo[_i0].vram_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vinfo__i0__vram0 = 1;
          vinfo[_i0].vram = (struct TYPE_2__ *) malloc(_len_vinfo__i0__vram0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vinfo__i0__vram0; _j0++) {
              vinfo[_i0].vram->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          vinfo[_i0].vram->size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = vmlfb_vram_offset(vinfo,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vinfo0; _aux++) {
          free(vinfo[_aux].vram);
          }
          free(vinfo);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned long offset = 10;
        
          int _len_vinfo0 = 100;
          struct vml_info * vinfo = (struct vml_info *) malloc(_len_vinfo0*sizeof(struct vml_info));
          for(int _i0 = 0; _i0 < _len_vinfo0; _i0++) {
              vinfo[_i0].num_areas = ((-2 * (next_i()%2)) + 1) * next_i();
          vinfo[_i0].vram_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vinfo__i0__vram0 = 1;
          vinfo[_i0].vram = (struct TYPE_2__ *) malloc(_len_vinfo__i0__vram0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vinfo__i0__vram0; _j0++) {
              vinfo[_i0].vram->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          vinfo[_i0].vram->size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = vmlfb_vram_offset(vinfo,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vinfo0; _aux++) {
          free(vinfo[_aux].vram);
          }
          free(vinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
