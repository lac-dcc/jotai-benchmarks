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
       1            big-arr-10x\n\
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
struct mtd_oob_ops {int mode; } ;

/* Variables and functions */
 int EINVAL ; 
#define  MTD_OPS_AUTO_OOB 130 
#define  MTD_OPS_PLACE_OOB 129 
#define  MTD_OPS_RAW 128 

__attribute__((used)) static int doc_guess_autoecc(struct mtd_oob_ops *ops)
{
	int autoecc;

	switch (ops->mode) {
	case MTD_OPS_PLACE_OOB:
	case MTD_OPS_AUTO_OOB:
		autoecc = 1;
		break;
	case MTD_OPS_RAW:
		autoecc = 0;
		break;
	default:
		autoecc = -EINVAL;
	}
	return autoecc;
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
          int _len_ops0 = 1;
          struct mtd_oob_ops * ops = (struct mtd_oob_ops *) malloc(_len_ops0*sizeof(struct mtd_oob_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = doc_guess_autoecc(ops);
          printf("%d\n", benchRet); 
          free(ops);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ops0 = 100;
          struct mtd_oob_ops * ops = (struct mtd_oob_ops *) malloc(_len_ops0*sizeof(struct mtd_oob_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = doc_guess_autoecc(ops);
          printf("%d\n", benchRet); 
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
