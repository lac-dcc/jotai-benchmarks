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
typedef  int /*<<< orphan*/  string ;

/* Variables and functions */

__attribute__((used)) static char	*SV_ExpandNewlines( char *in ) {
	static	char	string[1024];
	int		l;

	l = 0;
	while ( *in && l < sizeof(string) - 3 ) {
		if ( *in == '\n' ) {
			string[l++] = '\\';
			string[l++] = 'n';
		} else {
			string[l++] = *in;
		}
		in++;
	}
	string[l] = 0;

	return string;
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
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 29632
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 11241
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 12262
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 12262
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 12262
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 12260
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 12262
          // ------------------------------- 

          int _len_in0 = 65025;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = SV_ExpandNewlines(in);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
