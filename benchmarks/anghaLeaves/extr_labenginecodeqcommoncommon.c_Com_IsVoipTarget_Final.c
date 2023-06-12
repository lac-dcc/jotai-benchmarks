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
typedef  int uint8_t ;
typedef  int qboolean ;

/* Variables and functions */
 int qfalse ; 
 int qtrue ; 

qboolean Com_IsVoipTarget(uint8_t *voipTargets, int voipTargetsSize, int clientNum)
{
	int index;
	if(clientNum < 0)
	{
		for(index = 0; index < voipTargetsSize; index++)
		{
			if(voipTargets[index])
				return qtrue;
		}
		
		return qfalse;
	}

	index = clientNum >> 3;
	
	if(index < voipTargetsSize)
		return (voipTargets[index] & (1 << (clientNum & 0x07)));

	return qfalse;
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
          int voipTargetsSize = 255;
        
          int clientNum = 255;
        
          int _len_voipTargets0 = 65025;
          int * voipTargets = (int *) malloc(_len_voipTargets0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_voipTargets0; _i0++) {
            voipTargets[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = Com_IsVoipTarget(voipTargets,voipTargetsSize,clientNum);
          printf("%d\n", benchRet); 
          free(voipTargets);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int voipTargetsSize = 10;
        
          int clientNum = 10;
        
          int _len_voipTargets0 = 100;
          int * voipTargets = (int *) malloc(_len_voipTargets0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_voipTargets0; _i0++) {
            voipTargets[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = Com_IsVoipTarget(voipTargets,voipTargetsSize,clientNum);
          printf("%d\n", benchRet); 
          free(voipTargets);
        
        break;
    }
    // empty
    case 2:
    {
          int voipTargetsSize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int clientNum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_voipTargets0 = 1;
          int * voipTargets = (int *) malloc(_len_voipTargets0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_voipTargets0; _i0++) {
            voipTargets[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = Com_IsVoipTarget(voipTargets,voipTargetsSize,clientNum);
          printf("%d\n", benchRet); 
          free(voipTargets);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
