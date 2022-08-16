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
struct rme96 {int areg; int wcreg; } ;

/* Variables and functions */
 int RME96_AR_ANALOG ; 
 int RME96_INPUT_ANALOG ; 
 int RME96_WCR_BITPOS_INP_0 ; 
 int RME96_WCR_BITPOS_INP_1 ; 

__attribute__((used)) static int
snd_rme96_getinputtype(struct rme96 *rme96)
{
	if (rme96->areg & RME96_AR_ANALOG) {
		return RME96_INPUT_ANALOG;
	}
	return ((rme96->wcreg >> RME96_WCR_BITPOS_INP_0) & 1) +
		(((rme96->wcreg >> RME96_WCR_BITPOS_INP_1) & 1) << 1);
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
          int _len_rme960 = 1;
          struct rme96 * rme96 = (struct rme96 *) malloc(_len_rme960*sizeof(struct rme96));
          for(int _i0 = 0; _i0 < _len_rme960; _i0++) {
            rme96[_i0].areg = ((-2 * (next_i()%2)) + 1) * next_i();
        rme96[_i0].wcreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_rme96_getinputtype(rme96);
          printf("%d\n", benchRet); 
          free(rme96);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
