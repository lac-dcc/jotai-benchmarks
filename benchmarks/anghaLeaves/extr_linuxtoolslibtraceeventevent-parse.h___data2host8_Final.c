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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct tep_handle {scalar_t__ host_bigendian; scalar_t__ file_bigendian; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned long long
__data2host8(struct tep_handle *pevent, unsigned long long data)
{
	unsigned long long swap;

	if (pevent->host_bigendian == pevent->file_bigendian)
		return data;

	swap = ((data & 0xffULL) << 56) |
		((data & (0xffULL << 8)) << 40) |
		((data & (0xffULL << 16)) << 24) |
		((data & (0xffULL << 24)) << 8) |
		((data & (0xffULL << 32)) >> 8) |
		((data & (0xffULL << 40)) >> 24) |
		((data & (0xffULL << 48)) >> 40) |
		((data & (0xffULL << 56)) >> 56);

	return swap;
}

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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned long long data = 100;
        
          int _len_pevent0 = 1;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].host_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
          pevent[_i0].file_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long long benchRet = __data2host8(pevent,data);
          printf("%llu\n", benchRet); 
          free(pevent);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned long long data = 255;
        
          int _len_pevent0 = 65025;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].host_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
          pevent[_i0].file_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long long benchRet = __data2host8(pevent,data);
          printf("%llu\n", benchRet); 
          free(pevent);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned long long data = 10;
        
          int _len_pevent0 = 100;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].host_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
          pevent[_i0].file_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long long benchRet = __data2host8(pevent,data);
          printf("%llu\n", benchRet); 
          free(pevent);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned long long data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pevent0 = 1;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].host_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
          pevent[_i0].file_bigendian = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long long benchRet = __data2host8(pevent,data);
          printf("%llu\n", benchRet); 
          free(pevent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
