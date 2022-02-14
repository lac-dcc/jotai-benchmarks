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

/* Type definitions */
typedef  int tcflag_t ;
struct tty {int t_flags; } ;
struct termios {int c_iflag; int c_oflag; int c_lflag; int c_cflag; } ;

/* Variables and functions */
 int ANYP ; 
 int BRKINT ; 
 int CBREAK ; 
 int CRMOD ; 
 int CS7 ; 
 int CS8 ; 
 int CSIZE ; 
 int DECCTQ ; 
 int ECHO ; 
 int ECHOCTL ; 
 int EVENP ; 
 int ICANON ; 
 int ICRNL ; 
 int IEXTEN ; 
 int IGNBRK ; 
 int IGNCR ; 
 int IGNPAR ; 
 int IMAXBEL ; 
 int INLCR ; 
 int INPCK ; 
 int ISIG ; 
 int ISTRIP ; 
 int IXANY ; 
 int IXOFF ; 
 int IXON ; 
 int LITOUT ; 
 int ODDP ; 
 int ONLCR ; 
 int OPOST ; 
 int OXTABS ; 
 int PARENB ; 
 int PARMRK ; 
 int PARODD ; 
 int PASS8 ; 
 int RAW ; 
 int TANDEM ; 
 int XTABS ; 

__attribute__((used)) static void
ttcompatsetflags(struct tty *tp, struct termios *t)
{
	int flags = tp->t_flags;
	tcflag_t iflag	= t->c_iflag;
	tcflag_t oflag	= t->c_oflag;
	tcflag_t lflag	= t->c_lflag;
	tcflag_t cflag	= t->c_cflag;

	if (flags & RAW) {
		iflag = IGNBRK;
		lflag &= ~(ECHOCTL|ISIG|ICANON|IEXTEN);
	} else {
		iflag &= ~(PARMRK|IGNPAR|IGNCR|INLCR);
		iflag |= BRKINT|IXON|IMAXBEL;
		lflag |= ISIG|IEXTEN|ECHOCTL;	/* XXX was echoctl on ? */
		if (flags & XTABS)
			oflag |= OXTABS;
		else
			oflag &= ~OXTABS;
		if (flags & CBREAK)
			lflag &= ~ICANON;
		else
			lflag |= ICANON;
		if (flags&CRMOD) {
			iflag |= ICRNL;
			oflag |= ONLCR;
		} else {
			iflag &= ~ICRNL;
			oflag &= ~ONLCR;
		}
	}
	if (flags&ECHO)
		lflag |= ECHO;
	else
		lflag &= ~ECHO;

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
	/* XXX don't set INPCK if RAW or PASS8? */
	if ((flags&(EVENP|ODDP)) == EVENP) {
		iflag |= INPCK;
		cflag &= ~PARODD;
	} else if ((flags&(EVENP|ODDP)) == ODDP) {
		iflag |= INPCK;
		cflag |= PARODD;
	} else
		iflag &= ~INPCK;
	if (flags&TANDEM)
		iflag |= IXOFF;
	else
		iflag &= ~IXOFF;
	if ((flags&DECCTQ) == 0)
		iflag |= IXANY;
	else
		iflag &= ~IXANY;
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

    // big-arr
    case 0:
    {
          int _len_tp0 = 1;
          struct tty * tp = (struct tty *) malloc(_len_tp0*sizeof(struct tty));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp->t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 1;
          struct termios * t = (struct termios *) malloc(_len_t0*sizeof(struct termios));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t->c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        t->c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        t->c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
        t->c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ttcompatsetflags(tp,t);
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
