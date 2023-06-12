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
struct annotation_data {double* percent; } ;

/* Variables and functions */
 unsigned int PERCENT_MAX ; 

__attribute__((used)) static inline double annotation_data__percent(struct annotation_data *data,
					      unsigned int which)
{
	return which < PERCENT_MAX ? data->percent[which] : -1;
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
          unsigned int which = 100;
        
          int _len_data0 = 1;
          struct annotation_data * data = (struct annotation_data *) malloc(_len_data0*sizeof(struct annotation_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__percent0 = 1;
          data[_i0].percent = (double *) malloc(_len_data__i0__percent0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_data__i0__percent0; _j0++) {
            data[_i0].percent[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          }
        
          double benchRet = annotation_data__percent(data,which);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].percent);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int which = 255;
        
          int _len_data0 = 65025;
          struct annotation_data * data = (struct annotation_data *) malloc(_len_data0*sizeof(struct annotation_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__percent0 = 1;
          data[_i0].percent = (double *) malloc(_len_data__i0__percent0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_data__i0__percent0; _j0++) {
            data[_i0].percent[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          }
        
          double benchRet = annotation_data__percent(data,which);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].percent);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int which = 10;
        
          int _len_data0 = 100;
          struct annotation_data * data = (struct annotation_data *) malloc(_len_data0*sizeof(struct annotation_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__percent0 = 1;
          data[_i0].percent = (double *) malloc(_len_data__i0__percent0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_data__i0__percent0; _j0++) {
            data[_i0].percent[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          }
        
          double benchRet = annotation_data__percent(data,which);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].percent);
          }
          free(data);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int which = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          struct annotation_data * data = (struct annotation_data *) malloc(_len_data0*sizeof(struct annotation_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__percent0 = 1;
          data[_i0].percent = (double *) malloc(_len_data__i0__percent0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_data__i0__percent0; _j0++) {
            data[_i0].percent[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          }
        
          double benchRet = annotation_data__percent(data,which);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].percent);
          }
          free(data);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
