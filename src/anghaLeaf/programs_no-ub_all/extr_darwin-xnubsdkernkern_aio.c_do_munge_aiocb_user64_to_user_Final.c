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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  sival_int; } ;
struct TYPE_8__ {TYPE_1__ size_equivalent; } ;
struct TYPE_11__ {int /*<<< orphan*/  sigev_notify_attributes; int /*<<< orphan*/  sigev_notify_function; TYPE_2__ sigev_value; int /*<<< orphan*/  sigev_signo; int /*<<< orphan*/  sigev_notify; } ;
struct user_aiocb {TYPE_5__ aio_sigevent; int /*<<< orphan*/  aio_lio_opcode; int /*<<< orphan*/  aio_reqprio; int /*<<< orphan*/  aio_nbytes; int /*<<< orphan*/  aio_buf; int /*<<< orphan*/  aio_offset; int /*<<< orphan*/  aio_fildes; } ;
struct TYPE_9__ {int /*<<< orphan*/  sival_int; } ;
struct TYPE_10__ {TYPE_3__ size_equivalent; } ;
struct TYPE_12__ {int /*<<< orphan*/  sigev_notify_attributes; int /*<<< orphan*/  sigev_notify_function; TYPE_4__ sigev_value; int /*<<< orphan*/  sigev_signo; int /*<<< orphan*/  sigev_notify; } ;
struct user64_aiocb {TYPE_6__ aio_sigevent; int /*<<< orphan*/  aio_lio_opcode; int /*<<< orphan*/  aio_reqprio; int /*<<< orphan*/  aio_nbytes; int /*<<< orphan*/  aio_buf; int /*<<< orphan*/  aio_offset; int /*<<< orphan*/  aio_fildes; } ;

/* Variables and functions */

__attribute__((used)) static void 
do_munge_aiocb_user64_to_user( struct user64_aiocb *my_aiocbp, struct user_aiocb *the_user_aiocbp ) 
{
	the_user_aiocbp->aio_fildes = my_aiocbp->aio_fildes;
	the_user_aiocbp->aio_offset = my_aiocbp->aio_offset;
	the_user_aiocbp->aio_buf = my_aiocbp->aio_buf;
	the_user_aiocbp->aio_nbytes = my_aiocbp->aio_nbytes;
	the_user_aiocbp->aio_reqprio = my_aiocbp->aio_reqprio;
	the_user_aiocbp->aio_lio_opcode = my_aiocbp->aio_lio_opcode;
	
	the_user_aiocbp->aio_sigevent.sigev_notify = my_aiocbp->aio_sigevent.sigev_notify;
	the_user_aiocbp->aio_sigevent.sigev_signo = my_aiocbp->aio_sigevent.sigev_signo;
	the_user_aiocbp->aio_sigevent.sigev_value.size_equivalent.sival_int = 
		my_aiocbp->aio_sigevent.sigev_value.size_equivalent.sival_int;
	the_user_aiocbp->aio_sigevent.sigev_notify_function = 
		my_aiocbp->aio_sigevent.sigev_notify_function;
	the_user_aiocbp->aio_sigevent.sigev_notify_attributes = 
		my_aiocbp->aio_sigevent.sigev_notify_attributes;
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

    // big-arr
    case 0:
    {
          int _len_my_aiocbp0 = 1;
          struct user64_aiocb * my_aiocbp = (struct user64_aiocb *) malloc(_len_my_aiocbp0*sizeof(struct user64_aiocb));
          for(int _i0 = 0; _i0 < _len_my_aiocbp0; _i0++) {
            my_aiocbp->aio_sigevent.sigev_notify_attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_sigevent.sigev_notify_function = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_sigevent.sigev_value.size_equivalent.sival_int = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_sigevent.sigev_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_sigevent.sigev_notify = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_lio_opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_reqprio = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_nbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        my_aiocbp->aio_fildes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_the_user_aiocbp0 = 1;
          struct user_aiocb * the_user_aiocbp = (struct user_aiocb *) malloc(_len_the_user_aiocbp0*sizeof(struct user_aiocb));
          for(int _i0 = 0; _i0 < _len_the_user_aiocbp0; _i0++) {
            the_user_aiocbp->aio_sigevent.sigev_notify_attributes = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_sigevent.sigev_notify_function = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_sigevent.sigev_value.size_equivalent.sival_int = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_sigevent.sigev_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_sigevent.sigev_notify = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_lio_opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_reqprio = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_nbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        the_user_aiocbp->aio_fildes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          do_munge_aiocb_user64_to_user(my_aiocbp,the_user_aiocbp);
          free(my_aiocbp);
          free(the_user_aiocbp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
