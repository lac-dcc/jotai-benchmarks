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
typedef  scalar_t__ uint8_t ;
struct fru_common_header {int dummy; } ;

/* Variables and functions */

int fru_header_cksum_ok(struct fru_common_header *header)
{
	uint8_t *ptr = (void *)header;
	int i, sum;

	for (i = sum = 0; i < sizeof(*header); i++)
		sum += ptr[i];
	return (sum & 0xff) == 0;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 70
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int _len_header0 = 65025;
          struct fru_common_header * header = (struct fru_common_header *) malloc(_len_header0*sizeof(struct fru_common_header));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
              header[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = fru_header_cksum_ok(header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 70
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int _len_header0 = 100;
          struct fru_common_header * header = (struct fru_common_header *) malloc(_len_header0*sizeof(struct fru_common_header));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
              header[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = fru_header_cksum_ok(header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
