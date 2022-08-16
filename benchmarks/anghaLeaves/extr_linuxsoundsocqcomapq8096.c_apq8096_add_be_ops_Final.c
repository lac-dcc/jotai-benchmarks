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
struct snd_soc_dai_link {int no_pcm; int /*<<< orphan*/  be_hw_params_fixup; } ;
struct snd_soc_card {int num_links; struct snd_soc_dai_link* dai_link; } ;

/* Variables and functions */
 int /*<<< orphan*/  apq8096_be_hw_params_fixup ; 

__attribute__((used)) static void apq8096_add_be_ops(struct snd_soc_card *card)
{
	struct snd_soc_dai_link *link = card->dai_link;
	int i, num_links = card->num_links;

	for (i = 0; i < num_links; i++) {
		if (link->no_pcm == 1)
			link->be_hw_params_fixup = apq8096_be_hw_params_fixup;
		link++;
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
          int _len_card0 = 1;
          struct snd_soc_card * card = (struct snd_soc_card *) malloc(_len_card0*sizeof(struct snd_soc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].num_links = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__dai_link0 = 1;
          card[_i0].dai_link = (struct snd_soc_dai_link *) malloc(_len_card__i0__dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _j0 = 0; _j0 < _len_card__i0__dai_link0; _j0++) {
            card[_i0].dai_link->no_pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].dai_link->be_hw_params_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          apq8096_add_be_ops(card);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dai_link);
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
