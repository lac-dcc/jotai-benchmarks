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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/  sival_ptr; } ;
struct TYPE_9__ {int /*<<< orphan*/  si_band; TYPE_2__ si_value; int /*<<< orphan*/  si_addr; int /*<<< orphan*/  si_status; int /*<<< orphan*/  si_uid; int /*<<< orphan*/  si_pid; int /*<<< orphan*/  si_code; int /*<<< orphan*/  si_errno; int /*<<< orphan*/  si_signo; } ;
typedef  TYPE_3__ user_siginfo_t ;
struct TYPE_7__ {int /*<<< orphan*/  sival_ptr; } ;
struct TYPE_10__ {int /*<<< orphan*/  si_band; TYPE_1__ si_value; int /*<<< orphan*/  si_addr; int /*<<< orphan*/  si_status; int /*<<< orphan*/  si_uid; int /*<<< orphan*/  si_pid; int /*<<< orphan*/  si_code; int /*<<< orphan*/  si_errno; int /*<<< orphan*/  si_signo; } ;
typedef  TYPE_4__ user64_siginfo_t ;

/* Variables and functions */

void
siginfo_user_to_user64(user_siginfo_t *in, user64_siginfo_t *out)
{
	out->si_signo	= in->si_signo;
	out->si_errno	= in->si_errno;
	out->si_code	= in->si_code;
	out->si_pid	= in->si_pid;
	out->si_uid	= in->si_uid;
	out->si_status	= in->si_status;
	out->si_addr	= in->si_addr;
	/* following cast works for sival_int because of padding */
	out->si_value.sival_ptr	= in->si_value.sival_ptr;
	out->si_band	= in->si_band;			/* range reduction */
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
          int _len_in0 = 65025;
          struct TYPE_9__ * in = (struct TYPE_9__ *) malloc(_len_in0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              in[_i0].si_band = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_value.sival_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          in[_i0].si_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_status = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_errno = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_out0 = 65025;
          struct TYPE_10__ * out = (struct TYPE_10__ *) malloc(_len_out0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              out[_i0].si_band = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_value.sival_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          out[_i0].si_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_status = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_errno = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          siginfo_user_to_user64(in,out);
          free(in);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_in0 = 100;
          struct TYPE_9__ * in = (struct TYPE_9__ *) malloc(_len_in0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              in[_i0].si_band = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_value.sival_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          in[_i0].si_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_status = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_errno = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_out0 = 100;
          struct TYPE_10__ * out = (struct TYPE_10__ *) malloc(_len_out0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              out[_i0].si_band = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_value.sival_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          out[_i0].si_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_status = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_errno = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          siginfo_user_to_user64(in,out);
          free(in);
          free(out);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_in0 = 1;
          struct TYPE_9__ * in = (struct TYPE_9__ *) malloc(_len_in0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              in[_i0].si_band = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_value.sival_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          in[_i0].si_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_status = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_errno = ((-2 * (next_i()%2)) + 1) * next_i();
          in[_i0].si_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_out0 = 1;
          struct TYPE_10__ * out = (struct TYPE_10__ *) malloc(_len_out0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              out[_i0].si_band = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_value.sival_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          out[_i0].si_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_status = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_errno = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].si_signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          siginfo_user_to_user64(in,out);
          free(in);
          free(out);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
