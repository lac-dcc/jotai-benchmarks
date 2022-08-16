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
struct snd_pmac {unsigned int* freq_table; int num_freqs; } ;
struct pmac_stream {int cur_freqs; } ;

/* Variables and functions */

unsigned int snd_pmac_rate_index(struct snd_pmac *chip, struct pmac_stream *rec, unsigned int rate)
{
	int i, ok, found;

	ok = rec->cur_freqs;
	if (rate > chip->freq_table[0])
		return 0;
	found = 0;
	for (i = 0; i < chip->num_freqs; i++, ok >>= 1) {
		if (! (ok & 1)) continue;
		found = i;
		if (rate >= chip->freq_table[i])
			break;
	}
	return found;
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
          unsigned int rate = 100;
          int _len_chip0 = 1;
          struct snd_pmac * chip = (struct snd_pmac *) malloc(_len_chip0*sizeof(struct snd_pmac));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__freq_table0 = 1;
          chip[_i0].freq_table = (unsigned int *) malloc(_len_chip__i0__freq_table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_chip__i0__freq_table0; _j0++) {
            chip[_i0].freq_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].num_freqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rec0 = 1;
          struct pmac_stream * rec = (struct pmac_stream *) malloc(_len_rec0*sizeof(struct pmac_stream));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].cur_freqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = snd_pmac_rate_index(chip,rec,rate);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].freq_table);
          }
          free(chip);
          free(rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
