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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int flags; scalar_t__ usage_start; int /*<<< orphan*/  stripes_end; int /*<<< orphan*/  stripes_start; scalar_t__ limit_end; scalar_t__ limit_start; int /*<<< orphan*/  convert; int /*<<< orphan*/  vrange_end; int /*<<< orphan*/  vrange_start; int /*<<< orphan*/  drange_end; int /*<<< orphan*/  drange_start; int /*<<< orphan*/  devid; int /*<<< orphan*/  usage_end; int /*<<< orphan*/  profiles; } ;
typedef  TYPE_1__ btrfs_balance_opts ;
typedef  void* UINT32 ;
struct TYPE_6__ {scalar_t__ usage_start; scalar_t__ limit_start; int /*<<< orphan*/  flags; int /*<<< orphan*/  stripes_end; int /*<<< orphan*/  stripes_start; scalar_t__ limit; void* limit_end; int /*<<< orphan*/  convert; int /*<<< orphan*/  vrange_end; int /*<<< orphan*/  vrange_start; int /*<<< orphan*/  drange_end; int /*<<< orphan*/  drange_start; int /*<<< orphan*/  devid; int /*<<< orphan*/  usage; int /*<<< orphan*/  usage_end; int /*<<< orphan*/  profiles; } ;
typedef  TYPE_2__ BALANCE_ARGS ;

/* Variables and functions */
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_CONVERT ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_DEVID ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_DRANGE ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_LIMIT ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_LIMIT_RANGE ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_PROFILES ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_SOFT ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_STRIPES_RANGE ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_USAGE ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_USAGE_RANGE ; 
 int /*<<< orphan*/  BALANCE_ARGS_FLAGS_VRANGE ; 
 int BTRFS_BALANCE_OPTS_CONVERT ; 
 int BTRFS_BALANCE_OPTS_DEVID ; 
 int BTRFS_BALANCE_OPTS_DRANGE ; 
 int BTRFS_BALANCE_OPTS_LIMIT ; 
 int BTRFS_BALANCE_OPTS_PROFILES ; 
 int BTRFS_BALANCE_OPTS_SOFT ; 
 int BTRFS_BALANCE_OPTS_STRIPES ; 
 int BTRFS_BALANCE_OPTS_USAGE ; 
 int BTRFS_BALANCE_OPTS_VRANGE ; 

__attribute__((used)) static void copy_balance_args(btrfs_balance_opts* opts, BALANCE_ARGS* args) {
    if (opts->flags & BTRFS_BALANCE_OPTS_PROFILES) {
        args->profiles = opts->profiles;
        args->flags |= BALANCE_ARGS_FLAGS_PROFILES;
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_USAGE) {
        if (args->usage_start == 0) {
            args->flags |= BALANCE_ARGS_FLAGS_USAGE_RANGE;
            args->usage_start = opts->usage_start;
            args->usage_end = opts->usage_end;
        } else {
            args->flags |= BALANCE_ARGS_FLAGS_USAGE;
            args->usage = opts->usage_end;
        }
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_DEVID) {
        args->devid = opts->devid;
        args->flags |= BALANCE_ARGS_FLAGS_DEVID;
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_DRANGE) {
        args->drange_start = opts->drange_start;
        args->drange_end = opts->drange_end;
        args->flags |= BALANCE_ARGS_FLAGS_DRANGE;
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_VRANGE) {
        args->vrange_start = opts->vrange_start;
        args->vrange_end = opts->vrange_end;
        args->flags |= BALANCE_ARGS_FLAGS_VRANGE;
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_CONVERT) {
        args->convert = opts->convert;
        args->flags |= BALANCE_ARGS_FLAGS_CONVERT;

        if (opts->flags & BTRFS_BALANCE_OPTS_SOFT)
            args->flags |= BALANCE_ARGS_FLAGS_SOFT;
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_LIMIT) {
        if (args->limit_start == 0) {
            args->flags |= BALANCE_ARGS_FLAGS_LIMIT_RANGE;
            args->limit_start = (UINT32)opts->limit_start;
            args->limit_end = (UINT32)opts->limit_end;
        } else {
            args->flags |= BALANCE_ARGS_FLAGS_LIMIT;
            args->limit = opts->limit_end;
        }
    }

    if (opts->flags & BTRFS_BALANCE_OPTS_STRIPES) {
        args->stripes_start = opts->stripes_start;
        args->stripes_end = opts->stripes_end;
        args->flags |= BALANCE_ARGS_FLAGS_STRIPES_RANGE;
    }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_opts0 = 65025;
          struct TYPE_5__ * opts = (struct TYPE_5__ *) malloc(_len_opts0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].usage_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].stripes_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].stripes_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].limit_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].limit_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].convert = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].vrange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].vrange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].drange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].drange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].devid = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].usage_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].profiles = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_args0 = 65025;
          struct TYPE_6__ * args = (struct TYPE_6__ *) malloc(_len_args0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].usage_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].limit_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].stripes_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].stripes_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].convert = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].vrange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].vrange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].drange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].drange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].devid = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].usage = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].usage_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].profiles = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_balance_args(opts,args);
          free(opts);
          free(args);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_opts0 = 100;
          struct TYPE_5__ * opts = (struct TYPE_5__ *) malloc(_len_opts0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].usage_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].stripes_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].stripes_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].limit_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].limit_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].convert = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].vrange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].vrange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].drange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].drange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].devid = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].usage_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].profiles = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_args0 = 100;
          struct TYPE_6__ * args = (struct TYPE_6__ *) malloc(_len_args0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].usage_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].limit_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].stripes_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].stripes_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].convert = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].vrange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].vrange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].drange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].drange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].devid = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].usage = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].usage_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].profiles = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_balance_args(opts,args);
          free(opts);
          free(args);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_opts0 = 1;
          struct TYPE_5__ * opts = (struct TYPE_5__ *) malloc(_len_opts0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].usage_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].stripes_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].stripes_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].limit_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].limit_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].convert = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].vrange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].vrange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].drange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].drange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].devid = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].usage_end = ((-2 * (next_i()%2)) + 1) * next_i();
          opts[_i0].profiles = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_args0 = 1;
          struct TYPE_6__ * args = (struct TYPE_6__ *) malloc(_len_args0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].usage_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].limit_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].stripes_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].stripes_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].convert = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].vrange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].vrange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].drange_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].drange_start = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].devid = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].usage = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].usage_end = ((-2 * (next_i()%2)) + 1) * next_i();
          args[_i0].profiles = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_balance_args(opts,args);
          free(opts);
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
