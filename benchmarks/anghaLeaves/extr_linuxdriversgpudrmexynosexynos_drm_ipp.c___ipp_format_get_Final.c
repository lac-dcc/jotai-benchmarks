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
typedef  scalar_t__ uint64_t ;
typedef  scalar_t__ uint32_t ;
struct exynos_drm_ipp_formats {unsigned int type; scalar_t__ fourcc; scalar_t__ modifier; } ;
struct exynos_drm_ipp {int num_formats; struct exynos_drm_ipp_formats const* formats; } ;

/* Variables and functions */

__attribute__((used)) static inline const struct exynos_drm_ipp_formats *__ipp_format_get(
				struct exynos_drm_ipp *ipp, uint32_t fourcc,
				uint64_t mod, unsigned int type)
{
	int i;

	for (i = 0; i < ipp->num_formats; i++) {
		if ((ipp->formats[i].type & type) &&
		    ipp->formats[i].fourcc == fourcc &&
		    ipp->formats[i].modifier == mod)
			return &ipp->formats[i];
	}
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          long fourcc = 100;
        
          long mod = 100;
        
          unsigned int type = 100;
        
          int _len_ipp0 = 1;
          struct exynos_drm_ipp * ipp = (struct exynos_drm_ipp *) malloc(_len_ipp0*sizeof(struct exynos_drm_ipp));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              ipp[_i0].num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp__i0__formats0 = 1;
          ipp[_i0].formats = (const struct exynos_drm_ipp_formats *) malloc(_len_ipp__i0__formats0*sizeof(const struct exynos_drm_ipp_formats));
          for(int _j0 = 0; _j0 < _len_ipp__i0__formats0; _j0++) {
            
          }
        
          }
        
          const struct exynos_drm_ipp_formats * benchRet = __ipp_format_get(ipp,fourcc,mod,type);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].formats);
          }
          free(ipp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          long fourcc = 255;
        
          long mod = 255;
        
          unsigned int type = 255;
        
          int _len_ipp0 = 65025;
          struct exynos_drm_ipp * ipp = (struct exynos_drm_ipp *) malloc(_len_ipp0*sizeof(struct exynos_drm_ipp));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              ipp[_i0].num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp__i0__formats0 = 1;
          ipp[_i0].formats = (const struct exynos_drm_ipp_formats *) malloc(_len_ipp__i0__formats0*sizeof(const struct exynos_drm_ipp_formats));
          for(int _j0 = 0; _j0 < _len_ipp__i0__formats0; _j0++) {
            
          }
        
          }
        
          const struct exynos_drm_ipp_formats * benchRet = __ipp_format_get(ipp,fourcc,mod,type);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].formats);
          }
          free(ipp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          long fourcc = 10;
        
          long mod = 10;
        
          unsigned int type = 10;
        
          int _len_ipp0 = 100;
          struct exynos_drm_ipp * ipp = (struct exynos_drm_ipp *) malloc(_len_ipp0*sizeof(struct exynos_drm_ipp));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              ipp[_i0].num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp__i0__formats0 = 1;
          ipp[_i0].formats = (const struct exynos_drm_ipp_formats *) malloc(_len_ipp__i0__formats0*sizeof(const struct exynos_drm_ipp_formats));
          for(int _j0 = 0; _j0 < _len_ipp__i0__formats0; _j0++) {
            
          }
        
          }
        
          const struct exynos_drm_ipp_formats * benchRet = __ipp_format_get(ipp,fourcc,mod,type);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].formats);
          }
          free(ipp);
        
        break;
    }


    // linked
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          long fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long mod = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ipp0 = 1;
          struct exynos_drm_ipp * ipp = (struct exynos_drm_ipp *) malloc(_len_ipp0*sizeof(struct exynos_drm_ipp));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              ipp[_i0].num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp__i0__formats0 = 1;
          ipp[_i0].formats = (const struct exynos_drm_ipp_formats *) malloc(_len_ipp__i0__formats0*sizeof(const struct exynos_drm_ipp_formats));
          for(int _j0 = 0; _j0 < _len_ipp__i0__formats0; _j0++) {
            
          }
        
          }
        
          const struct exynos_drm_ipp_formats * benchRet = __ipp_format_get(ipp,fourcc,mod,type);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].formats);
          }
          free(ipp);
        
        break;
    }


    // empty
    case 4:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          long fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long mod = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ipp0 = 1;
          struct exynos_drm_ipp * ipp = (struct exynos_drm_ipp *) malloc(_len_ipp0*sizeof(struct exynos_drm_ipp));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              ipp[_i0].num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp__i0__formats0 = 1;
          ipp[_i0].formats = (const struct exynos_drm_ipp_formats *) malloc(_len_ipp__i0__formats0*sizeof(const struct exynos_drm_ipp_formats));
          for(int _j0 = 0; _j0 < _len_ipp__i0__formats0; _j0++) {
            
          }
        
          }
        
          const struct exynos_drm_ipp_formats * benchRet = __ipp_format_get(ipp,fourcc,mod,type);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].formats);
          }
          free(ipp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
