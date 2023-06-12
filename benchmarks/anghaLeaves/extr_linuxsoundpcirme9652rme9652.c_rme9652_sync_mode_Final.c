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
struct snd_rme9652 {int control_register; } ;

/* Variables and functions */
 int RME9652_Master ; 
 int RME9652_wsel ; 

__attribute__((used)) static int rme9652_sync_mode(struct snd_rme9652 *rme9652)
{
	if (rme9652->control_register & RME9652_wsel) {
		return 2;
	} else if (rme9652->control_register & RME9652_Master) {
		return 1;
	} else {
		return 0;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int _len_rme96520 = 65025;
          struct snd_rme9652 * rme9652 = (struct snd_rme9652 *) malloc(_len_rme96520*sizeof(struct snd_rme9652));
          for(int _i0 = 0; _i0 < _len_rme96520; _i0++) {
              rme9652[_i0].control_register = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rme9652_sync_mode(rme9652);
          printf("%d\n", benchRet); 
          free(rme9652);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int _len_rme96520 = 100;
          struct snd_rme9652 * rme9652 = (struct snd_rme9652 *) malloc(_len_rme96520*sizeof(struct snd_rme9652));
          for(int _i0 = 0; _i0 < _len_rme96520; _i0++) {
              rme9652[_i0].control_register = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rme9652_sync_mode(rme9652);
          printf("%d\n", benchRet); 
          free(rme9652);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int _len_rme96520 = 1;
          struct snd_rme9652 * rme9652 = (struct snd_rme9652 *) malloc(_len_rme96520*sizeof(struct snd_rme9652));
          for(int _i0 = 0; _i0 < _len_rme96520; _i0++) {
              rme9652[_i0].control_register = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rme9652_sync_mode(rme9652);
          printf("%d\n", benchRet); 
          free(rme9652);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
