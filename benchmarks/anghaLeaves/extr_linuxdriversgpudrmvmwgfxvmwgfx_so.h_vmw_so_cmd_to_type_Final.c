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
typedef  enum vmw_so_type { ____Placeholder_vmw_so_type } vmw_so_type ;

/* Variables and functions */
#define  SVGA_3D_CMD_DX_DEFINE_BLEND_STATE 139 
#define  SVGA_3D_CMD_DX_DEFINE_DEPTHSTENCIL_STATE 138 
#define  SVGA_3D_CMD_DX_DEFINE_ELEMENTLAYOUT 137 
#define  SVGA_3D_CMD_DX_DEFINE_RASTERIZER_STATE 136 
#define  SVGA_3D_CMD_DX_DEFINE_SAMPLER_STATE 135 
#define  SVGA_3D_CMD_DX_DEFINE_STREAMOUTPUT 134 
#define  SVGA_3D_CMD_DX_DESTROY_BLEND_STATE 133 
#define  SVGA_3D_CMD_DX_DESTROY_DEPTHSTENCIL_STATE 132 
#define  SVGA_3D_CMD_DX_DESTROY_ELEMENTLAYOUT 131 
#define  SVGA_3D_CMD_DX_DESTROY_RASTERIZER_STATE 130 
#define  SVGA_3D_CMD_DX_DESTROY_SAMPLER_STATE 129 
#define  SVGA_3D_CMD_DX_DESTROY_STREAMOUTPUT 128 
 int vmw_so_bs ; 
 int vmw_so_ds ; 
 int vmw_so_el ; 
 int vmw_so_max ; 
 int vmw_so_rs ; 
 int vmw_so_so ; 
 int vmw_so_ss ; 

__attribute__((used)) static inline enum vmw_so_type vmw_so_cmd_to_type(u32 id)
{
	switch (id) {
	case SVGA_3D_CMD_DX_DEFINE_ELEMENTLAYOUT:
	case SVGA_3D_CMD_DX_DESTROY_ELEMENTLAYOUT:
		return vmw_so_el;
	case SVGA_3D_CMD_DX_DEFINE_BLEND_STATE:
	case SVGA_3D_CMD_DX_DESTROY_BLEND_STATE:
		return vmw_so_bs;
	case SVGA_3D_CMD_DX_DEFINE_DEPTHSTENCIL_STATE:
	case SVGA_3D_CMD_DX_DESTROY_DEPTHSTENCIL_STATE:
		return vmw_so_ds;
	case SVGA_3D_CMD_DX_DEFINE_RASTERIZER_STATE:
	case SVGA_3D_CMD_DX_DESTROY_RASTERIZER_STATE:
		return vmw_so_rs;
	case SVGA_3D_CMD_DX_DEFINE_SAMPLER_STATE:
	case SVGA_3D_CMD_DX_DESTROY_SAMPLER_STATE:
		return vmw_so_ss;
	case SVGA_3D_CMD_DX_DEFINE_STREAMOUTPUT:
	case SVGA_3D_CMD_DX_DESTROY_STREAMOUTPUT:
		return vmw_so_so;
	default:
		break;
	}
	return vmw_so_max;
}


// ------------------------------------------------------------------------- //




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
          int id = 100;
          enum vmw_so_type benchRet = vmw_so_cmd_to_type(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          enum vmw_so_type benchRet = vmw_so_cmd_to_type(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          enum vmw_so_type benchRet = vmw_so_cmd_to_type(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
