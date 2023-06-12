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
       2            empty\n\
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
typedef  unsigned char u32 ;

/* Variables and functions */
 unsigned char CRC32_POLY_LE ; 

__attribute__((used)) static inline u32 calc_crc(unsigned char *buf, int len)
{
	u32 reg;
	u32 tmp;
	int j, k;

	reg = 0xffffffff;

	for (j = 0; j < len; j++) {
		reg ^= buf[j];

		for (k = 0; k < 8; k++) {
			tmp = reg & 0x01;

			reg >>= 1;

			if (tmp)
				reg ^= CRC32_POLY_LE;
		}
	}

	return ~reg;
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
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 39029
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 17862
          // ------------------------------- 
          // static_instructions_O2 : 64
          // dynamic_instructions_O2 : 13272
          // ------------------------------- 
          // static_instructions_O3 : 64
          // dynamic_instructions_O3 : 13272
          // ------------------------------- 
          // static_instructions_Ofast : 64
          // dynamic_instructions_Ofast : 13272
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 17606
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 22453
          // ------------------------------- 

          int len = 255;
        
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned char benchRet = calc_crc(buf,len);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 1544
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 712
          // ------------------------------- 
          // static_instructions_O2 : 64
          // dynamic_instructions_O2 : 532
          // ------------------------------- 
          // static_instructions_O3 : 64
          // dynamic_instructions_O3 : 532
          // ------------------------------- 
          // static_instructions_Ofast : 64
          // dynamic_instructions_Ofast : 532
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 701
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 893
          // ------------------------------- 

          int len = 10;
        
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned char benchRet = calc_crc(buf,len);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(buf);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned char benchRet = calc_crc(buf,len);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
