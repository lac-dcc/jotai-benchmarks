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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ MinBuildNumber; } ;
typedef  size_t SIZE_T ;
typedef  TYPE_1__* PKULL_M_PATCH_GENERIC ;
typedef  scalar_t__ DWORD ;

/* Variables and functions */

PKULL_M_PATCH_GENERIC kull_m_patch_getGenericFromBuild(PKULL_M_PATCH_GENERIC generics, SIZE_T cbGenerics, DWORD BuildNumber)
{
	SIZE_T i;
	PKULL_M_PATCH_GENERIC current = NULL;

	for(i = 0; i < cbGenerics; i++)
	{
		if(generics[i].MinBuildNumber <= BuildNumber)
			current = &generics[i];
		else break;
	}
	return current;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 4858
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 1795
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 1795
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 1795
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 1795
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 1793
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 2048
          // ------------------------------- 

          unsigned long cbGenerics = 255;
        
          long BuildNumber = 255;
        
          int _len_generics0 = 65025;
          struct TYPE_4__ * generics = (struct TYPE_4__ *) malloc(_len_generics0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_generics0; _i0++) {
              generics[_i0].MinBuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct TYPE_4__ * benchRet = kull_m_patch_getGenericFromBuild(generics,cbGenerics,BuildNumber);
          printf("%ld\n", (*benchRet).MinBuildNumber);
          free(generics);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 203
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 80
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 80
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 80
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 80
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 78
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          unsigned long cbGenerics = 10;
        
          long BuildNumber = 10;
        
          int _len_generics0 = 100;
          struct TYPE_4__ * generics = (struct TYPE_4__ *) malloc(_len_generics0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_generics0; _i0++) {
              generics[_i0].MinBuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct TYPE_4__ * benchRet = kull_m_patch_getGenericFromBuild(generics,cbGenerics,BuildNumber);
          printf("%ld\n", (*benchRet).MinBuildNumber);
          free(generics);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
