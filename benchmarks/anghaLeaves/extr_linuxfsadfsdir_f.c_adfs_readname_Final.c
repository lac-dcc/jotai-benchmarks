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

__attribute__((used)) static inline int adfs_readname(char *buf, char *ptr, int maxlen)
{
	char *old_buf = buf;

	while ((unsigned char)*ptr >= ' ' && maxlen--) {
		if (*ptr == '/')
			*buf++ = '.';
		else
			*buf++ = *ptr;
		ptr++;
	}

	return buf - old_buf;
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
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 7934
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 2819
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 2819
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 2819
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 2819
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 2817
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 2814
          // ------------------------------- 

          int maxlen = 255;
        
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ptr0 = 65025;
          char * ptr = (char *) malloc(_len_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = adfs_readname(buf,ptr,maxlen);
          printf("%d\n", benchRet); 
          free(buf);
          free(ptr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 339
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 124
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 124
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 124
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 124
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 122
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 119
          // ------------------------------- 

          int maxlen = 10;
        
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ptr0 = 100;
          char * ptr = (char *) malloc(_len_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = adfs_readname(buf,ptr,maxlen);
          printf("%d\n", benchRet); 
          free(buf);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
