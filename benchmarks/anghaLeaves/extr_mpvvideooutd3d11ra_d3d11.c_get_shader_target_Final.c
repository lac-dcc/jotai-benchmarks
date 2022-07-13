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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            linked\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ra_d3d11 {int fl; } ;
struct ra {struct ra_d3d11* priv; } ;
typedef  enum glsl_shader { ____Placeholder_glsl_shader } glsl_shader ;

/* Variables and functions */
#define  D3D_FEATURE_LEVEL_10_0 135 
#define  D3D_FEATURE_LEVEL_10_1 134 
#define  D3D_FEATURE_LEVEL_9_1 133 
#define  D3D_FEATURE_LEVEL_9_2 132 
#define  D3D_FEATURE_LEVEL_9_3 131 
#define  GLSL_SHADER_COMPUTE 130 
#define  GLSL_SHADER_FRAGMENT 129 
#define  GLSL_SHADER_VERTEX 128 

__attribute__((used)) static const char *get_shader_target(struct ra *ra, enum glsl_shader type)
{
    struct ra_d3d11 *p = ra->priv;
    switch (p->fl) {
    default:
        switch (type) {
        case GLSL_SHADER_VERTEX:   return "vs_5_0";
        case GLSL_SHADER_FRAGMENT: return "ps_5_0";
        case GLSL_SHADER_COMPUTE:  return "cs_5_0";
        }
        break;
    case D3D_FEATURE_LEVEL_10_1:
        switch (type) {
        case GLSL_SHADER_VERTEX:   return "vs_4_1";
        case GLSL_SHADER_FRAGMENT: return "ps_4_1";
        case GLSL_SHADER_COMPUTE:  return "cs_4_1";
        }
        break;
    case D3D_FEATURE_LEVEL_10_0:
        switch (type) {
        case GLSL_SHADER_VERTEX:   return "vs_4_0";
        case GLSL_SHADER_FRAGMENT: return "ps_4_0";
        case GLSL_SHADER_COMPUTE:  return "cs_4_0";
        }
        break;
    case D3D_FEATURE_LEVEL_9_3:
        switch (type) {
        case GLSL_SHADER_VERTEX:   return "vs_4_0_level_9_3";
        case GLSL_SHADER_FRAGMENT: return "ps_4_0_level_9_3";
        }
        break;
    case D3D_FEATURE_LEVEL_9_2:
    case D3D_FEATURE_LEVEL_9_1:
        switch (type) {
        case GLSL_SHADER_VERTEX:   return "vs_4_0_level_9_1";
        case GLSL_SHADER_FRAGMENT: return "ps_4_0_level_9_1";
        }
        break;
    }
    return NULL;
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
          enum glsl_shader type = 0;
          int _len_ra0 = 1;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              int _len_ra__i0__priv0 = 1;
          ra[_i0].priv = (struct ra_d3d11 *) malloc(_len_ra__i0__priv0*sizeof(struct ra_d3d11));
          for(int _j0 = 0; _j0 < _len_ra__i0__priv0; _j0++) {
            ra[_i0].priv->fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = get_shader_target(ra,type);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_ra0; _aux++) {
          free(ra[_aux].priv);
          }
          free(ra);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum glsl_shader type = 0;
          int _len_ra0 = 65025;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              int _len_ra__i0__priv0 = 1;
          ra[_i0].priv = (struct ra_d3d11 *) malloc(_len_ra__i0__priv0*sizeof(struct ra_d3d11));
          for(int _j0 = 0; _j0 < _len_ra__i0__priv0; _j0++) {
            ra[_i0].priv->fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = get_shader_target(ra,type);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_ra0; _aux++) {
          free(ra[_aux].priv);
          }
          free(ra);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum glsl_shader type = 0;
          int _len_ra0 = 100;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              int _len_ra__i0__priv0 = 1;
          ra[_i0].priv = (struct ra_d3d11 *) malloc(_len_ra__i0__priv0*sizeof(struct ra_d3d11));
          for(int _j0 = 0; _j0 < _len_ra__i0__priv0; _j0++) {
            ra[_i0].priv->fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = get_shader_target(ra,type);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_ra0; _aux++) {
          free(ra[_aux].priv);
          }
          free(ra);
        
        break;
    }
    // linked
    case 3:
    {
          enum glsl_shader type = 0;
          int _len_ra0 = 1;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              int _len_ra__i0__priv0 = 1;
          ra[_i0].priv = (struct ra_d3d11 *) malloc(_len_ra__i0__priv0*sizeof(struct ra_d3d11));
          for(int _j0 = 0; _j0 < _len_ra__i0__priv0; _j0++) {
            ra[_i0].priv->fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = get_shader_target(ra,type);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_ra0; _aux++) {
          free(ra[_aux].priv);
          }
          free(ra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
