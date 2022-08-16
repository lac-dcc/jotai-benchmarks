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
typedef  int uint8_t ;

/* Variables and functions */
 int VM_REG_GUEST_CS ; 
 int VM_REG_GUEST_DS ; 
 int VM_REG_GUEST_ES ; 
 int VM_REG_GUEST_FS ; 
 int VM_REG_GUEST_GS ; 
 int VM_REG_GUEST_SS ; 

__attribute__((used)) static bool
segment_override(uint8_t x, int *seg)
{

	switch (x) {
	case 0x2E:
		*seg = VM_REG_GUEST_CS;
		break;
	case 0x36:
		*seg = VM_REG_GUEST_SS;
		break;
	case 0x3E:
		*seg = VM_REG_GUEST_DS;
		break;
	case 0x26:
		*seg = VM_REG_GUEST_ES;
		break;
	case 0x64:
		*seg = VM_REG_GUEST_FS;
		break;
	case 0x65:
		*seg = VM_REG_GUEST_GS;
		break;
	default:
		return (false);
	}
	return (true);
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
          int x = 100;
          int _len_seg0 = 1;
          int * seg = (int *) malloc(_len_seg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
            seg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = segment_override(x,seg);
          printf("%d\n", benchRet); 
          free(seg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int x = 10;
          int _len_seg0 = 100;
          int * seg = (int *) malloc(_len_seg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
            seg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = segment_override(x,seg);
          printf("%d\n", benchRet); 
          free(seg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
