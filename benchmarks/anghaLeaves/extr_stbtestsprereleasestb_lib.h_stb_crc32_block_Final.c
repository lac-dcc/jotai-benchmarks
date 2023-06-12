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
typedef  int stb_uint ;

/* Variables and functions */

stb_uint stb_crc32_block(stb_uint crc, unsigned char *buffer, stb_uint len)
{
   static stb_uint crc_table[256];
   stb_uint i,j,s;
   crc = ~crc;

   if (crc_table[1] == 0)
      for(i=0; i < 256; i++) {
         for (s=i, j=0; j < 8; ++j)
            s = (s >> 1) ^ (s & 1 ? 0xedb88320 : 0);
         crc_table[i] = s;
      }
   for (i=0; i < len; ++i)
      crc = (crc >> 8) ^ crc_table[buffer[i] ^ (crc & 0xff)];
   return ~crc;
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
          // static_instructions_O0 : 63
          // dynamic_instructions_O0 : 40964
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 20487
          // ------------------------------- 
          // static_instructions_O2 : 94
          // dynamic_instructions_O2 : 4882
          // ------------------------------- 
          // static_instructions_O3 : 94
          // dynamic_instructions_O3 : 4882
          // ------------------------------- 
          // static_instructions_Ofast : 94
          // dynamic_instructions_Ofast : 4882
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 20230
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 25097
          // ------------------------------- 

          int crc = 255;
        
          int len = 255;
        
          int _len_buffer0 = 65025;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_crc32_block(crc,buffer,len);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 63
          // dynamic_instructions_O0 : 36554
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 18282
          // ------------------------------- 
          // static_instructions_O2 : 89
          // dynamic_instructions_O2 : 3291
          // ------------------------------- 
          // static_instructions_O3 : 89
          // dynamic_instructions_O3 : 3291
          // ------------------------------- 
          // static_instructions_Ofast : 89
          // dynamic_instructions_Ofast : 3291
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 18025
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 22892
          // ------------------------------- 

          int crc = 10;
        
          int len = 10;
        
          int _len_buffer0 = 100;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_crc32_block(crc,buffer,len);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 48
          // dynamic_instructions_O0 : 36374
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 18188
          // ------------------------------- 
          // static_instructions_O2 : 67
          // dynamic_instructions_O2 : 3217
          // ------------------------------- 
          // static_instructions_O3 : 67
          // dynamic_instructions_O3 : 3217
          // ------------------------------- 
          // static_instructions_Ofast : 67
          // dynamic_instructions_Ofast : 3217
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 17932
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 22802
          // ------------------------------- 

          int crc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buffer0 = 1;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_crc32_block(crc,buffer,len);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
