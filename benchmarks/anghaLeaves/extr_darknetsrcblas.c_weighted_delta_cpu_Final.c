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

void weighted_delta_cpu(float *a, float *b, float *s, float *da, float *db, float *ds, int n, float *dc)
{
    int i;
    for(i = 0; i < n; ++i){
        if(da) da[i] += dc[i] * s[i];
        if(db) db[i] += dc[i] * (1-s[i]);
        ds[i] += dc[i] * (a[i] - b[i]);
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
          // static_instructions_O0 : 60
          // dynamic_instructions_O0 : 12001
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 5622
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 5622
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 5120
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 5120
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 5366
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 5622
          // ------------------------------- 

          int n = 255;
        
          int _len_a0 = 65025;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 65025;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_s0 = 65025;
          float * s = (float *) malloc(_len_s0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_da0 = 65025;
          float * da = (float *) malloc(_len_da0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_da0; _i0++) {
            da[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_db0 = 65025;
          float * db = (float *) malloc(_len_db0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_ds0 = 65025;
          float * ds = (float *) malloc(_len_ds0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_dc0 = 65025;
          float * dc = (float *) malloc(_len_dc0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          weighted_delta_cpu(a,b,s,da,db,ds,n,dc);
          free(a);
          free(b);
          free(s);
          free(da);
          free(db);
          free(ds);
          free(dc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 60
          // dynamic_instructions_O0 : 486
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 232
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 232
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 220
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 220
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 221
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 232
          // ------------------------------- 

          int n = 10;
        
          int _len_a0 = 100;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 100;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_s0 = 100;
          float * s = (float *) malloc(_len_s0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_da0 = 100;
          float * da = (float *) malloc(_len_da0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_da0; _i0++) {
            da[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_db0 = 100;
          float * db = (float *) malloc(_len_db0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_ds0 = 100;
          float * ds = (float *) malloc(_len_ds0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_dc0 = 100;
          float * dc = (float *) malloc(_len_dc0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          weighted_delta_cpu(a,b,s,da,db,ds,n,dc);
          free(a);
          free(b);
          free(s);
          free(da);
          free(db);
          free(ds);
          free(dc);
        
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
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 1;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_s0 = 1;
          float * s = (float *) malloc(_len_s0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_da0 = 1;
          float * da = (float *) malloc(_len_da0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_da0; _i0++) {
            da[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_db0 = 1;
          float * db = (float *) malloc(_len_db0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_ds0 = 1;
          float * ds = (float *) malloc(_len_ds0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_dc0 = 1;
          float * dc = (float *) malloc(_len_dc0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          weighted_delta_cpu(a,b,s,da,db,ds,n,dc);
          free(a);
          free(b);
          free(s);
          free(da);
          free(db);
          free(ds);
          free(dc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
