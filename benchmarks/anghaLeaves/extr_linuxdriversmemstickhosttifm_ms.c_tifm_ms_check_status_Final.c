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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct tifm_ms {int cmd_flags; TYPE_1__* req; } ;
struct TYPE_2__ {scalar_t__ need_card_int; int /*<<< orphan*/  error; } ;

/* Variables and functions */
 int CARD_INT ; 
 int CMD_READY ; 
 int FIFO_READY ; 

__attribute__((used)) static int tifm_ms_check_status(struct tifm_ms *host)
{
	if (!host->req->error) {
		if (!(host->cmd_flags & CMD_READY))
			return 1;
		if (!(host->cmd_flags & FIFO_READY))
			return 1;
		if (host->req->need_card_int
		    && !(host->cmd_flags & CARD_INT))
			return 1;
	}
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
          int _len_host0 = 1;
          struct tifm_ms * host = (struct tifm_ms *) malloc(_len_host0*sizeof(struct tifm_ms));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__req0 = 1;
          host[_i0].req = (struct TYPE_2__ *) malloc(_len_host__i0__req0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__req0; _j0++) {
            host[_i0].req->need_card_int = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].req->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tifm_ms_check_status(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].req);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
