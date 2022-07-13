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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int width; int height; } ;
typedef  TYPE_1__ priv_t ;

/* Variables and functions */
 int MP_FOURCC_YV12 ; 
 int TVI_CONTROL_FALSE ; 
#define  TVI_CONTROL_IS_VIDEO 137 
 int TVI_CONTROL_TRUE ; 
#define  TVI_CONTROL_TUN_SET_NORM 136 
 int TVI_CONTROL_UNKNOWN ; 
#define  TVI_CONTROL_VID_CHK_HEIGHT 135 
#define  TVI_CONTROL_VID_CHK_WIDTH 134 
#define  TVI_CONTROL_VID_GET_FORMAT 133 
#define  TVI_CONTROL_VID_GET_HEIGHT 132 
#define  TVI_CONTROL_VID_GET_WIDTH 131 
#define  TVI_CONTROL_VID_SET_FORMAT 130 
#define  TVI_CONTROL_VID_SET_HEIGHT 129 
#define  TVI_CONTROL_VID_SET_WIDTH 128 

__attribute__((used)) static int do_control(priv_t *priv, int cmd, void *arg)
{
    switch(cmd)
    {
        case TVI_CONTROL_IS_VIDEO:
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_VID_GET_FORMAT:
            *(int *)arg = MP_FOURCC_YV12;
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_VID_SET_FORMAT:
        {
//          int req_fmt = *(int *)arg;
            int req_fmt = *(int *)arg;
            if (req_fmt != MP_FOURCC_YV12)
                return TVI_CONTROL_FALSE;
            return TVI_CONTROL_TRUE;
        }
        case TVI_CONTROL_VID_SET_WIDTH:
            priv->width = *(int *)arg;
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_VID_GET_WIDTH:
            *(int *)arg = priv->width;
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_VID_SET_HEIGHT:
            priv->height = *(int *)arg;
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_VID_GET_HEIGHT:
            *(int *)arg = priv->height;
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_VID_CHK_WIDTH:
        case TVI_CONTROL_VID_CHK_HEIGHT:
            return TVI_CONTROL_TRUE;
        case TVI_CONTROL_TUN_SET_NORM:
            return TVI_CONTROL_TRUE;
    }
    return TVI_CONTROL_UNKNOWN;
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
          int cmd = 100;
          int _len_priv0 = 1;
          struct TYPE_3__ * priv = (struct TYPE_3__ *) malloc(_len_priv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = do_control(priv,cmd,arg);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          int _len_priv0 = 65025;
          struct TYPE_3__ * priv = (struct TYPE_3__ *) malloc(_len_priv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = do_control(priv,cmd,arg);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          int _len_priv0 = 100;
          struct TYPE_3__ * priv = (struct TYPE_3__ *) malloc(_len_priv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = do_control(priv,cmd,arg);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
