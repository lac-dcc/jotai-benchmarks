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

__attribute__((used)) static void
md5_to_hex(char *out, char *md5)
{
	int i;

	for (i=0; i<16; i++) {
		unsigned char c = md5[i];

		*out++ = '0' + ((c&0xf0)>>4) + (c>=0xa0)*('a'-'9'-1);
		*out++ = '0' + (c&0x0f) + ((c&0x0f)>=0x0a)*('a'-'9'-1);
	}
	*out = '\0';
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
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 715
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 328
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 328
          // ------------------------------- 
          // static_instructions_O3 : 262
          // dynamic_instructions_O3 : 262
          // ------------------------------- 
          // static_instructions_Ofast : 262
          // dynamic_instructions_Ofast : 262
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 327
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 329
          // ------------------------------- 

          int _len_out0 = 65025;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_md50 = 65025;
          char * md5 = (char *) malloc(_len_md50*sizeof(char));
          for(int _i0 = 0; _i0 < _len_md50; _i0++) {
            md5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          md5_to_hex(out,md5);
          free(out);
          free(md5);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 715
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 328
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 328
          // ------------------------------- 
          // static_instructions_O3 : 262
          // dynamic_instructions_O3 : 262
          // ------------------------------- 
          // static_instructions_Ofast : 262
          // dynamic_instructions_Ofast : 262
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 327
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 329
          // ------------------------------- 

          int _len_out0 = 100;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_md50 = 100;
          char * md5 = (char *) malloc(_len_md50*sizeof(char));
          for(int _i0 = 0; _i0 < _len_md50; _i0++) {
            md5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          md5_to_hex(out,md5);
          free(out);
          free(md5);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
