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

/* Variables and functions */
 double H ; 
 double W ; 

int get_intersections(double *lines, double *intersections, long long n) {
  double D, Dx, Dy;
  double x, y;
  double *L1, *L2;
  int k = 0;
  for (int i=0; i < n; i++) {
    for (int j=0; j < n; j++) {
      L1 = lines + i*3;
      L2 = lines + j*3;
      D = L1[0] * L2[1] - L1[1] * L2[0];
      Dx = L1[2] * L2[1] - L1[1] * L2[2];
      Dy = L1[0] * L2[2] - L1[2] * L2[0];
      // only intersect lines from different quadrants and only left-right crossing
      if ((D != 0) && (L1[0]*L2[0]*L1[1]*L2[1] < 0) && (L1[1]*L2[1] < 0)){
        x = Dx / D;
        y = Dy / D;
        if ((0 < x) &&
            (x < W) &&
            (0 < y) &&
            (y < H)){
          intersections[k*2 + 0] = x;
          intersections[k*2 + 1] = y;
          k++;
        }
      }
    }
  }
  return k;
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
          // static_instructions_O0 : 75
          // dynamic_instructions_O0 : 3644473
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 977173
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 977175
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 977175
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 1108756
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 976920
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 1172761
          // ------------------------------- 

          long long n = 255;
        
          int _len_lines0 = 65025;
          double * lines = (double *) malloc(_len_lines0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_lines0; _i0++) {
            lines[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_intersections0 = 65025;
          double * intersections = (double *) malloc(_len_intersections0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_intersections0; _i0++) {
            intersections[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = get_intersections(lines,intersections,n);
          printf("%d\n", benchRet); 
          free(lines);
          free(intersections);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 75
          // dynamic_instructions_O0 : 5733
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 1583
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 1585
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 1585
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 1846
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 1575
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 1906
          // ------------------------------- 

          long long n = 10;
        
          int _len_lines0 = 100;
          double * lines = (double *) malloc(_len_lines0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_lines0; _i0++) {
            lines[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_intersections0 = 100;
          double * intersections = (double *) malloc(_len_intersections0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_intersections0; _i0++) {
            intersections[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = get_intersections(lines,intersections,n);
          printf("%d\n", benchRet); 
          free(lines);
          free(intersections);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long long n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_lines0 = 1;
          double * lines = (double *) malloc(_len_lines0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_lines0; _i0++) {
            lines[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_intersections0 = 1;
          double * intersections = (double *) malloc(_len_intersections0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_intersections0; _i0++) {
            intersections[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = get_intersections(lines,intersections,n);
          printf("%d\n", benchRet); 
          free(lines);
          free(intersections);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
