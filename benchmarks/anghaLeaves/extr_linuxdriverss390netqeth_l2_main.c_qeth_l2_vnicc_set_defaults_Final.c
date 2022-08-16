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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {void* wanted_chars; int /*<<< orphan*/  getset_timeout_sup; void* set_char_sup; int /*<<< orphan*/  learning_timeout; void* cur_chars; void* sup_chars; } ;
struct TYPE_3__ {TYPE_2__ vnicc; } ;
struct qeth_card {TYPE_1__ options; } ;

/* Variables and functions */
 void* QETH_VNICC_ALL ; 
 void* QETH_VNICC_DEFAULT ; 
 int /*<<< orphan*/  QETH_VNICC_DEFAULT_TIMEOUT ; 
 int /*<<< orphan*/  QETH_VNICC_LEARNING ; 

__attribute__((used)) static void qeth_l2_vnicc_set_defaults(struct qeth_card *card)
{
	/* characteristics values */
	card->options.vnicc.sup_chars = QETH_VNICC_ALL;
	card->options.vnicc.cur_chars = QETH_VNICC_DEFAULT;
	card->options.vnicc.learning_timeout = QETH_VNICC_DEFAULT_TIMEOUT;
	/* supported commands */
	card->options.vnicc.set_char_sup = QETH_VNICC_ALL;
	card->options.vnicc.getset_timeout_sup = QETH_VNICC_LEARNING;
	/* settings wanted by users */
	card->options.vnicc.wanted_chars = QETH_VNICC_DEFAULT;
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
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].options.vnicc.getset_timeout_sup = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.vnicc.learning_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_l2_vnicc_set_defaults(card);
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
