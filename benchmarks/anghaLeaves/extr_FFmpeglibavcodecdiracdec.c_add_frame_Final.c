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
typedef  int /*<<< orphan*/  DiracFrame ;

/* Variables and functions */

__attribute__((used)) static int add_frame(DiracFrame *framelist[], int maxframes, DiracFrame *frame)
{
    int i;
    for (i = 0; i < maxframes; i++)
        if (!framelist[i]) {
            framelist[i] = frame;
            return 0;
        }
    return -1;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3073
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1286
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 1286
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 1286
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 1286
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1540
          // ------------------------------- 

          int maxframes = 255;
        
          int _len_framelist0 = 65025;
          int ** framelist = (int **) malloc(_len_framelist0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_framelist0; _i0++) {
            int _len_framelist1 = 1;
            framelist[_i0] = (int *) malloc(_len_framelist1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_framelist1; _i1++) {
              framelist[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_frame0 = 65025;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = add_frame(framelist,maxframes,frame);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_framelist0; i1++) {
              free(framelist[i1]);
          }
          free(framelist);
          free(frame);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 133
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 70
          // ------------------------------- 

          int maxframes = 10;
        
          int _len_framelist0 = 100;
          int ** framelist = (int **) malloc(_len_framelist0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_framelist0; _i0++) {
            int _len_framelist1 = 1;
            framelist[_i0] = (int *) malloc(_len_framelist1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_framelist1; _i1++) {
              framelist[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_frame0 = 100;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = add_frame(framelist,maxframes,frame);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_framelist0; i1++) {
              free(framelist[i1]);
          }
          free(framelist);
          free(frame);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int maxframes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_framelist0 = 1;
          int ** framelist = (int **) malloc(_len_framelist0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_framelist0; _i0++) {
            int _len_framelist1 = 1;
            framelist[_i0] = (int *) malloc(_len_framelist1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_framelist1; _i1++) {
              framelist[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_frame0 = 1;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = add_frame(framelist,maxframes,frame);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_framelist0; i1++) {
              free(framelist[i1]);
          }
          free(framelist);
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
