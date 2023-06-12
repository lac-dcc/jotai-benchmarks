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
       1            empty\n\
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

__attribute__((used)) static unsigned long int php_swf_get_bits (unsigned char* buffer, unsigned int pos, unsigned int count)
{
	unsigned int loop;
	unsigned long int result = 0;

	for (loop = pos; loop < pos + count; loop++)
	{
		result = result +
			((((buffer[loop / 8]) >> (7 - (loop % 8))) & 0x01) << (count - (loop - pos) - 1));
	}
	return result;
}

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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 326
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 162
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 161
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 159
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 159
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 161
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 180
          // ------------------------------- 

          unsigned int pos = 10;
        
          unsigned int count = 10;
        
          int _len_buffer0 = 100;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = php_swf_get_bits(buffer,pos,count);
          printf("%lu\n", benchRet); 
          free(buffer);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buffer0 = 1;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = php_swf_get_bits(buffer,pos,count);
          printf("%lu\n", benchRet); 
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
