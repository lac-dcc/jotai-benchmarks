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

/* Type definitions */
struct termios {int c_iflag; int c_lflag; int c_cflag; int* c_cc; int /*<<< orphan*/  c_oflag; } ;

/* Variables and functions */
 int BRKINT ; 
 int CS8 ; 
 int CSIZE ; 
 int ECHO ; 
 int ECHONL ; 
 int ICANON ; 
 int ICRNL ; 
 int IEXTEN ; 
 int IGNBRK ; 
 int IGNCR ; 
 int INLCR ; 
 int ISIG ; 
 int ISTRIP ; 
 int IXON ; 
 int /*<<< orphan*/  OPOST ; 
 int PARENB ; 
 int PARMRK ; 
 size_t VMIN ; 
 size_t VTIME ; 

void cfmakeraw(struct termios *t)
{
	t->c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL|IXON);
	t->c_oflag &= ~OPOST;
	t->c_lflag &= ~(ECHO|ECHONL|ICANON|ISIG|IEXTEN);
	t->c_cflag &= ~(CSIZE|PARENB);
	t->c_cflag |= CS8;
	t->c_cc[VMIN] = 1;
	t->c_cc[VTIME] = 0;
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
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int _len_t0 = 65025;
          struct termios * t = (struct termios *) malloc(_len_t0*sizeof(struct termios));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__c_cc0 = 1;
          t[_i0].c_cc = (int *) malloc(_len_t__i0__c_cc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__c_cc0; _j0++) {
            t[_i0].c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          t[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          cfmakeraw(t);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].c_cc);
          }
          free(t);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int _len_t0 = 100;
          struct termios * t = (struct termios *) malloc(_len_t0*sizeof(struct termios));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__c_cc0 = 1;
          t[_i0].c_cc = (int *) malloc(_len_t__i0__c_cc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__c_cc0; _j0++) {
            t[_i0].c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          t[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          cfmakeraw(t);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].c_cc);
          }
          free(t);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int _len_t0 = 1;
          struct termios * t = (struct termios *) malloc(_len_t0*sizeof(struct termios));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].c_iflag = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].c_lflag = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].c_cflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__c_cc0 = 1;
          t[_i0].c_cc = (int *) malloc(_len_t__i0__c_cc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__c_cc0; _j0++) {
            t[_i0].c_cc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          t[_i0].c_oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          cfmakeraw(t);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].c_cc);
          }
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
