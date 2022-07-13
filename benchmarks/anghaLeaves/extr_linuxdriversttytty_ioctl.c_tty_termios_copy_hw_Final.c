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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct ktermios {int c_cflag; int /*<<< orphan*/  c_ospeed; int /*<<< orphan*/  c_ispeed; } ;

/* Variables and functions */
 int CLOCAL ; 
 int CREAD ; 
 int HUPCL ; 

void tty_termios_copy_hw(struct ktermios *new, struct ktermios *old)
{
	/* The bits a dumb device handles in software. Smart devices need
	   to always provide a set_termios method */
	new->c_cflag &= HUPCL | CREAD | CLOCAL;
	new->c_cflag |= old->c_cflag & ~(HUPCL | CREAD | CLOCAL);
	new->c_ispeed = old->c_ispeed;
	new->c_ospeed = old->c_ospeed;
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
          int _len_new0 = 1;
          struct ktermios * new = (struct ktermios *) malloc(_len_new0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c_ospeed = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c_ispeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 1;
          struct ktermios * old = (struct ktermios *) malloc(_len_old0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_ospeed = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_ispeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tty_termios_copy_hw(new,old);
          free(new);
          free(old);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_new0 = 65025;
          struct ktermios * new = (struct ktermios *) malloc(_len_new0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c_ospeed = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c_ispeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 65025;
          struct ktermios * old = (struct ktermios *) malloc(_len_old0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_ospeed = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_ispeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tty_termios_copy_hw(new,old);
          free(new);
          free(old);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_new0 = 100;
          struct ktermios * new = (struct ktermios *) malloc(_len_new0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c_ospeed = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].c_ispeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 100;
          struct ktermios * old = (struct ktermios *) malloc(_len_old0*sizeof(struct ktermios));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_ospeed = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].c_ispeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tty_termios_copy_hw(new,old);
          free(new);
          free(old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
