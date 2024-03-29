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

char * ultoa(unsigned long val, char *buf, int radix) 	
{
	unsigned digit;
	int i=0, j;
	char t;

	while (1) {
		digit = val % radix;
		buf[i] = ((digit < 10) ? '0' + digit : 'A' + digit - 10);
		val /= radix;
		if (val == 0) break;
		i++;
	}
	buf[i + 1] = 0;
	for (j=0; j < i; j++, i--) {
		t = buf[j];
		buf[j] = buf[i];
		buf[i] = t;
	}
	return buf;
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
          // static_instructions_O0 : 68
          // dynamic_instructions_O0 : 95
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 62
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 62
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 62
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 44
          // dynamic_instructions_Os : 44
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          unsigned long val = 255;
        
          int radix = 255;
        
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = ultoa(val,buf,radix);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 68
          // dynamic_instructions_O0 : 95
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 62
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 62
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 62
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 44
          // dynamic_instructions_Os : 44
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          unsigned long val = 10;
        
          int radix = 10;
        
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = ultoa(val,buf,radix);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
