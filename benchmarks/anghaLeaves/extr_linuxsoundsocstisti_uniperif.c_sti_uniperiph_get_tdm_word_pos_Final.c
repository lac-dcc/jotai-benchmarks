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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int slot_width; int slots; unsigned int mask; } ;
struct uniperif {TYPE_1__ tdm_slot; } ;

/* Variables and functions */
 int WORD_MAX ; 

int sti_uniperiph_get_tdm_word_pos(struct uniperif *uni,
				   unsigned int *word_pos)
{
	int slot_width = uni->tdm_slot.slot_width / 8;
	int slots_num = uni->tdm_slot.slots;
	unsigned int slots_mask = uni->tdm_slot.mask;
	int i, j, k;
	unsigned int word16_pos[4];

	/* word16_pos:
	 * word16_pos[0] = WORDX_LSB
	 * word16_pos[1] = WORDX_MSB,
	 * word16_pos[2] = WORDX+1_LSB
	 * word16_pos[3] = WORDX+1_MSB
	 */

	/* set unip word position */
	for (i = 0, j = 0, k = 0; (i < slots_num) && (k < WORD_MAX); i++) {
		if ((slots_mask >> i) & 0x01) {
			word16_pos[j] = i * slot_width;

			if (slot_width == 4) {
				word16_pos[j + 1] = word16_pos[j] + 2;
				j++;
			}
			j++;

			if (j > 3) {
				word_pos[k] = word16_pos[1] |
					      (word16_pos[0] << 8) |
					      (word16_pos[3] << 16) |
					      (word16_pos[2] << 24);
				j = 0;
				k++;
			}
		}
	}

	return 0;
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
          int _len_uni0 = 1;
          struct uniperif * uni = (struct uniperif *) malloc(_len_uni0*sizeof(struct uniperif));
          for(int _i0 = 0; _i0 < _len_uni0; _i0++) {
            uni[_i0].tdm_slot.slot_width = ((-2 * (next_i()%2)) + 1) * next_i();
        uni[_i0].tdm_slot.slots = ((-2 * (next_i()%2)) + 1) * next_i();
        uni[_i0].tdm_slot.mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_word_pos0 = 1;
          unsigned int * word_pos = (unsigned int *) malloc(_len_word_pos0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_word_pos0; _i0++) {
            word_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sti_uniperiph_get_tdm_word_pos(uni,word_pos);
          printf("%d\n", benchRet); 
          free(uni);
          free(word_pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
