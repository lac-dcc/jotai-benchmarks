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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  p_object; } ;
struct TYPE_5__ {scalar_t__ p_type; TYPE_1__ p_vu; } ;
typedef  TYPE_2__ AMFObjectProperty ;
typedef  int /*<<< orphan*/  AMFObject ;

/* Variables and functions */
 int /*<<< orphan*/  AMFObj_Invalid ; 
 scalar_t__ AMF_OBJECT ; 

void
AMFProp_GetObject(AMFObjectProperty *prop, AMFObject *obj)
{
    if (prop->p_type == AMF_OBJECT)
        *obj = prop->p_vu.p_object;
    else
        *obj = AMFObj_Invalid;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_prop0 = 65025;
          struct TYPE_5__ * prop = (struct TYPE_5__ *) malloc(_len_prop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
              prop[_i0].p_type = ((-2 * (next_i()%2)) + 1) * next_i();
          prop[_i0].p_vu.p_object = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_obj0 = 65025;
          int * obj = (int *) malloc(_len_obj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          AMFProp_GetObject(prop,obj);
          free(prop);
          free(obj);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_prop0 = 100;
          struct TYPE_5__ * prop = (struct TYPE_5__ *) malloc(_len_prop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
              prop[_i0].p_type = ((-2 * (next_i()%2)) + 1) * next_i();
          prop[_i0].p_vu.p_object = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_obj0 = 100;
          int * obj = (int *) malloc(_len_obj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          AMFProp_GetObject(prop,obj);
          free(prop);
          free(obj);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_prop0 = 1;
          struct TYPE_5__ * prop = (struct TYPE_5__ *) malloc(_len_prop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
              prop[_i0].p_type = ((-2 * (next_i()%2)) + 1) * next_i();
          prop[_i0].p_vu.p_object = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_obj0 = 1;
          int * obj = (int *) malloc(_len_obj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          AMFProp_GetObject(prop,obj);
          free(prop);
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
