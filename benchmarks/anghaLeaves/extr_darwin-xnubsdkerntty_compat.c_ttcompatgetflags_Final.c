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
struct tty {int t_iflag; int t_lflag; int t_oflag; int t_cflag; } ;

/* Variables and functions */
 int ANYP ; 
 int CBREAK ; 
 int CRMOD ; 
 int CRTBS ; 
 int CRTERA ; 
 int CRTKIL ; 
 int CS8 ; 
 int CSIZE ; 
 int CTLECH ; 
 int DECCTQ ; 
 int ECHO ; 
 int ECHOCTL ; 
 int ECHOE ; 
 int ECHOKE ; 
 int ECHOPRT ; 
 int EVENP ; 
 int FLUSHO ; 
 int HUPCL ; 
 int ICANON ; 
 int ICRNL ; 
 int IEXTEN ; 
 int INPCK ; 
 int ISIG ; 
 int ISTRIP ; 
 int IXANY ; 
 int IXOFF ; 
 int IXON ; 
 int LITOUT ; 
 int MDMBUF ; 
 int NOFLSH ; 
 int NOHANG ; 
 int ODDP ; 
 int ONLCR ; 
 int OPOST ; 
 int OXTABS ; 
 int PARENB ; 
 int PARODD ; 
 int PASS8 ; 
 int PENDIN ; 
 int PRTERA ; 
 int RAW ; 
 int TANDEM ; 
 int TOSTOP ; 
 int XTABS ; 

__attribute__((used)) static int
ttcompatgetflags(struct tty *tp)
{
	tcflag_t iflag	= tp->t_iflag;
	tcflag_t lflag	= tp->t_lflag;
	tcflag_t oflag	= tp->t_oflag;
	tcflag_t cflag	= tp->t_cflag;
	int flags = 0;

	if (iflag&IXOFF)
		flags |= TANDEM;
	if (iflag&ICRNL || oflag&ONLCR)
		flags |= CRMOD;
	if ((cflag&CSIZE) == CS8) {
		flags |= PASS8;
		if (iflag&ISTRIP)
			flags |= ANYP;
	}
	else if (cflag&PARENB) {
		if (iflag&INPCK) {
			if (cflag&PARODD)
				flags |= ODDP;
			else
				flags |= EVENP;
		} else
			flags |= EVENP | ODDP;
	}

	if ((lflag&ICANON) == 0) {
		/* fudge */
		if (iflag&(INPCK|ISTRIP|IXON) || lflag&(IEXTEN|ISIG)
		    || (cflag&(CSIZE|PARENB)) != CS8)
			flags |= CBREAK;
		else
			flags |= RAW;
	}
	if (!(flags&RAW) && !(oflag&OPOST) && (cflag&(CSIZE|PARENB)) == CS8)
		flags |= LITOUT;
	if (cflag&MDMBUF)
		flags |= MDMBUF;
	if ((cflag&HUPCL) == 0)
		flags |= NOHANG;
	if (oflag&OXTABS)
		flags |= XTABS;
	if (lflag&ECHOE)
		flags |= CRTERA|CRTBS;
	if (lflag&ECHOKE)
		flags |= CRTKIL|CRTBS;
	if (lflag&ECHOPRT)
		flags |= PRTERA;
	if (lflag&ECHOCTL)
		flags |= CTLECH;
	if ((iflag&IXANY) == 0)
		flags |= DECCTQ;
	flags |= lflag&(ECHO|TOSTOP|FLUSHO|PENDIN|NOFLSH);
	return (flags);
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
            tp[_i0].t_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ttcompatgetflags(tp);
          printf("%d\n", benchRet); 
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
