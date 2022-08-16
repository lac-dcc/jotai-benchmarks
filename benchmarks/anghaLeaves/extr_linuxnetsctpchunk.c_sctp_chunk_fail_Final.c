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
struct sctp_chunk {TYPE_1__* msg; } ;
struct TYPE_2__ {int send_failed; int send_error; } ;

/* Variables and functions */

void sctp_chunk_fail(struct sctp_chunk *chunk, int error)
{
	chunk->msg->send_failed = 1;
	chunk->msg->send_error = error;
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
          int error = 100;
          int _len_chunk0 = 1;
          struct sctp_chunk * chunk = (struct sctp_chunk *) malloc(_len_chunk0*sizeof(struct sctp_chunk));
          for(int _i0 = 0; _i0 < _len_chunk0; _i0++) {
              int _len_chunk__i0__msg0 = 1;
          chunk[_i0].msg = (struct TYPE_2__ *) malloc(_len_chunk__i0__msg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chunk__i0__msg0; _j0++) {
            chunk[_i0].msg->send_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        chunk[_i0].msg->send_error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sctp_chunk_fail(chunk,error);
          for(int _aux = 0; _aux < _len_chunk0; _aux++) {
          free(chunk[_aux].msg);
          }
          free(chunk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
