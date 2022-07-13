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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  com_lines ; 
 int /*<<< orphan*/  qtrue ; 

__attribute__((used)) static char *SkipWhitespace( char *data, qboolean *hasNewLines ) {
	int c;

	while( (c = *data) <= ' ') {
		if( !c ) {
			return NULL;
		}
		if( c == '\n' ) {
			com_lines++;
			*hasNewLines = qtrue;
		}
		data++;
	}

	return data;
}


// ------------------------------------------------------------------------- //




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
          int _len_data0 = 65025;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hasNewLines0 = 65025;
          int * hasNewLines = (int *) malloc(_len_hasNewLines0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hasNewLines0; _i0++) {
            hasNewLines[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = SkipWhitespace(data,hasNewLines);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
          free(hasNewLines);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_data0 = 100;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hasNewLines0 = 100;
          int * hasNewLines = (int *) malloc(_len_hasNewLines0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hasNewLines0; _i0++) {
            hasNewLines[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = SkipWhitespace(data,hasNewLines);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
          free(hasNewLines);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
