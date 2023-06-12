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
struct ra {int dummy; } ;
typedef  enum ra_vartype { ____Placeholder_ra_vartype } ra_vartype ;

/* Variables and functions */
 int RA_VARTYPE_BUF_RW ; 
 int RA_VARTYPE_IMG_W ; 

__attribute__((used)) static int desc_namespace(struct ra *ra, enum ra_vartype type)
{
    // Images and SSBOs both use UAV bindings
    if (type == RA_VARTYPE_IMG_W)
        type = RA_VARTYPE_BUF_RW;
    return type;
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
          enum ra_vartype type = 0;
        
          int _len_ra0 = 65025;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = desc_namespace(ra,type);
          printf("%d\n", benchRet); 
          free(ra);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum ra_vartype type = 0;
        
          int _len_ra0 = 100;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = desc_namespace(ra,type);
          printf("%d\n", benchRet); 
          free(ra);
        
        break;
    }
    // empty
    case 2:
    {
          enum ra_vartype type = 0;
        
          int _len_ra0 = 1;
          struct ra * ra = (struct ra *) malloc(_len_ra0*sizeof(struct ra));
          for(int _i0 = 0; _i0 < _len_ra0; _i0++) {
              ra[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = desc_namespace(ra,type);
          printf("%d\n", benchRet); 
          free(ra);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
