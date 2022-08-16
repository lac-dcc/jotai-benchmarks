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
typedef  scalar_t__ uint32 ;
typedef  scalar_t__ int32 ;
struct TYPE_3__ {float Y0; float X0; float Z0; } ;
typedef  TYPE_1__ TIFFCIELabToRGB ;

/* Variables and functions */

void
TIFFCIELabToXYZ(TIFFCIELabToRGB *cielab, uint32 l, int32 a, int32 b,
		float *X, float *Y, float *Z)
{
	float L = (float)l * 100.0F / 255.0F;
	float cby, tmp;

	if( L < 8.856F ) {
		*Y = (L * cielab->Y0) / 903.292F;
		cby = 7.787F * (*Y / cielab->Y0) + 16.0F / 116.0F;
	} else {
		cby = (L + 16.0F) / 116.0F;
		*Y = cielab->Y0 * cby * cby * cby;
	}

	tmp = (float)a / 500.0F + cby;
	if( tmp < 0.2069F )
		*X = cielab->X0 * (tmp - 0.13793F) / 7.787F;
	else    
		*X = cielab->X0 * tmp * tmp * tmp;

	tmp = cby - (float)b / 200.0F;
	if( tmp < 0.2069F )
		*Z = cielab->Z0 * (tmp - 0.13793F) / 7.787F;
	else    
		*Z = cielab->Z0 * tmp * tmp * tmp;
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
          long l = 100;
          long a = 100;
          long b = 100;
          int _len_cielab0 = 1;
          struct TYPE_3__ * cielab = (struct TYPE_3__ *) malloc(_len_cielab0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cielab0; _i0++) {
            cielab[_i0].Y0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        cielab[_i0].X0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        cielab[_i0].Z0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_X0 = 1;
          float * X = (float *) malloc(_len_X0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_X0; _i0++) {
            X[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_Y0 = 1;
          float * Y = (float *) malloc(_len_Y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_Y0; _i0++) {
            Y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_Z0 = 1;
          float * Z = (float *) malloc(_len_Z0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_Z0; _i0++) {
            Z[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          TIFFCIELabToXYZ(cielab,l,a,b,X,Y,Z);
          free(cielab);
          free(X);
          free(Y);
          free(Z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
