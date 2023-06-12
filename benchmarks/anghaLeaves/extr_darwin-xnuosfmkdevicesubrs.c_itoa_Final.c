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

char *
itoa(
	int	num,
	char	*str)
{
        char    digits[11];
        char *dp;
        char *cp = str;

        if (num == 0) {
            *cp++ = '0';
        }
        else {
            dp = digits;
            while (num) {
                *dp++ = '0' + num % 10;
                num /= 10;
            }
            while (dp != digits) {
                *cp++ = *--dp;
            }
        }
        *cp++ = '\0';

	return str;
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
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 128
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 85
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 85
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 85
          // ------------------------------- 
          // static_instructions_Os : 33
          // dynamic_instructions_Os : 77
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 61
          // ------------------------------- 

          int num = 255;
        
          int _len_str0 = 65025;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = itoa(num,str);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 94
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 57
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 63
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 63
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 63
          // ------------------------------- 
          // static_instructions_Os : 33
          // dynamic_instructions_Os : 55
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 46
          // ------------------------------- 

          int num = 10;
        
          int _len_str0 = 100;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = itoa(num,str);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
