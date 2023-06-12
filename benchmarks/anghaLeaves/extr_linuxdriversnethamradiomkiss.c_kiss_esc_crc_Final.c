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

/* Variables and functions */
#define  END 129 
#define  ESC 128 
 int /*<<< orphan*/  ESC_END ; 
 int /*<<< orphan*/  ESC_ESC ; 

__attribute__((used)) static int kiss_esc_crc(unsigned char *s, unsigned char *d, unsigned short crc,
	int len)
{
	unsigned char *ptr = d;
	unsigned char c=0;

	*ptr++ = END;
	while (len > 0) {
		if (len > 2)
			c = *s++;
		else if (len > 1)
			c = crc >> 8;
		else
			c = crc & 0xff;

		len--;

		switch (c) {
		case END:
			*ptr++ = ESC;
			*ptr++ = ESC_END;
			break;
		case ESC:
			*ptr++ = ESC;
			*ptr++ = ESC_ESC;
			break;
		default:
			*ptr++ = c;
			break;
		}
	}
	*ptr++ = END;

	return ptr - d;
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
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 7421
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 3840
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 3840
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 3587
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 3587
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 3839
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 3838
          // ------------------------------- 

          unsigned short crc = 255;
        
          int len = 255;
        
          int _len_s0 = 65025;
          unsigned char * s = (unsigned char *) malloc(_len_s0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_d0 = 65025;
          unsigned char * d = (unsigned char *) malloc(_len_d0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kiss_esc_crc(s,d,crc,len);
          printf("%d\n", benchRet); 
          free(s);
          free(d);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 316
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 165
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 165
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 157
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 157
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 164
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 163
          // ------------------------------- 

          unsigned short crc = 10;
        
          int len = 10;
        
          int _len_s0 = 100;
          unsigned char * s = (unsigned char *) malloc(_len_s0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_d0 = 100;
          unsigned char * d = (unsigned char *) malloc(_len_d0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kiss_esc_crc(s,d,crc,len);
          printf("%d\n", benchRet); 
          free(s);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
