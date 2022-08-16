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
typedef  int tcflag_t ;
struct tty {int t_flags; } ;
struct termios {int c_iflag; int c_oflag; int c_lflag; int c_cflag; } ;

/* Variables and functions */
 int ANYP ; 
 int CRTERA ; 
 int CRTKIL ; 
 int CS7 ; 
 int CS8 ; 
 int CSIZE ; 
 int CTLECH ; 
 int DECCTQ ; 
 int ECHOCTL ; 
 int ECHOE ; 
 int ECHOKE ; 
 int ECHOPRT ; 
 int FLUSHO ; 
 int HUPCL ; 
 int IGNCR ; 
 int IGNPAR ; 
 int INLCR ; 
 int ISTRIP ; 
 int IXANY ; 
 int IXOFF ; 
 int LITOUT ; 
 int MDMBUF ; 
 int NOFLSH ; 
 int NOHANG ; 
 int OPOST ; 
 int PARENB ; 
 int PARMRK ; 
 int PASS8 ; 
 int PENDIN ; 
 int PRTERA ; 
 int RAW ; 
 int TANDEM ; 
 int TOSTOP ; 

__attribute__((used)) static void
ttcompatsetlflags(struct tty *tp, struct termios *t)
{
	int flags = tp->t_flags;
	tcflag_t iflag	= t->c_iflag;
	tcflag_t oflag	= t->c_oflag;
	tcflag_t lflag	= t->c_lflag;
	tcflag_t cflag	= t->c_cflag;

	iflag &= ~(PARMRK|IGNPAR|IGNCR|INLCR);
	if (flags&CRTERA)
		lflag |= ECHOE;
	else
		lflag &= ~ECHOE;
	if (flags&CRTKIL)
		lflag |= ECHOKE;
	else
		lflag &= ~ECHOKE;
	if (flags&PRTERA)
		lflag |= ECHOPRT;
	else
		lflag &= ~ECHOPRT;
	if (flags&CTLECH)
		lflag |= ECHOCTL;
	else
		lflag &= ~ECHOCTL;
	if (flags&TANDEM)
		iflag |= IXOFF;
	else
		iflag &= ~IXOFF;
	if ((flags&DECCTQ) == 0)
		iflag |= IXANY;
	else
		iflag &= ~IXANY;
	if (flags & MDMBUF)
		cflag |= MDMBUF;
	else
		cflag &= ~MDMBUF;
	if (flags&NOHANG)
		cflag &= ~HUPCL;
	else
		cflag |= HUPCL;
	lflag &= ~(TOSTOP|FLUSHO|PENDIN|NOFLSH);
	lflag |= flags&(TOSTOP|FLUSHO|PENDIN|NOFLSH);

	/*
	 * The next if-else statement is copied from above so don't bother
	 * checking it separately.  We could avoid fiddlling with the
	 * character size if the mode is already RAW or if neither the
	 * LITOUT bit or the PASS8 bit is being changed, but the delta of
	 * the change is not available here and skipping the RAW case would
	 * make the code different from above.
	 */
	cflag &= ~(CSIZE|PARENB);
	if (flags&(RAW|LITOUT|PASS8)) {
		cflag |= CS8;
		if (!(flags&(RAW|PASS8))
		    || (flags&(RAW|PASS8|ANYP)) == (PASS8|ANYP))
			iflag |= ISTRIP;
		else
			iflag &= ~ISTRIP;
		if (flags&(RAW|LITOUT))
			oflag &= ~OPOST;
		else
			oflag |= OPOST;
	} else {
		cflag |= CS7|PARENB;
		iflag |= ISTRIP;
		oflag |= OPOST;
	}
	t->c_iflag = iflag;
	t->c_oflag = oflag;
	t->c_lflag = lflag;
	t->c_cflag = cflag;
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
          int _len_tp0 = 1;
          struct tty * tp = (struct tty *) malloc(_len_tp0*sizeof(struct tty));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 1;
          struct termios * t = (struct termios *) malloc(_len_t0*sizeof(struct termios));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ttcompatsetlflags(tp,t);
          free(tp);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
