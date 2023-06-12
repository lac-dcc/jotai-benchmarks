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
struct snd_trident {int* ChanMap; int /*<<< orphan*/  ChanPCMcnt; } ;

/* Variables and functions */
 size_t T4D_BANK_B ; 

__attribute__((used)) static void snd_trident_free_pcm_channel(struct snd_trident *trident, int channel)
{
	if (channel < 32 || channel > 63)
		return;
	channel &= 0x1f;
	if (trident->ChanMap[T4D_BANK_B] & (1 << channel)) {
		trident->ChanMap[T4D_BANK_B] &= ~(1 << channel);
		trident->ChanPCMcnt--;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          int channel = 100;
        
          int _len_trident0 = 1;
          struct snd_trident * trident = (struct snd_trident *) malloc(_len_trident0*sizeof(struct snd_trident));
          for(int _i0 = 0; _i0 < _len_trident0; _i0++) {
              int _len_trident__i0__ChanMap0 = 1;
          trident[_i0].ChanMap = (int *) malloc(_len_trident__i0__ChanMap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trident__i0__ChanMap0; _j0++) {
            trident[_i0].ChanMap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          trident[_i0].ChanPCMcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_trident_free_pcm_channel(trident,channel);
          for(int _aux = 0; _aux < _len_trident0; _aux++) {
          free(trident[_aux].ChanMap);
          }
          free(trident);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          int channel = 255;
        
          int _len_trident0 = 65025;
          struct snd_trident * trident = (struct snd_trident *) malloc(_len_trident0*sizeof(struct snd_trident));
          for(int _i0 = 0; _i0 < _len_trident0; _i0++) {
              int _len_trident__i0__ChanMap0 = 1;
          trident[_i0].ChanMap = (int *) malloc(_len_trident__i0__ChanMap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trident__i0__ChanMap0; _j0++) {
            trident[_i0].ChanMap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          trident[_i0].ChanPCMcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_trident_free_pcm_channel(trident,channel);
          for(int _aux = 0; _aux < _len_trident0; _aux++) {
          free(trident[_aux].ChanMap);
          }
          free(trident);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int channel = 10;
        
          int _len_trident0 = 100;
          struct snd_trident * trident = (struct snd_trident *) malloc(_len_trident0*sizeof(struct snd_trident));
          for(int _i0 = 0; _i0 < _len_trident0; _i0++) {
              int _len_trident__i0__ChanMap0 = 1;
          trident[_i0].ChanMap = (int *) malloc(_len_trident__i0__ChanMap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trident__i0__ChanMap0; _j0++) {
            trident[_i0].ChanMap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          trident[_i0].ChanPCMcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_trident_free_pcm_channel(trident,channel);
          for(int _aux = 0; _aux < _len_trident0; _aux++) {
          free(trident[_aux].ChanMap);
          }
          free(trident);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_trident0 = 1;
          struct snd_trident * trident = (struct snd_trident *) malloc(_len_trident0*sizeof(struct snd_trident));
          for(int _i0 = 0; _i0 < _len_trident0; _i0++) {
              int _len_trident__i0__ChanMap0 = 1;
          trident[_i0].ChanMap = (int *) malloc(_len_trident__i0__ChanMap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trident__i0__ChanMap0; _j0++) {
            trident[_i0].ChanMap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          trident[_i0].ChanPCMcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_trident_free_pcm_channel(trident,channel);
          for(int _aux = 0; _aux < _len_trident0; _aux++) {
          free(trident[_aux].ChanMap);
          }
          free(trident);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
