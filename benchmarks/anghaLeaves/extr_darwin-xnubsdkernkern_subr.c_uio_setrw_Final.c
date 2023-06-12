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
typedef  TYPE_1__* uio_t ;
struct TYPE_3__ {int uio_rw; } ;

/* Variables and functions */
 int UIO_READ ; 
 int UIO_WRITE ; 

void uio_setrw( uio_t a_uio, int a_value )
{
	if (a_uio == NULL) {
#if LP64_DEBUG
	panic("%s :%d - invalid uio_t\n", __FILE__, __LINE__); 
#endif /* LP64_DEBUG */
		return;
	}

#if LP64_DEBUG
	if (!(a_value == UIO_READ || a_value == UIO_WRITE)) {
		panic("%s :%d - invalid a_value\n", __FILE__, __LINE__); 
	}
#endif /* LP64_DEBUG */

	if (a_value == UIO_READ || a_value == UIO_WRITE) {
		a_uio->uio_rw = a_value;
	}
	return;
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int a_value = 100;
        
          int _len_a_uio0 = 1;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
              a_uio[_i0].uio_rw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uio_setrw(a_uio,a_value);
          free(a_uio);
        
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int a_value = 255;
        
          int _len_a_uio0 = 65025;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
              a_uio[_i0].uio_rw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uio_setrw(a_uio,a_value);
          free(a_uio);
        
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int a_value = 10;
        
          int _len_a_uio0 = 100;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
              a_uio[_i0].uio_rw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uio_setrw(a_uio,a_value);
          free(a_uio);
        
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int a_value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a_uio0 = 1;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
              a_uio[_i0].uio_rw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uio_setrw(a_uio,a_value);
          free(a_uio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
