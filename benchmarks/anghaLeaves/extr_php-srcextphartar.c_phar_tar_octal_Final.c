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
typedef  int uint32_t ;

/* Variables and functions */
 int FAILURE ; 
 int SUCCESS ; 

__attribute__((used)) static int phar_tar_octal(char *buf, uint32_t val, int len) /* {{{ */
{
	char *p = buf;
	int s = len;

	p += len;		/* Start at the end and work backwards. */
	while (s-- > 0) {
		*--p = (char)('0' + (val & 7));
		val >>= 3;
	}

	if (val == 0)
		return SUCCESS;

	/* If it overflowed, fill field with max value. */
	while (len-- > 0)
		*p++ = '7';

	return FAILURE;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 4873
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 2314
          // ------------------------------- 
          // static_instructions_O2 : 60
          // dynamic_instructions_O2 : 1566
          // ------------------------------- 
          // static_instructions_O3 : 60
          // dynamic_instructions_O3 : 1566
          // ------------------------------- 
          // static_instructions_Ofast : 60
          // dynamic_instructions_Ofast : 1566
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 2310
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 2563
          // ------------------------------- 

          int val = 255;
        
          int len = 255;
        
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = phar_tar_octal(buf,val,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 218
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 109
          // ------------------------------- 
          // static_instructions_O2 : 60
          // dynamic_instructions_O2 : 93
          // ------------------------------- 
          // static_instructions_O3 : 60
          // dynamic_instructions_O3 : 93
          // ------------------------------- 
          // static_instructions_Ofast : 60
          // dynamic_instructions_Ofast : 93
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 105
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 113
          // ------------------------------- 

          int val = 10;
        
          int len = 10;
        
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = phar_tar_octal(buf,val,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = phar_tar_octal(buf,val,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
