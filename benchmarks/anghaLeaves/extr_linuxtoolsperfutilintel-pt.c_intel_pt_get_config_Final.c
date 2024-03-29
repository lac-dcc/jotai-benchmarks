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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int /*<<< orphan*/  u64 ;
struct perf_event_attr {scalar_t__ type; int /*<<< orphan*/  config; } ;
struct intel_pt {scalar_t__ pmu_type; } ;

/* Variables and functions */

__attribute__((used)) static bool intel_pt_get_config(struct intel_pt *pt,
				struct perf_event_attr *attr, u64 *config)
{
	if (attr->type == pt->pmu_type) {
		if (config)
			*config = attr->config;
		return true;
	}

	return false;
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_pt0 = 65025;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
              pt[_i0].pmu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_attr0 = 65025;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              attr[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          attr[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 65025;
          int * config = (int *) malloc(_len_config0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = intel_pt_get_config(pt,attr,config);
          printf("%d\n", benchRet); 
          free(pt);
          free(attr);
          free(config);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_pt0 = 100;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
              pt[_i0].pmu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_attr0 = 100;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              attr[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          attr[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 100;
          int * config = (int *) malloc(_len_config0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = intel_pt_get_config(pt,attr,config);
          printf("%d\n", benchRet); 
          free(pt);
          free(attr);
          free(config);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_pt0 = 1;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
              pt[_i0].pmu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_attr0 = 1;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              attr[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          attr[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 1;
          int * config = (int *) malloc(_len_config0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = intel_pt_get_config(pt,attr,config);
          printf("%d\n", benchRet); 
          free(pt);
          free(attr);
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
