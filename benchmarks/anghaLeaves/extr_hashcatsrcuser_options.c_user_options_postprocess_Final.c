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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int status; } ;
typedef  TYPE_1__ user_options_t ;
struct TYPE_6__ {scalar_t__ wordlist_mode; } ;
typedef  TYPE_2__ user_options_extra_t ;
struct TYPE_7__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; } ;
typedef  TYPE_3__ hashcat_ctx_t ;

/* Variables and functions */
 scalar_t__ WL_MODE_STDIN ; 

void user_options_postprocess (hashcat_ctx_t *hashcat_ctx)
{
  user_options_t       *user_options       = hashcat_ctx->user_options;
  user_options_extra_t *user_options_extra = hashcat_ctx->user_options_extra;

  // automatic status

  if (user_options_extra->wordlist_mode == WL_MODE_STDIN)
  {
    user_options->status = true;
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
          int _len_hashcat_ctx0 = 1;
          struct TYPE_7__ * hashcat_ctx = (struct TYPE_7__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options_extra0 = 1;
          hashcat_ctx[_i0].user_options_extra = (struct TYPE_6__ *) malloc(_len_hashcat_ctx__i0__user_options_extra0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options_extra0; _j0++) {
            hashcat_ctx[_i0].user_options_extra->wordlist_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_5__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          user_options_postprocess(hashcat_ctx);
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options_extra);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          free(hashcat_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
