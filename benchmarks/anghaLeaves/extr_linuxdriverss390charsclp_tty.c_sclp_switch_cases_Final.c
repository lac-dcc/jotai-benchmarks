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

/* Variables and functions */
 unsigned char CASE_DELIMITER ; 
 int /*<<< orphan*/ * _ebc_tolower ; 
 int /*<<< orphan*/ * _ebc_toupper ; 
 scalar_t__ sclp_tty_tolower ; 

__attribute__((used)) static int sclp_switch_cases(unsigned char *buf, int count)
{
	unsigned char *ip, *op;
	int toggle;

	/* initially changing case is off */
	toggle = 0;
	ip = op = buf;
	while (count-- > 0) {
		/* compare with special character */
		if (*ip == CASE_DELIMITER) {
			/* followed by another special character? */
			if (count && ip[1] == CASE_DELIMITER) {
				/*
				 * ... then put a single copy of the special
				 * character to the output string
				 */
				*op++ = *ip++;
				count--;
			} else
				/*
				 * ... special character follower by a normal
				 * character toggles the case change behaviour
				 */
				toggle = ~toggle;
			/* skip special character */
			ip++;
		} else
			/* not the special character */
			if (toggle)
				/* but case switching is on */
				if (sclp_tty_tolower)
					/* switch to uppercase */
					*op++ = _ebc_toupper[(int) *ip++];
				else
					/* switch to lowercase */
					*op++ = _ebc_tolower[(int) *ip++];
			else
				/* no case switching, copy the character */
				*op++ = *ip++;
	}
	/* return length of reformatted string. */
	return op - buf;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 6394
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 3837
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 3582
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 3582
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 3582
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 3581
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 5368
          // ------------------------------- 

          int count = 255;
        
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sclp_switch_cases(buf,count);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 269
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 162
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 152
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 152
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 152
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 151
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 223
          // ------------------------------- 

          int count = 10;
        
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sclp_switch_cases(buf,count);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sclp_switch_cases(buf,count);
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
