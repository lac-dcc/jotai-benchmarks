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
typedef  int ut8 ;

/* Variables and functions */

__attribute__((used)) static int mips_r(ut8 *b, int op, int rs, int rt, int rd, int sa, int fun) {
//^this will keep the below mips_r fuctions working
// diff instructions use a diff arg order (add is rd, rs, rt - sll is rd, rt, sa - sllv is rd, rt, rs
//static int mips_r (ut8 *b, int op, int rd, int rs, int rt, int sa, int fun) {
	if (rs == -1 || rt == -1) {
		return -1;
	}
	b[3] = ((op<<2)&0xfc) | ((rs>>3)&3); // 2
	b[2] = (rs<<5) | (rt&0x1f); // 1
	b[1] = ((rd<<3)&0xff) | (sa>>2); // 0
	b[0] = (fun&0x3f) | ((sa&3)<<6);
	return 4;
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
          int op = 10;
          int rs = 10;
          int rt = 10;
          int rd = 10;
          int sa = 10;
          int fun = 10;
          int _len_b0 = 100;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mips_r(b,op,rs,rt,rd,sa,fun);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
