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

    default:
        usage();
        break;

    }

    return 0;
}
