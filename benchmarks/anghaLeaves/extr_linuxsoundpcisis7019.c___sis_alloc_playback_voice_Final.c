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
struct voice {int flags; } ;
struct sis7019 {struct voice* voices; } ;

/* Variables and functions */
 int VOICE_IN_USE ; 

__attribute__((used)) static struct voice *__sis_alloc_playback_voice(struct sis7019 *sis)
{
	/* Must hold the voice_lock on entry */
	struct voice *voice;
	int i;

	for (i = 0; i < 64; i++) {
		voice = &sis->voices[i];
		if (voice->flags & VOICE_IN_USE)
			continue;
		voice->flags |= VOICE_IN_USE;
		goto found_one;
	}
	voice = NULL;

found_one:
	return voice;
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
          int _len_sis0 = 1;
          struct sis7019 * sis = (struct sis7019 *) malloc(_len_sis0*sizeof(struct sis7019));
          for(int _i0 = 0; _i0 < _len_sis0; _i0++) {
              int _len_sis__i0__voices0 = 1;
          sis[_i0].voices = (struct voice *) malloc(_len_sis__i0__voices0*sizeof(struct voice));
          for(int _j0 = 0; _j0 < _len_sis__i0__voices0; _j0++) {
            sis[_i0].voices->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct voice * benchRet = __sis_alloc_playback_voice(sis);
          printf("%d\n", (*benchRet).flags);
          for(int _aux = 0; _aux < _len_sis0; _aux++) {
          free(sis[_aux].voices);
          }
          free(sis);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
