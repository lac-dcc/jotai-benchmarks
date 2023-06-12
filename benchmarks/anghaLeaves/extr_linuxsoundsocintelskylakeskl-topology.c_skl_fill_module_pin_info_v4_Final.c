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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  instance_id; int /*<<< orphan*/  module_id; } ;
struct skl_module_pin {int in_use; int is_dynamic; int /*<<< orphan*/  pin_state; TYPE_1__ id; } ;
struct skl_dfw_v4_module_pin {int /*<<< orphan*/  instance_id; int /*<<< orphan*/  module_id; } ;

/* Variables and functions */
 int /*<<< orphan*/  SKL_PIN_UNBIND ; 

__attribute__((used)) static void skl_fill_module_pin_info_v4(struct skl_dfw_v4_module_pin *dfw_pin,
					struct skl_module_pin *m_pin,
					bool is_dynamic, int max_pin)
{
	int i;

	for (i = 0; i < max_pin; i++) {
		m_pin[i].id.module_id = dfw_pin[i].module_id;
		m_pin[i].id.instance_id = dfw_pin[i].instance_id;
		m_pin[i].in_use = false;
		m_pin[i].is_dynamic = is_dynamic;
		m_pin[i].pin_state = SKL_PIN_UNBIND;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 10212
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 3071
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 3071
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 3071
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 3071
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 3069
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 3325
          // ------------------------------- 

          int is_dynamic = 255;
        
          int max_pin = 255;
        
          int _len_dfw_pin0 = 65025;
          struct skl_dfw_v4_module_pin * dfw_pin = (struct skl_dfw_v4_module_pin *) malloc(_len_dfw_pin0*sizeof(struct skl_dfw_v4_module_pin));
          for(int _i0 = 0; _i0 < _len_dfw_pin0; _i0++) {
              dfw_pin[_i0].instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dfw_pin[_i0].module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_m_pin0 = 65025;
          struct skl_module_pin * m_pin = (struct skl_module_pin *) malloc(_len_m_pin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_m_pin0; _i0++) {
              m_pin[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].pin_state = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          skl_fill_module_pin_info_v4(dfw_pin,m_pin,is_dynamic,max_pin);
          free(dfw_pin);
          free(m_pin);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 412
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 131
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 131
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 131
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 131
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 129
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 140
          // ------------------------------- 

          int is_dynamic = 10;
        
          int max_pin = 10;
        
          int _len_dfw_pin0 = 100;
          struct skl_dfw_v4_module_pin * dfw_pin = (struct skl_dfw_v4_module_pin *) malloc(_len_dfw_pin0*sizeof(struct skl_dfw_v4_module_pin));
          for(int _i0 = 0; _i0 < _len_dfw_pin0; _i0++) {
              dfw_pin[_i0].instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dfw_pin[_i0].module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_m_pin0 = 100;
          struct skl_module_pin * m_pin = (struct skl_module_pin *) malloc(_len_m_pin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_m_pin0; _i0++) {
              m_pin[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].pin_state = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          skl_fill_module_pin_info_v4(dfw_pin,m_pin,is_dynamic,max_pin);
          free(dfw_pin);
          free(m_pin);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int max_pin = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dfw_pin0 = 1;
          struct skl_dfw_v4_module_pin * dfw_pin = (struct skl_dfw_v4_module_pin *) malloc(_len_dfw_pin0*sizeof(struct skl_dfw_v4_module_pin));
          for(int _i0 = 0; _i0 < _len_dfw_pin0; _i0++) {
              dfw_pin[_i0].instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dfw_pin[_i0].module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_m_pin0 = 1;
          struct skl_module_pin * m_pin = (struct skl_module_pin *) malloc(_len_m_pin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_m_pin0; _i0++) {
              m_pin[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].pin_state = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          m_pin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          skl_fill_module_pin_info_v4(dfw_pin,m_pin,is_dynamic,max_pin);
          free(dfw_pin);
          free(m_pin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
