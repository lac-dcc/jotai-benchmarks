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
typedef  int u16 ;

/* Variables and functions */
 int CEC_PHYS_ADDR_INVALID ; 
 int EINVAL ; 

int cec_phys_addr_validate(u16 phys_addr, u16 *parent, u16 *port)
{
	int i;

	if (parent)
		*parent = phys_addr;
	if (port)
		*port = 0;
	if (phys_addr == CEC_PHYS_ADDR_INVALID)
		return 0;
	for (i = 0; i < 16; i += 4)
		if (phys_addr & (0xf << i))
			break;
	if (i == 16)
		return 0;
	if (parent)
		*parent = phys_addr & (0xfff0 << i);
	if (port)
		*port = (phys_addr >> i) & 0xf;
	for (i += 4; i < 16; i += 4)
		if ((phys_addr & (0xf << i)) == 0)
			return -EINVAL;
	return 0;
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
          // static_instructions_O0 : 76
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 46
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 46
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 46
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          int phys_addr = 100;
        
          int _len_parent0 = 1;
          int * parent = (int *) malloc(_len_parent0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_port0 = 1;
          int * port = (int *) malloc(_len_port0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cec_phys_addr_validate(phys_addr,parent,port);
          printf("%d\n", benchRet); 
          free(parent);
          free(port);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 76
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 46
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 46
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 46
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          int phys_addr = 255;
        
          int _len_parent0 = 65025;
          int * parent = (int *) malloc(_len_parent0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_port0 = 65025;
          int * port = (int *) malloc(_len_port0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cec_phys_addr_validate(phys_addr,parent,port);
          printf("%d\n", benchRet); 
          free(parent);
          free(port);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 71
          // dynamic_instructions_O0 : 71
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 43
          // ------------------------------- 

          int phys_addr = 10;
        
          int _len_parent0 = 100;
          int * parent = (int *) malloc(_len_parent0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_port0 = 100;
          int * port = (int *) malloc(_len_port0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cec_phys_addr_validate(phys_addr,parent,port);
          printf("%d\n", benchRet); 
          free(parent);
          free(port);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 73
          // dynamic_instructions_O0 : 105
          // ------------------------------- 
          // static_instructions_O1 : 47
          // dynamic_instructions_O1 : 67
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 49
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 49
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 59
          // ------------------------------- 

          int phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_parent0 = 1;
          int * parent = (int *) malloc(_len_parent0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_port0 = 1;
          int * port = (int *) malloc(_len_port0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cec_phys_addr_validate(phys_addr,parent,port);
          printf("%d\n", benchRet); 
          free(parent);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
