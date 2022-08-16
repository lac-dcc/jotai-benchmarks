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
struct sh_fpu_soft_struct {unsigned long fpul; unsigned long* fp_regs; } ;

/* Variables and functions */

__attribute__((used)) static void denormal_to_double(struct sh_fpu_soft_struct *fpu, int n)
{
	unsigned long du, dl;
	unsigned long x = fpu->fpul;
	int exp = 1023 - 126;

	if (x != 0 && (x & 0x7f800000) == 0) {
		du = (x & 0x80000000);
		while ((x & 0x00800000) == 0) {
			x <<= 1;
			exp--;
		}
		x &= 0x007fffff;
		du |= (exp << 20) | (x >> 3);
		dl = x << 29;

		fpu->fp_regs[n] = du;
		fpu->fp_regs[n+1] = dl;
	}
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
          int n = 100;
          int _len_fpu0 = 1;
          struct sh_fpu_soft_struct * fpu = (struct sh_fpu_soft_struct *) malloc(_len_fpu0*sizeof(struct sh_fpu_soft_struct));
          for(int _i0 = 0; _i0 < _len_fpu0; _i0++) {
            fpu[_i0].fpul = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpu__i0__fp_regs0 = 1;
          fpu[_i0].fp_regs = (unsigned long *) malloc(_len_fpu__i0__fp_regs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__fp_regs0; _j0++) {
            fpu[_i0].fp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          denormal_to_double(fpu,n);
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].fp_regs);
          }
          free(fpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
