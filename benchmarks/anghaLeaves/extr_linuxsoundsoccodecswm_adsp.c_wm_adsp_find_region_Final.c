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
       3            linked\n\
       4            empty\n\
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
struct wm_adsp_region {int type; } ;
struct wm_adsp {int num_mems; struct wm_adsp_region const* mem; } ;

/* Variables and functions */

__attribute__((used)) static struct wm_adsp_region const *wm_adsp_find_region(struct wm_adsp *dsp,
							int type)
{
	int i;

	for (i = 0; i < dsp->num_mems; i++)
		if (dsp->mem[i].type == type)
			return &dsp->mem[i];

	return NULL;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = 100;
        
          int _len_dsp0 = 1;
          struct wm_adsp * dsp = (struct wm_adsp *) malloc(_len_dsp0*sizeof(struct wm_adsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
              dsp[_i0].num_mems = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsp__i0__mem0 = 1;
          dsp[_i0].mem = (const struct wm_adsp_region *) malloc(_len_dsp__i0__mem0*sizeof(const struct wm_adsp_region));
          for(int _j0 = 0; _j0 < _len_dsp__i0__mem0; _j0++) {
            
          }
        
          }
        
          const struct wm_adsp_region * benchRet = wm_adsp_find_region(dsp,type);
          for(int _aux = 0; _aux < _len_dsp0; _aux++) {
          free(dsp[_aux].mem);
          }
          free(dsp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = 255;
        
          int _len_dsp0 = 65025;
          struct wm_adsp * dsp = (struct wm_adsp *) malloc(_len_dsp0*sizeof(struct wm_adsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
              dsp[_i0].num_mems = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsp__i0__mem0 = 1;
          dsp[_i0].mem = (const struct wm_adsp_region *) malloc(_len_dsp__i0__mem0*sizeof(const struct wm_adsp_region));
          for(int _j0 = 0; _j0 < _len_dsp__i0__mem0; _j0++) {
            
          }
        
          }
        
          const struct wm_adsp_region * benchRet = wm_adsp_find_region(dsp,type);
          for(int _aux = 0; _aux < _len_dsp0; _aux++) {
          free(dsp[_aux].mem);
          }
          free(dsp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = 10;
        
          int _len_dsp0 = 100;
          struct wm_adsp * dsp = (struct wm_adsp *) malloc(_len_dsp0*sizeof(struct wm_adsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
              dsp[_i0].num_mems = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsp__i0__mem0 = 1;
          dsp[_i0].mem = (const struct wm_adsp_region *) malloc(_len_dsp__i0__mem0*sizeof(const struct wm_adsp_region));
          for(int _j0 = 0; _j0 < _len_dsp__i0__mem0; _j0++) {
            
          }
        
          }
        
          const struct wm_adsp_region * benchRet = wm_adsp_find_region(dsp,type);
          for(int _aux = 0; _aux < _len_dsp0; _aux++) {
          free(dsp[_aux].mem);
          }
          free(dsp);
        
        break;
    }


    // linked
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dsp0 = 1;
          struct wm_adsp * dsp = (struct wm_adsp *) malloc(_len_dsp0*sizeof(struct wm_adsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
              dsp[_i0].num_mems = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsp__i0__mem0 = 1;
          dsp[_i0].mem = (const struct wm_adsp_region *) malloc(_len_dsp__i0__mem0*sizeof(const struct wm_adsp_region));
          for(int _j0 = 0; _j0 < _len_dsp__i0__mem0; _j0++) {
            
          }
        
          }
        
          const struct wm_adsp_region * benchRet = wm_adsp_find_region(dsp,type);
          for(int _aux = 0; _aux < _len_dsp0; _aux++) {
          free(dsp[_aux].mem);
          }
          free(dsp);
        
        break;
    }


    // empty
    case 4:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dsp0 = 1;
          struct wm_adsp * dsp = (struct wm_adsp *) malloc(_len_dsp0*sizeof(struct wm_adsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
              dsp[_i0].num_mems = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsp__i0__mem0 = 1;
          dsp[_i0].mem = (const struct wm_adsp_region *) malloc(_len_dsp__i0__mem0*sizeof(const struct wm_adsp_region));
          for(int _j0 = 0; _j0 < _len_dsp__i0__mem0; _j0++) {
            
          }
        
          }
        
          const struct wm_adsp_region * benchRet = wm_adsp_find_region(dsp,type);
          for(int _aux = 0; _aux < _len_dsp0; _aux++) {
          free(dsp[_aux].mem);
          }
          free(dsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
