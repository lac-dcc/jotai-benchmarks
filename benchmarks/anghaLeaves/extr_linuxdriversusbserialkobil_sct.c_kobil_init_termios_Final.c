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
struct TYPE_2__ {int c_iflag; int /*<<< orphan*/  c_oflag; scalar_t__ c_lflag; } ;
struct tty_struct {TYPE_1__ termios; } ;

/* Variables and functions */
 int ECHO ; 
 int ICANON ; 
 int IEXTEN ; 
 int IGNBRK ; 
 int IGNPAR ; 
 int ISIG ; 
 int IXOFF ; 
 int /*<<< orphan*/  ONLCR ; 
 int XCASE ; 

__attribute__((used)) static void kobil_init_termios(struct tty_struct *tty)
{
	/* Default to echo off and other sane device settings */
	tty->termios.c_lflag = 0;
	tty->termios.c_iflag &= ~(ISIG | ICANON | ECHO | IEXTEN | XCASE);
	tty->termios.c_iflag |= IGNBRK | IGNPAR | IXOFF;
	/* do NOT translate CR to CR-NL (0x0A -> 0x0A 0x0D) */
	tty->termios.c_oflag &= ~ONLCR;
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
          int _len_tty0 = 1;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].termios.c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].termios.c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kobil_init_termios(tty);
          free(tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
