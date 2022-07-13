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
       0            big-arr\n\
       1            big-arr-10x\n\
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
struct TYPE_3__ {double* aParam; } ;
typedef  TYPE_1__ sqlite3_rtree_geometry ;

/* Variables and functions */
 int SQLITE_OK ; 

__attribute__((used)) static int xsliceGeometryCallback(
  sqlite3_rtree_geometry *p,
  int nCoord,
  double *aCoord,
  int *pRes
){
  *pRes = aCoord[3]>=p->aParam[0] && aCoord[2]<=p->aParam[1];
  return SQLITE_OK;
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

    // big-arr
    case 0:
    {
          int nCoord = 255;
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__aParam0 = 1;
          p[_i0].aParam = (double *) malloc(_len_p__i0__aParam0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_p__i0__aParam0; _j0++) {
            p[_i0].aParam[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_aCoord0 = 65025;
          double * aCoord = (double *) malloc(_len_aCoord0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_aCoord0; _i0++) {
            aCoord[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pRes0 = 65025;
          int * pRes = (int *) malloc(_len_pRes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pRes0; _i0++) {
            pRes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xsliceGeometryCallback(p,nCoord,aCoord,pRes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].aParam);
          }
          free(p);
          free(aCoord);
          free(pRes);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int nCoord = 10;
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__aParam0 = 1;
          p[_i0].aParam = (double *) malloc(_len_p__i0__aParam0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_p__i0__aParam0; _j0++) {
            p[_i0].aParam[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_aCoord0 = 100;
          double * aCoord = (double *) malloc(_len_aCoord0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_aCoord0; _i0++) {
            aCoord[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pRes0 = 100;
          int * pRes = (int *) malloc(_len_pRes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pRes0; _i0++) {
            pRes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xsliceGeometryCallback(p,nCoord,aCoord,pRes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].aParam);
          }
          free(p);
          free(aCoord);
          free(pRes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
