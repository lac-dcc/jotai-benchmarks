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
struct hpi_msg_format {int /*<<< orphan*/  format; int /*<<< orphan*/  channels; int /*<<< orphan*/  attributes; int /*<<< orphan*/  bit_rate; int /*<<< orphan*/  sample_rate; } ;
struct hpi_format {scalar_t__ unused; scalar_t__ mode_legacy; int /*<<< orphan*/  format; int /*<<< orphan*/  channels; int /*<<< orphan*/  attributes; int /*<<< orphan*/  bit_rate; int /*<<< orphan*/  sample_rate; } ;

/* Variables and functions */

__attribute__((used)) static void hpi_msg_to_format(struct hpi_format *pF,
	struct hpi_msg_format *pMF)
{
	pF->sample_rate = pMF->sample_rate;
	pF->bit_rate = pMF->bit_rate;
	pF->attributes = pMF->attributes;
	pF->channels = pMF->channels;
	pF->format = pMF->format;
	pF->mode_legacy = 0;
	pF->unused = 0;
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
          int _len_pF0 = 1;
          struct hpi_format * pF = (struct hpi_format *) malloc(_len_pF0*sizeof(struct hpi_format));
          for(int _i0 = 0; _i0 < _len_pF0; _i0++) {
            pF[_i0].unused = ((-2 * (next_i()%2)) + 1) * next_i();
        pF[_i0].mode_legacy = ((-2 * (next_i()%2)) + 1) * next_i();
        pF[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
        pF[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        pF[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        pF[_i0].bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        pF[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMF0 = 1;
          struct hpi_msg_format * pMF = (struct hpi_msg_format *) malloc(_len_pMF0*sizeof(struct hpi_msg_format));
          for(int _i0 = 0; _i0 < _len_pMF0; _i0++) {
            pMF[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
        pMF[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        pMF[_i0].attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        pMF[_i0].bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        pMF[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hpi_msg_to_format(pF,pMF);
          free(pF);
          free(pMF);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
