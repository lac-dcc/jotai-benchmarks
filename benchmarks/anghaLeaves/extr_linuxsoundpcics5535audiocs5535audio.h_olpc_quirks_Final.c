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
struct snd_card {int dummy; } ;
struct snd_ac97 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int olpc_quirks(struct snd_card *card, struct snd_ac97 *ac97)
{
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
          int _len_card0 = 1;
          struct snd_card * card = (struct snd_card *) malloc(_len_card0*sizeof(struct snd_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ac970 = 1;
          struct snd_ac97 * ac97 = (struct snd_ac97 *) malloc(_len_ac970*sizeof(struct snd_ac97));
          for(int _i0 = 0; _i0 < _len_ac970; _i0++) {
            ac97[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = olpc_quirks(card,ac97);
          printf("%d\n", benchRet); 
          free(card);
          free(ac97);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}