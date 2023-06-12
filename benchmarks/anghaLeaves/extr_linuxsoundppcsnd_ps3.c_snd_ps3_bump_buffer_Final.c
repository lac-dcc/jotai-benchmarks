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
struct snd_ps3_card_info {scalar_t__* dma_last_transfer_vaddr; scalar_t__* dma_next_transfer_vaddr; scalar_t__* dma_start_vaddr; int dma_buffer_size; } ;
typedef  enum snd_ps3_ch { ____Placeholder_snd_ps3_ch } snd_ps3_ch ;

/* Variables and functions */

__attribute__((used)) static void snd_ps3_bump_buffer(struct snd_ps3_card_info *card,
				enum snd_ps3_ch ch, size_t byte_count,
				int stage)
{
	if (!stage)
		card->dma_last_transfer_vaddr[ch] =
			card->dma_next_transfer_vaddr[ch];
	card->dma_next_transfer_vaddr[ch] += byte_count;
	if ((card->dma_start_vaddr[ch] + (card->dma_buffer_size / 2)) <=
	    card->dma_next_transfer_vaddr[ch]) {
		card->dma_next_transfer_vaddr[ch] = card->dma_start_vaddr[ch];
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          enum snd_ps3_ch ch = 0;
        
          unsigned long byte_count = 100;
        
          int stage = 100;
        
          int _len_card0 = 1;
          struct snd_ps3_card_info * card = (struct snd_ps3_card_info *) malloc(_len_card0*sizeof(struct snd_ps3_card_info));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__dma_last_transfer_vaddr0 = 1;
          card[_i0].dma_last_transfer_vaddr = (long *) malloc(_len_card__i0__dma_last_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_last_transfer_vaddr0; _j0++) {
            card[_i0].dma_last_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_next_transfer_vaddr0 = 1;
          card[_i0].dma_next_transfer_vaddr = (long *) malloc(_len_card__i0__dma_next_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_next_transfer_vaddr0; _j0++) {
            card[_i0].dma_next_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_start_vaddr0 = 1;
          card[_i0].dma_start_vaddr = (long *) malloc(_len_card__i0__dma_start_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_start_vaddr0; _j0++) {
            card[_i0].dma_start_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          card[_i0].dma_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_ps3_bump_buffer(card,ch,byte_count,stage);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_last_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_next_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_start_vaddr);
          }
          free(card);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          enum snd_ps3_ch ch = 0;
        
          unsigned long byte_count = 255;
        
          int stage = 255;
        
          int _len_card0 = 65025;
          struct snd_ps3_card_info * card = (struct snd_ps3_card_info *) malloc(_len_card0*sizeof(struct snd_ps3_card_info));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__dma_last_transfer_vaddr0 = 1;
          card[_i0].dma_last_transfer_vaddr = (long *) malloc(_len_card__i0__dma_last_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_last_transfer_vaddr0; _j0++) {
            card[_i0].dma_last_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_next_transfer_vaddr0 = 1;
          card[_i0].dma_next_transfer_vaddr = (long *) malloc(_len_card__i0__dma_next_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_next_transfer_vaddr0; _j0++) {
            card[_i0].dma_next_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_start_vaddr0 = 1;
          card[_i0].dma_start_vaddr = (long *) malloc(_len_card__i0__dma_start_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_start_vaddr0; _j0++) {
            card[_i0].dma_start_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          card[_i0].dma_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_ps3_bump_buffer(card,ch,byte_count,stage);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_last_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_next_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_start_vaddr);
          }
          free(card);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          enum snd_ps3_ch ch = 0;
        
          unsigned long byte_count = 10;
        
          int stage = 10;
        
          int _len_card0 = 100;
          struct snd_ps3_card_info * card = (struct snd_ps3_card_info *) malloc(_len_card0*sizeof(struct snd_ps3_card_info));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__dma_last_transfer_vaddr0 = 1;
          card[_i0].dma_last_transfer_vaddr = (long *) malloc(_len_card__i0__dma_last_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_last_transfer_vaddr0; _j0++) {
            card[_i0].dma_last_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_next_transfer_vaddr0 = 1;
          card[_i0].dma_next_transfer_vaddr = (long *) malloc(_len_card__i0__dma_next_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_next_transfer_vaddr0; _j0++) {
            card[_i0].dma_next_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_start_vaddr0 = 1;
          card[_i0].dma_start_vaddr = (long *) malloc(_len_card__i0__dma_start_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_start_vaddr0; _j0++) {
            card[_i0].dma_start_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          card[_i0].dma_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_ps3_bump_buffer(card,ch,byte_count,stage);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_last_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_next_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_start_vaddr);
          }
          free(card);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          enum snd_ps3_ch ch = 0;
        
          unsigned long byte_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int stage = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_card0 = 1;
          struct snd_ps3_card_info * card = (struct snd_ps3_card_info *) malloc(_len_card0*sizeof(struct snd_ps3_card_info));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__dma_last_transfer_vaddr0 = 1;
          card[_i0].dma_last_transfer_vaddr = (long *) malloc(_len_card__i0__dma_last_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_last_transfer_vaddr0; _j0++) {
            card[_i0].dma_last_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_next_transfer_vaddr0 = 1;
          card[_i0].dma_next_transfer_vaddr = (long *) malloc(_len_card__i0__dma_next_transfer_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_next_transfer_vaddr0; _j0++) {
            card[_i0].dma_next_transfer_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__dma_start_vaddr0 = 1;
          card[_i0].dma_start_vaddr = (long *) malloc(_len_card__i0__dma_start_vaddr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__dma_start_vaddr0; _j0++) {
            card[_i0].dma_start_vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          card[_i0].dma_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_ps3_bump_buffer(card,ch,byte_count,stage);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_last_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_next_transfer_vaddr);
          }
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dma_start_vaddr);
          }
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
