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
typedef  int u32 ;
struct vub300_mmc_host {int* fbs; int bus_width; } ;

/* Variables and functions */

__attribute__((used)) static void snoop_block_size_and_bus_width(struct vub300_mmc_host *vub300,
					   u32 cmd_arg)
{
	if ((0xFBFFFE00 & cmd_arg) == 0x80022200)
		vub300->fbs[1] = (cmd_arg << 8) | (0x00FF & vub300->fbs[1]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80022000)
		vub300->fbs[1] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[1]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80042200)
		vub300->fbs[2] = (cmd_arg << 8) | (0x00FF & vub300->fbs[2]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80042000)
		vub300->fbs[2] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[2]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80062200)
		vub300->fbs[3] = (cmd_arg << 8) | (0x00FF & vub300->fbs[3]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80062000)
		vub300->fbs[3] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[3]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80082200)
		vub300->fbs[4] = (cmd_arg << 8) | (0x00FF & vub300->fbs[4]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x80082000)
		vub300->fbs[4] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[4]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x800A2200)
		vub300->fbs[5] = (cmd_arg << 8) | (0x00FF & vub300->fbs[5]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x800A2000)
		vub300->fbs[5] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[5]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x800C2200)
		vub300->fbs[6] = (cmd_arg << 8) | (0x00FF & vub300->fbs[6]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x800C2000)
		vub300->fbs[6] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[6]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x800E2200)
		vub300->fbs[7] = (cmd_arg << 8) | (0x00FF & vub300->fbs[7]);
	else if ((0xFBFFFE00 & cmd_arg) == 0x800E2000)
		vub300->fbs[7] = (0xFF & cmd_arg) | (0xFF00 & vub300->fbs[7]);
	else if ((0xFBFFFE03 & cmd_arg) == 0x80000E00)
		vub300->bus_width = 1;
	else if ((0xFBFFFE03 & cmd_arg) == 0x80000E02)
		vub300->bus_width = 4;
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
          // static_instructions_O0 : 85
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int cmd_arg = 100;
        
          int _len_vub3000 = 1;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
              int _len_vub300__i0__fbs0 = 1;
          vub300[_i0].fbs = (int *) malloc(_len_vub300__i0__fbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fbs0; _j0++) {
            vub300[_i0].fbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vub300[_i0].bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snoop_block_size_and_bus_width(vub300,cmd_arg);
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fbs);
          }
          free(vub300);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 85
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int cmd_arg = 255;
        
          int _len_vub3000 = 65025;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
              int _len_vub300__i0__fbs0 = 1;
          vub300[_i0].fbs = (int *) malloc(_len_vub300__i0__fbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fbs0; _j0++) {
            vub300[_i0].fbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vub300[_i0].bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snoop_block_size_and_bus_width(vub300,cmd_arg);
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fbs);
          }
          free(vub300);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 85
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int cmd_arg = 10;
        
          int _len_vub3000 = 100;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
              int _len_vub300__i0__fbs0 = 1;
          vub300[_i0].fbs = (int *) malloc(_len_vub300__i0__fbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fbs0; _j0++) {
            vub300[_i0].fbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vub300[_i0].bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snoop_block_size_and_bus_width(vub300,cmd_arg);
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fbs);
          }
          free(vub300);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 85
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int cmd_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vub3000 = 1;
          struct vub300_mmc_host * vub300 = (struct vub300_mmc_host *) malloc(_len_vub3000*sizeof(struct vub300_mmc_host));
          for(int _i0 = 0; _i0 < _len_vub3000; _i0++) {
              int _len_vub300__i0__fbs0 = 1;
          vub300[_i0].fbs = (int *) malloc(_len_vub300__i0__fbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vub300__i0__fbs0; _j0++) {
            vub300[_i0].fbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vub300[_i0].bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snoop_block_size_and_bus_width(vub300,cmd_arg);
          for(int _aux = 0; _aux < _len_vub3000; _aux++) {
          free(vub300[_aux].fbs);
          }
          free(vub300);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
