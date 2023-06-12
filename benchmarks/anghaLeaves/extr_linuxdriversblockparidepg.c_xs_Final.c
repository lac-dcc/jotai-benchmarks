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

__attribute__((used)) static void xs(char *buf, char *targ, int len)
{
	char l = '\0';
	int k;

	for (k = 0; k < len; k++) {
		char c = *buf++;
		if (c != ' ' && c != l)
			l = *targ++ = c;
	}
	if (l == ' ')
		targ--;
	*targ = '\0';
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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 5379
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 2566
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 2062
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 2061
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 2061
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 2056
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 2821
          // ------------------------------- 

          int len = 255;
        
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_targ0 = 65025;
          char * targ = (char *) malloc(_len_targ0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_targ0; _i0++) {
            targ[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xs(buf,targ,len);
          free(buf);
          free(targ);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 234
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 116
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 104
          // ------------------------------- 
          // static_instructions_O3 : 43
          // dynamic_instructions_O3 : 103
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 103
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 96
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 126
          // ------------------------------- 

          int len = 10;
        
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_targ0 = 100;
          char * targ = (char *) malloc(_len_targ0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_targ0; _i0++) {
            targ[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xs(buf,targ,len);
          free(buf);
          free(targ);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_targ0 = 1;
          char * targ = (char *) malloc(_len_targ0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_targ0; _i0++) {
            targ[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xs(buf,targ,len);
          free(buf);
          free(targ);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
