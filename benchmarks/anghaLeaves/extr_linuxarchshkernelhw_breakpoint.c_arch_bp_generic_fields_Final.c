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

/* Variables and functions */
 int EINVAL ; 
 int HW_BREAKPOINT_LEN_1 ; 
 int HW_BREAKPOINT_LEN_2 ; 
 int HW_BREAKPOINT_LEN_4 ; 
 int HW_BREAKPOINT_LEN_8 ; 
 int HW_BREAKPOINT_R ; 
 int HW_BREAKPOINT_W ; 
#define  SH_BREAKPOINT_LEN_1 134 
#define  SH_BREAKPOINT_LEN_2 133 
#define  SH_BREAKPOINT_LEN_4 132 
#define  SH_BREAKPOINT_LEN_8 131 
#define  SH_BREAKPOINT_READ 130 
#define  SH_BREAKPOINT_RW 129 
#define  SH_BREAKPOINT_WRITE 128 

int arch_bp_generic_fields(int sh_len, int sh_type,
			   int *gen_len, int *gen_type)
{
	/* Len */
	switch (sh_len) {
	case SH_BREAKPOINT_LEN_1:
		*gen_len = HW_BREAKPOINT_LEN_1;
		break;
	case SH_BREAKPOINT_LEN_2:
		*gen_len = HW_BREAKPOINT_LEN_2;
		break;
	case SH_BREAKPOINT_LEN_4:
		*gen_len = HW_BREAKPOINT_LEN_4;
		break;
	case SH_BREAKPOINT_LEN_8:
		*gen_len = HW_BREAKPOINT_LEN_8;
		break;
	default:
		return -EINVAL;
	}

	/* Type */
	switch (sh_type) {
	case SH_BREAKPOINT_READ:
		*gen_type = HW_BREAKPOINT_R;
	case SH_BREAKPOINT_WRITE:
		*gen_type = HW_BREAKPOINT_W;
		break;
	case SH_BREAKPOINT_RW:
		*gen_type = HW_BREAKPOINT_W | HW_BREAKPOINT_R;
		break;
	default:
		return -EINVAL;
	}

	return 0;
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
          int sh_len = 100;
          int sh_type = 100;
          int _len_gen_len0 = 1;
          int * gen_len = (int *) malloc(_len_gen_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gen_len0; _i0++) {
            gen_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gen_type0 = 1;
          int * gen_type = (int *) malloc(_len_gen_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gen_type0; _i0++) {
            gen_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_bp_generic_fields(sh_len,sh_type,gen_len,gen_type);
          printf("%d\n", benchRet); 
          free(gen_len);
          free(gen_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
