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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_1__** delayed_pic; } ;
struct TYPE_5__ {int reference; } ;
typedef  TYPE_1__ H264Picture ;
typedef  TYPE_2__ H264Context ;

/* Variables and functions */
 int DELAYED_PIC_REF ; 

__attribute__((used)) static inline int unreference_pic(H264Context *h, H264Picture *pic, int refmask)
{
    int i;
    if (pic->reference &= refmask) {
        return 0;
    } else {
        for(i = 0; h->delayed_pic[i]; i++)
            if(pic == h->delayed_pic[i]){
                pic->reference = DELAYED_PIC_REF;
                break;
            }
        return 1;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int refmask = 255;
        
          int _len_h0 = 65025;
          struct TYPE_6__ * h = (struct TYPE_6__ *) malloc(_len_h0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__delayed_pic0 = 1;
          h[_i0].delayed_pic = (struct TYPE_5__ **) malloc(_len_h__i0__delayed_pic0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_h__i0__delayed_pic0; _j0++) {
            int _len_h__i0__delayed_pic1 = 1;
            h[_i0].delayed_pic[_j0] = (struct TYPE_5__ *) malloc(_len_h__i0__delayed_pic1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_h__i0__delayed_pic1; _j1++) {
                h[_i0].delayed_pic[_j0]->reference = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_pic0 = 65025;
          struct TYPE_5__ * pic = (struct TYPE_5__ *) malloc(_len_pic0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pic0; _i0++) {
              pic[_i0].reference = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = unreference_pic(h,pic,refmask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].delayed_pic));
        free(h[_aux].delayed_pic);
          }
          free(h);
          free(pic);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int refmask = 10;
        
          int _len_h0 = 100;
          struct TYPE_6__ * h = (struct TYPE_6__ *) malloc(_len_h0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__delayed_pic0 = 1;
          h[_i0].delayed_pic = (struct TYPE_5__ **) malloc(_len_h__i0__delayed_pic0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_h__i0__delayed_pic0; _j0++) {
            int _len_h__i0__delayed_pic1 = 1;
            h[_i0].delayed_pic[_j0] = (struct TYPE_5__ *) malloc(_len_h__i0__delayed_pic1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_h__i0__delayed_pic1; _j1++) {
                h[_i0].delayed_pic[_j0]->reference = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_pic0 = 100;
          struct TYPE_5__ * pic = (struct TYPE_5__ *) malloc(_len_pic0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pic0; _i0++) {
              pic[_i0].reference = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = unreference_pic(h,pic,refmask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].delayed_pic));
        free(h[_aux].delayed_pic);
          }
          free(h);
          free(pic);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int refmask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_h0 = 1;
          struct TYPE_6__ * h = (struct TYPE_6__ *) malloc(_len_h0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__delayed_pic0 = 1;
          h[_i0].delayed_pic = (struct TYPE_5__ **) malloc(_len_h__i0__delayed_pic0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_h__i0__delayed_pic0; _j0++) {
            int _len_h__i0__delayed_pic1 = 1;
            h[_i0].delayed_pic[_j0] = (struct TYPE_5__ *) malloc(_len_h__i0__delayed_pic1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_h__i0__delayed_pic1; _j1++) {
                h[_i0].delayed_pic[_j0]->reference = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_pic0 = 1;
          struct TYPE_5__ * pic = (struct TYPE_5__ *) malloc(_len_pic0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pic0; _i0++) {
              pic[_i0].reference = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = unreference_pic(h,pic,refmask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].delayed_pic));
        free(h[_aux].delayed_pic);
          }
          free(h);
          free(pic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
