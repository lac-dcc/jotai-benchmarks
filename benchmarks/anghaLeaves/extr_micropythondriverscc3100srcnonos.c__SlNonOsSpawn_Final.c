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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  _u32 ;
typedef  size_t _i8 ;
typedef  int /*<<< orphan*/ * _SlSpawnEntryFunc_t ;
struct TYPE_3__ {int /*<<< orphan*/ * pEntry; void* pValue; } ;
typedef  TYPE_1__ _SlNonOsSpawnEntry_t ;
typedef  int /*<<< orphan*/  _SlNonOsRetVal_t ;
struct TYPE_4__ {TYPE_1__* SpawnEntries; } ;

/* Variables and functions */
 size_t NONOS_MAX_SPAWN_ENTRIES ; 
 int /*<<< orphan*/  NONOS_RET_OK ; 
 TYPE_2__ g__SlNonOsCB ; 

_SlNonOsRetVal_t _SlNonOsSpawn(_SlSpawnEntryFunc_t pEntry , void* pValue , _u32 flags)
{
	 _i8 i = 0;
    
#ifndef SL_TINY_EXT 	
	for (i=0 ; i<NONOS_MAX_SPAWN_ENTRIES ; i++)
#endif     
	{
		_SlNonOsSpawnEntry_t* pE = &g__SlNonOsCB.SpawnEntries[i];
	
		if (NULL == pE->pEntry)
		{
			pE->pValue = pValue;
			pE->pEntry = pEntry;
#ifndef SL_TINY_EXT 	                        
			break;
#endif                        
		}
	}
        
        
        return NONOS_RET_OK;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int flags = 100;
        
          int _len_pEntry0 = 1;
          int * pEntry = (int *) malloc(_len_pEntry0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            pEntry[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * pValue;
        
          int benchRet = _SlNonOsSpawn(pEntry,pValue,flags);
          printf("%d\n", benchRet); 
          free(pEntry);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int flags = 255;
        
          int _len_pEntry0 = 65025;
          int * pEntry = (int *) malloc(_len_pEntry0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            pEntry[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * pValue;
        
          int benchRet = _SlNonOsSpawn(pEntry,pValue,flags);
          printf("%d\n", benchRet); 
          free(pEntry);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int flags = 10;
        
          int _len_pEntry0 = 100;
          int * pEntry = (int *) malloc(_len_pEntry0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            pEntry[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * pValue;
        
          int benchRet = _SlNonOsSpawn(pEntry,pValue,flags);
          printf("%d\n", benchRet); 
          free(pEntry);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pEntry0 = 1;
          int * pEntry = (int *) malloc(_len_pEntry0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            pEntry[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * pValue;
        
          int benchRet = _SlNonOsSpawn(pEntry,pValue,flags);
          printf("%d\n", benchRet); 
          free(pEntry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
