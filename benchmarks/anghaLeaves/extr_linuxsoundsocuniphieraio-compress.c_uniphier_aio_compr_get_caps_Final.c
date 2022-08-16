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
struct snd_compr_stream {int dummy; } ;
struct snd_compr_caps {int num_codecs; int /*<<< orphan*/ * codecs; int /*<<< orphan*/  max_fragments; int /*<<< orphan*/  min_fragments; int /*<<< orphan*/  max_fragment_size; int /*<<< orphan*/  min_fragment_size; } ;

/* Variables and functions */
 int /*<<< orphan*/  AUD_MAX_FRAGMENT ; 
 int /*<<< orphan*/  AUD_MAX_FRAGMENT_SIZE ; 
 int /*<<< orphan*/  AUD_MIN_FRAGMENT ; 
 int /*<<< orphan*/  AUD_MIN_FRAGMENT_SIZE ; 
 int /*<<< orphan*/  SND_AUDIOCODEC_IEC61937 ; 

__attribute__((used)) static int uniphier_aio_compr_get_caps(struct snd_compr_stream *cstream,
				       struct snd_compr_caps *caps)
{
	caps->num_codecs = 1;
	caps->min_fragment_size = AUD_MIN_FRAGMENT_SIZE;
	caps->max_fragment_size = AUD_MAX_FRAGMENT_SIZE;
	caps->min_fragments = AUD_MIN_FRAGMENT;
	caps->max_fragments = AUD_MAX_FRAGMENT;
	caps->codecs[0] = SND_AUDIOCODEC_IEC61937;

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
          int _len_cstream0 = 1;
          struct snd_compr_stream * cstream = (struct snd_compr_stream *) malloc(_len_cstream0*sizeof(struct snd_compr_stream));
          for(int _i0 = 0; _i0 < _len_cstream0; _i0++) {
            cstream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_caps0 = 1;
          struct snd_compr_caps * caps = (struct snd_compr_caps *) malloc(_len_caps0*sizeof(struct snd_compr_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0].num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_caps__i0__codecs0 = 1;
          caps[_i0].codecs = (int *) malloc(_len_caps__i0__codecs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_caps__i0__codecs0; _j0++) {
            caps[_i0].codecs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        caps[_i0].max_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uniphier_aio_compr_get_caps(cstream,caps);
          printf("%d\n", benchRet); 
          free(cstream);
          for(int _aux = 0; _aux < _len_caps0; _aux++) {
          free(caps[_aux].codecs);
          }
          free(caps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
