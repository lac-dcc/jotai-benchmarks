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
typedef  int uint32_t ;
struct vo {struct priv* priv; } ;
struct priv {double cfg_fps; } ;

/* Variables and functions */
#define  VOCTRL_GET_DISPLAY_FPS 128 
 int VO_NOTIMPL ; 
 int VO_TRUE ; 

__attribute__((used)) static int control(struct vo *vo, uint32_t request, void *data)
{
    struct priv *p = vo->priv;
    switch (request) {
    case VOCTRL_GET_DISPLAY_FPS:
        if (!p->cfg_fps)
            break;
        *(double *)data = p->cfg_fps;
        return VO_TRUE;
    }
    return VO_NOTIMPL;
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
          int request = 100;
        
          int _len_vo0 = 1;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              vo[_i0].priv->cfg_fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          }
        
          void * data;
        
          int benchRet = control(vo,request,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int request = 255;
        
          int _len_vo0 = 65025;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              vo[_i0].priv->cfg_fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          }
        
          void * data;
        
          int benchRet = control(vo,request,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int request = 10;
        
          int _len_vo0 = 100;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              vo[_i0].priv->cfg_fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          }
        
          void * data;
        
          int benchRet = control(vo,request,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
        
        break;
    }
    // empty
    case 3:
    {
          int request = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vo0 = 1;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              vo[_i0].priv->cfg_fps = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          }
        
          void * data;
        
          int benchRet = control(vo,request,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
