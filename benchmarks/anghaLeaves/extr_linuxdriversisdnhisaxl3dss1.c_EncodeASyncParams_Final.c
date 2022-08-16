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

__attribute__((used)) static u_char *
EncodeASyncParams(u_char *p, u_char si2)
{				// 7c 06 88  90 21 42 00 bb

	p[0] = 0;
	p[1] = 0x40;		// Intermediate rate: 16 kbit/s jj 2000.02.19
	p[2] = 0x80;
	if (si2 & 32)		// 7 data bits

		p[2] += 16;
	else			// 8 data bits

		p[2] += 24;

	if (si2 & 16)		// 2 stop bits

		p[2] += 96;
	else			// 1 stop bit

		p[2] += 32;

	if (si2 & 8)		// even parity

		p[2] += 2;
	else			// no parity

		p[2] += 3;

	switch (si2 & 0x07) {
	case 0:
		p[0] = 66;	// 1200 bit/s

		break;
	case 1:
		p[0] = 88;	// 1200/75 bit/s

		break;
	case 2:
		p[0] = 87;	// 75/1200 bit/s

		break;
	case 3:
		p[0] = 67;	// 2400 bit/s

		break;
	case 4:
		p[0] = 69;	// 4800 bit/s

		break;
	case 5:
		p[0] = 72;	// 9600 bit/s

		break;
	case 6:
		p[0] = 73;	// 14400 bit/s

		break;
	case 7:
		p[0] = 75;	// 19200 bit/s

		break;
	}
	return p + 3;
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
          int * benchRet = EncodeASyncParams(p,si2);
          printf("%d\n", (*benchRet)); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
