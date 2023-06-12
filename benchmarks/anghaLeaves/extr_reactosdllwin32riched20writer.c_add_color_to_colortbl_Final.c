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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int nColorTblLen; scalar_t__* colortbl; } ;
typedef  TYPE_1__ ME_OutStream ;
typedef  scalar_t__ COLORREF ;

/* Variables and functions */
 int STREAMOUT_COLORTBL_SIZE ; 

__attribute__((used)) static void add_color_to_colortbl( ME_OutStream *stream, COLORREF color )
{
    int i;

    for (i = 1; i < stream->nColorTblLen; i++)
        if (stream->colortbl[i] == color)
            break;

    if (i == stream->nColorTblLen && i < STREAMOUT_COLORTBL_SIZE)
    {
        stream->colortbl[i] = color;
        stream->nColorTblLen++;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long color = 100;
        
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].nColorTblLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__colortbl0 = 1;
          stream[_i0].colortbl = (long *) malloc(_len_stream__i0__colortbl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stream__i0__colortbl0; _j0++) {
            stream[_i0].colortbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          add_color_to_colortbl(stream,color);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].colortbl);
          }
          free(stream);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long color = 255;
        
          int _len_stream0 = 65025;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].nColorTblLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__colortbl0 = 1;
          stream[_i0].colortbl = (long *) malloc(_len_stream__i0__colortbl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stream__i0__colortbl0; _j0++) {
            stream[_i0].colortbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          add_color_to_colortbl(stream,color);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].colortbl);
          }
          free(stream);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long color = 10;
        
          int _len_stream0 = 100;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].nColorTblLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__colortbl0 = 1;
          stream[_i0].colortbl = (long *) malloc(_len_stream__i0__colortbl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stream__i0__colortbl0; _j0++) {
            stream[_i0].colortbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          add_color_to_colortbl(stream,color);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].colortbl);
          }
          free(stream);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long color = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].nColorTblLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__colortbl0 = 1;
          stream[_i0].colortbl = (long *) malloc(_len_stream__i0__colortbl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_stream__i0__colortbl0; _j0++) {
            stream[_i0].colortbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          add_color_to_colortbl(stream,color);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].colortbl);
          }
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
