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
struct rcar_du_vsp {int dummy; } ;
struct device_node {int dummy; } ;

/* Variables and functions */
 int ENXIO ; 

__attribute__((used)) static inline int rcar_du_vsp_init(struct rcar_du_vsp *vsp,
				   struct device_node *np,
				   unsigned int crtcs)
{
	return -ENXIO;
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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int crtcs = 100;
        
          int _len_vsp0 = 1;
          struct rcar_du_vsp * vsp = (struct rcar_du_vsp *) malloc(_len_vsp0*sizeof(struct rcar_du_vsp));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
              vsp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_np0 = 1;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rcar_du_vsp_init(vsp,np,crtcs);
          printf("%d\n", benchRet); 
          free(vsp);
          free(np);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int crtcs = 255;
        
          int _len_vsp0 = 65025;
          struct rcar_du_vsp * vsp = (struct rcar_du_vsp *) malloc(_len_vsp0*sizeof(struct rcar_du_vsp));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
              vsp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_np0 = 65025;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rcar_du_vsp_init(vsp,np,crtcs);
          printf("%d\n", benchRet); 
          free(vsp);
          free(np);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int crtcs = 10;
        
          int _len_vsp0 = 100;
          struct rcar_du_vsp * vsp = (struct rcar_du_vsp *) malloc(_len_vsp0*sizeof(struct rcar_du_vsp));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
              vsp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_np0 = 100;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rcar_du_vsp_init(vsp,np,crtcs);
          printf("%d\n", benchRet); 
          free(vsp);
          free(np);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int crtcs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vsp0 = 1;
          struct rcar_du_vsp * vsp = (struct rcar_du_vsp *) malloc(_len_vsp0*sizeof(struct rcar_du_vsp));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
              vsp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_np0 = 1;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rcar_du_vsp_init(vsp,np,crtcs);
          printf("%d\n", benchRet); 
          free(vsp);
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
