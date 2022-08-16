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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int run_main_level1; int run_main_level2; int run_main_level3; int run_thread_level1; int run_thread_level2; int /*<<< orphan*/  devices_status; } ;
typedef  TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef  TYPE_2__ hashcat_ctx_t ;

/* Variables and functions */
 int /*<<< orphan*/  STATUS_CRACKED ; 

int mycracked (hashcat_ctx_t *hashcat_ctx)
{
  status_ctx_t *status_ctx = hashcat_ctx->status_ctx;

  status_ctx->devices_status = STATUS_CRACKED;

  status_ctx->run_main_level1   = false;
  status_ctx->run_main_level2   = false;
  status_ctx->run_main_level3   = false;
  status_ctx->run_thread_level1 = false;
  status_ctx->run_thread_level2 = false;

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
          int _len_hashcat_ctx0 = 1;
          struct TYPE_5__ * hashcat_ctx = (struct TYPE_5__ *) malloc(_len_hashcat_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_hashcat_ctx0; _i0++) {
              int _len_hashcat_ctx__i0__status_ctx0 = 1;
          hashcat_ctx[_i0].status_ctx = (struct TYPE_4__ *) malloc(_len_hashcat_ctx__i0__status_ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hashcat_ctx__i0__status_ctx0; _j0++) {
            hashcat_ctx[_i0].status_ctx->run_main_level1 = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].status_ctx->run_main_level2 = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].status_ctx->run_main_level3 = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].status_ctx->run_thread_level1 = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].status_ctx->run_thread_level2 = ((-2 * (next_i()%2)) + 1) * next_i();
        hashcat_ctx[_i0].status_ctx->devices_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mycracked(hashcat_ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hashcat_ctx0; _aux++) {
          free(hashcat_ctx[_aux].status_ctx);
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
