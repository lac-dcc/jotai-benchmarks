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
struct fotg210_hcd {int rh_state; } ;

/* Variables and functions */
#define  FOTG210_RH_HALTED 131 
#define  FOTG210_RH_RUNNING 130 
#define  FOTG210_RH_STOPPING 129 
#define  FOTG210_RH_SUSPENDED 128 

__attribute__((used)) static const char *rh_state_string(struct fotg210_hcd *fotg210)
{
	switch (fotg210->rh_state) {
	case FOTG210_RH_HALTED:
		return "halted";
	case FOTG210_RH_SUSPENDED:
		return "suspended";
	case FOTG210_RH_RUNNING:
		return "running";
	case FOTG210_RH_STOPPING:
		return "stopping";
	}
	return "?";
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
          int _len_fotg2100 = 65025;
          struct fotg210_hcd * fotg210 = (struct fotg210_hcd *) malloc(_len_fotg2100*sizeof(struct fotg210_hcd));
          for(int _i0 = 0; _i0 < _len_fotg2100; _i0++) {
              fotg210[_i0].rh_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = rh_state_string(fotg210);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(fotg210);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fotg2100 = 100;
          struct fotg210_hcd * fotg210 = (struct fotg210_hcd *) malloc(_len_fotg2100*sizeof(struct fotg210_hcd));
          for(int _i0 = 0; _i0 < _len_fotg2100; _i0++) {
              fotg210[_i0].rh_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = rh_state_string(fotg210);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(fotg210);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_fotg2100 = 1;
          struct fotg210_hcd * fotg210 = (struct fotg210_hcd *) malloc(_len_fotg2100*sizeof(struct fotg210_hcd));
          for(int _i0 = 0; _i0 < _len_fotg2100; _i0++) {
              fotg210[_i0].rh_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = rh_state_string(fotg210);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(fotg210);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
