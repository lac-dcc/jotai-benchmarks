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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int slow_candidates; } ;
typedef  TYPE_1__ user_options_t ;
struct TYPE_9__ {scalar_t__ attack_kern; } ;
typedef  TYPE_2__ user_options_extra_t ;
typedef  int u64 ;
struct TYPE_10__ {int kernel_rules_cnt; } ;
typedef  TYPE_3__ straight_ctx_t ;
struct TYPE_11__ {int bfs_cnt; } ;
typedef  TYPE_4__ mask_ctx_t ;
struct TYPE_12__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_3__* straight_ctx; TYPE_4__* mask_ctx; TYPE_6__* combinator_ctx; } ;
typedef  TYPE_5__ hashcat_ctx_t ;
struct TYPE_13__ {int combs_cnt; } ;
typedef  TYPE_6__ combinator_ctx_t ;

/* Variables and functions */
 scalar_t__ ATTACK_KERN_BF ; 
 scalar_t__ ATTACK_KERN_COMBI ; 
 scalar_t__ ATTACK_KERN_STRAIGHT ; 

u64 user_options_extra_amplifier (hashcat_ctx_t *hashcat_ctx)
{
  const combinator_ctx_t     *combinator_ctx     = hashcat_ctx->combinator_ctx;
  const mask_ctx_t           *mask_ctx           = hashcat_ctx->mask_ctx;
  const straight_ctx_t       *straight_ctx       = hashcat_ctx->straight_ctx;
  const user_options_t       *user_options       = hashcat_ctx->user_options;
  const user_options_extra_t *user_options_extra = hashcat_ctx->user_options_extra;

  if (user_options->slow_candidates == true)
  {
    return 1;
  }
  else
  {
    if (user_options_extra->attack_kern == ATTACK_KERN_STRAIGHT)
    {
      if (straight_ctx->kernel_rules_cnt)
      {
        return straight_ctx->kernel_rules_cnt;
      }
    }
    else if (user_options_extra->attack_kern == ATTACK_KERN_COMBI)
    {
      if (combinator_ctx->combs_cnt)
      {
        return combinator_ctx->combs_cnt;
      }
    }
    else if (user_options_extra->attack_kern == ATTACK_KERN_BF)
    {
      if (mask_ctx->bfs_cnt)
      {
        return mask_ctx->bfs_cnt;
      }
    }
  }

  return 1;
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
          struct TYPE_12__ * hashcat_ctx = (struct TYPE_12__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__user_options_extra0 = 1;
          hashcat_ctx[_i0].user_options_extra = (struct TYPE_9__ *) malloc(_len_hashcat_ctx__i0__user_options_extra0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options_extra0; _j0++) {
            hashcat_ctx[_i0].user_options_extra->attack_kern = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__user_options0 = 1;
          hashcat_ctx[_i0].user_options = (struct TYPE_8__ *) malloc(_len_hashcat_ctx__i0__user_options0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__user_options0; _j0++) {
            hashcat_ctx[_i0].user_options->slow_candidates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__straight_ctx0 = 1;
          hashcat_ctx[_i0].straight_ctx = (struct TYPE_10__ *) malloc(_len_hashcat_ctx__i0__straight_ctx0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__straight_ctx0; _j0++) {
            hashcat_ctx[_i0].straight_ctx->kernel_rules_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__mask_ctx0 = 1;
          hashcat_ctx[_i0].mask_ctx = (struct TYPE_11__ *) malloc(_len_hashcat_ctx__i0__mask_ctx0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__mask_ctx0; _j0++) {
            hashcat_ctx[_i0].mask_ctx->bfs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hashcat_ctx__i0__combinator_ctx0 = 1;
          hashcat_ctx[_i0].combinator_ctx = (struct TYPE_13__ *) malloc(_len_hashcat_ctx__i0__combinator_ctx0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__combinator_ctx0; _j0++) {
            hashcat_ctx[_i0].combinator_ctx->combs_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = user_options_extra_amplifier(hashcat_ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options_extra);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].user_options);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].straight_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].mask_ctx);
          }
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].combinator_ctx);
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
