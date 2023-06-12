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
struct TYPE_3__ {int tile; int resno0; int layno1; int resno1; int compno1; void* prg1; scalar_t__ compno0; } ;
typedef  TYPE_1__ opj_poc_t ;

/* Variables and functions */
 void* CPRL ; 

__attribute__((used)) static int initialise_4K_poc(opj_poc_t *POC, int numres){
	POC[0].tile  = 1;
	POC[0].resno0  = 0;
	POC[0].compno0 = 0;
	POC[0].layno1  = 1;
	POC[0].resno1  = numres-1;
	POC[0].compno1 = 3;
	POC[0].prg1 = CPRL;
	POC[1].tile  = 1;
	POC[1].resno0  = numres-1;
	POC[1].compno0 = 0;
	POC[1].layno1  = 1;
	POC[1].resno1  = numres;
	POC[1].compno1 = 3;
	POC[1].prg1 = CPRL;
	return 2;
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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int numres = 255;
        
          int _len_POC0 = 65025;
          struct TYPE_3__ * POC = (struct TYPE_3__ *) malloc(_len_POC0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_POC0; _i0++) {
              POC[_i0].tile = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].resno0 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].layno1 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].resno1 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].compno1 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].compno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = initialise_4K_poc(POC,numres);
          printf("%d\n", benchRet); 
          free(POC);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int numres = 10;
        
          int _len_POC0 = 100;
          struct TYPE_3__ * POC = (struct TYPE_3__ *) malloc(_len_POC0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_POC0; _i0++) {
              POC[_i0].tile = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].resno0 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].layno1 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].resno1 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].compno1 = ((-2 * (next_i()%2)) + 1) * next_i();
          POC[_i0].compno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = initialise_4K_poc(POC,numres);
          printf("%d\n", benchRet); 
          free(POC);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
