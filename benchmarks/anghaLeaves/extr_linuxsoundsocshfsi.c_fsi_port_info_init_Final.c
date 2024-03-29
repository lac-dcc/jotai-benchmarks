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
struct sh_fsi_port_info {int flags; } ;
struct fsi_priv {int spdif; int clk_cpg; int enable_stream; } ;

/* Variables and functions */
 int SH_FSI_CLK_CPG ; 
 int SH_FSI_ENABLE_STREAM_MODE ; 
 int SH_FSI_FMT_SPDIF ; 

__attribute__((used)) static void fsi_port_info_init(struct fsi_priv *fsi,
			       struct sh_fsi_port_info *info)
{
	if (info->flags & SH_FSI_FMT_SPDIF)
		fsi->spdif = 1;

	if (info->flags & SH_FSI_CLK_CPG)
		fsi->clk_cpg = 1;

	if (info->flags & SH_FSI_ENABLE_STREAM_MODE)
		fsi->enable_stream = 1;
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

          int _len_fsi0 = 65025;
          struct fsi_priv * fsi = (struct fsi_priv *) malloc(_len_fsi0*sizeof(struct fsi_priv));
          for(int _i0 = 0; _i0 < _len_fsi0; _i0++) {
              fsi[_i0].spdif = ((-2 * (next_i()%2)) + 1) * next_i();
          fsi[_i0].clk_cpg = ((-2 * (next_i()%2)) + 1) * next_i();
          fsi[_i0].enable_stream = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 65025;
          struct sh_fsi_port_info * info = (struct sh_fsi_port_info *) malloc(_len_info0*sizeof(struct sh_fsi_port_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          fsi_port_info_init(fsi,info);
          free(fsi);
          free(info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
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

          int _len_fsi0 = 100;
          struct fsi_priv * fsi = (struct fsi_priv *) malloc(_len_fsi0*sizeof(struct fsi_priv));
          for(int _i0 = 0; _i0 < _len_fsi0; _i0++) {
              fsi[_i0].spdif = ((-2 * (next_i()%2)) + 1) * next_i();
          fsi[_i0].clk_cpg = ((-2 * (next_i()%2)) + 1) * next_i();
          fsi[_i0].enable_stream = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 100;
          struct sh_fsi_port_info * info = (struct sh_fsi_port_info *) malloc(_len_info0*sizeof(struct sh_fsi_port_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          fsi_port_info_init(fsi,info);
          free(fsi);
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
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

          int _len_fsi0 = 1;
          struct fsi_priv * fsi = (struct fsi_priv *) malloc(_len_fsi0*sizeof(struct fsi_priv));
          for(int _i0 = 0; _i0 < _len_fsi0; _i0++) {
              fsi[_i0].spdif = ((-2 * (next_i()%2)) + 1) * next_i();
          fsi[_i0].clk_cpg = ((-2 * (next_i()%2)) + 1) * next_i();
          fsi[_i0].enable_stream = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 1;
          struct sh_fsi_port_info * info = (struct sh_fsi_port_info *) malloc(_len_info0*sizeof(struct sh_fsi_port_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          fsi_port_info_init(fsi,info);
          free(fsi);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
