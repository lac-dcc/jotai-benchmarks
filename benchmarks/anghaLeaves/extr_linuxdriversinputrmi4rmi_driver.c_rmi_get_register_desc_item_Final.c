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

/* Type definitions */
typedef  scalar_t__ u16 ;
struct rmi_register_descriptor {int num_registers; struct rmi_register_desc_item* registers; } ;
struct rmi_register_desc_item {scalar_t__ reg; } ;

/* Variables and functions */

const struct rmi_register_desc_item *rmi_get_register_desc_item(
				struct rmi_register_descriptor *rdesc, u16 reg)
{
	const struct rmi_register_desc_item *item;
	int i;

	for (i = 0; i < rdesc->num_registers; i++) {
		item = &rdesc->registers[i];
		if (item->reg == reg)
			return item;
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

          long reg = 100;
        
          int _len_rdesc0 = 1;
          struct rmi_register_descriptor * rdesc = (struct rmi_register_descriptor *) malloc(_len_rdesc0*sizeof(struct rmi_register_descriptor));
          for(int _i0 = 0; _i0 < _len_rdesc0; _i0++) {
              rdesc[_i0].num_registers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdesc__i0__registers0 = 1;
          rdesc[_i0].registers = (struct rmi_register_desc_item *) malloc(_len_rdesc__i0__registers0*sizeof(struct rmi_register_desc_item));
          for(int _j0 = 0; _j0 < _len_rdesc__i0__registers0; _j0++) {
              rdesc[_i0].registers->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rmi_register_desc_item * benchRet = rmi_get_register_desc_item(rdesc,reg);
          for(int _aux = 0; _aux < _len_rdesc0; _aux++) {
          free(rdesc[_aux].registers);
          }
          free(rdesc);
        
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

          long reg = 255;
        
          int _len_rdesc0 = 65025;
          struct rmi_register_descriptor * rdesc = (struct rmi_register_descriptor *) malloc(_len_rdesc0*sizeof(struct rmi_register_descriptor));
          for(int _i0 = 0; _i0 < _len_rdesc0; _i0++) {
              rdesc[_i0].num_registers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdesc__i0__registers0 = 1;
          rdesc[_i0].registers = (struct rmi_register_desc_item *) malloc(_len_rdesc__i0__registers0*sizeof(struct rmi_register_desc_item));
          for(int _j0 = 0; _j0 < _len_rdesc__i0__registers0; _j0++) {
              rdesc[_i0].registers->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rmi_register_desc_item * benchRet = rmi_get_register_desc_item(rdesc,reg);
          for(int _aux = 0; _aux < _len_rdesc0; _aux++) {
          free(rdesc[_aux].registers);
          }
          free(rdesc);
        
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

          long reg = 10;
        
          int _len_rdesc0 = 100;
          struct rmi_register_descriptor * rdesc = (struct rmi_register_descriptor *) malloc(_len_rdesc0*sizeof(struct rmi_register_descriptor));
          for(int _i0 = 0; _i0 < _len_rdesc0; _i0++) {
              rdesc[_i0].num_registers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdesc__i0__registers0 = 1;
          rdesc[_i0].registers = (struct rmi_register_desc_item *) malloc(_len_rdesc__i0__registers0*sizeof(struct rmi_register_desc_item));
          for(int _j0 = 0; _j0 < _len_rdesc__i0__registers0; _j0++) {
              rdesc[_i0].registers->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rmi_register_desc_item * benchRet = rmi_get_register_desc_item(rdesc,reg);
          for(int _aux = 0; _aux < _len_rdesc0; _aux++) {
          free(rdesc[_aux].registers);
          }
          free(rdesc);
        
        break;
    }


    // empty
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

          long reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rdesc0 = 1;
          struct rmi_register_descriptor * rdesc = (struct rmi_register_descriptor *) malloc(_len_rdesc0*sizeof(struct rmi_register_descriptor));
          for(int _i0 = 0; _i0 < _len_rdesc0; _i0++) {
              rdesc[_i0].num_registers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdesc__i0__registers0 = 1;
          rdesc[_i0].registers = (struct rmi_register_desc_item *) malloc(_len_rdesc__i0__registers0*sizeof(struct rmi_register_desc_item));
          for(int _j0 = 0; _j0 < _len_rdesc__i0__registers0; _j0++) {
              rdesc[_i0].registers->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rmi_register_desc_item * benchRet = rmi_get_register_desc_item(rdesc,reg);
          for(int _aux = 0; _aux < _len_rdesc0; _aux++) {
          free(rdesc[_aux].registers);
          }
          free(rdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
