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
       0            big-arr-10x\n\
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
typedef  int u_char ;

/* Variables and functions */

__attribute__((used)) static u_char
DecodeASyncParams(u_char si2, u_char *p)
{
	u_char info;

	switch (p[5]) {
	case 66:	// 1200 bit/s

		break;	// si2 don't change

	case 88:	// 1200/75 bit/s

		si2 += 1;
		break;
	case 87:	// 75/1200 bit/s

		si2 += 2;
		break;
	case 67:	// 2400 bit/s

		si2 += 3;
		break;
	case 69:	// 4800 bit/s

		si2 += 4;
		break;
	case 72:	// 9600 bit/s

		si2 += 5;
		break;
	case 73:	// 14400 bit/s

		si2 += 6;
		break;
	case 75:	// 19200 bit/s

		si2 += 7;
		break;
	}

	info = p[7] & 0x7f;
	if ((info & 16) && (!(info & 8)))	// 7 data bits

		si2 += 32;	// else 8 data bits

	if ((info & 96) == 96)	// 2 stop bits

		si2 += 16;	// else 1 stop bit

	if ((info & 2) && (!(info & 1)))	// even parity

		si2 += 8;	// else no parity

	return si2;
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

    // big-arr-10x
    case 0:
    {
          int si2 = 10;
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DecodeASyncParams(si2,p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
