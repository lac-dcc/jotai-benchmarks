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
struct zip_error {int zip_err; int sys_err; } ;

/* Variables and functions */

void
_zip_error_set(struct zip_error *err, int ze, int se)
{
    if (err) {
	err->zip_err = ze;
	err->sys_err = se;
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
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int ze = 100;
        
          int se = 100;
        
          int _len_err0 = 1;
          struct zip_error * err = (struct zip_error *) malloc(_len_err0*sizeof(struct zip_error));
          for(int _i0 = 0; _i0 < _len_err0; _i0++) {
              err[_i0].zip_err = ((-2 * (next_i()%2)) + 1) * next_i();
          err[_i0].sys_err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          _zip_error_set(err,ze,se);
          free(err);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int ze = 255;
        
          int se = 255;
        
          int _len_err0 = 65025;
          struct zip_error * err = (struct zip_error *) malloc(_len_err0*sizeof(struct zip_error));
          for(int _i0 = 0; _i0 < _len_err0; _i0++) {
              err[_i0].zip_err = ((-2 * (next_i()%2)) + 1) * next_i();
          err[_i0].sys_err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          _zip_error_set(err,ze,se);
          free(err);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int ze = 10;
        
          int se = 10;
        
          int _len_err0 = 100;
          struct zip_error * err = (struct zip_error *) malloc(_len_err0*sizeof(struct zip_error));
          for(int _i0 = 0; _i0 < _len_err0; _i0++) {
              err[_i0].zip_err = ((-2 * (next_i()%2)) + 1) * next_i();
          err[_i0].sys_err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          _zip_error_set(err,ze,se);
          free(err);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int ze = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int se = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_err0 = 1;
          struct zip_error * err = (struct zip_error *) malloc(_len_err0*sizeof(struct zip_error));
          for(int _i0 = 0; _i0 < _len_err0; _i0++) {
              err[_i0].zip_err = ((-2 * (next_i()%2)) + 1) * next_i();
          err[_i0].sys_err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          _zip_error_set(err,ze,se);
          free(err);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
