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
struct sti_plane {int desc; } ;

/* Variables and functions */
#define  STI_CURSOR 133 
#define  STI_GDP_0 132 
#define  STI_GDP_1 131 
#define  STI_GDP_2 130 
#define  STI_GDP_3 129 
#define  STI_HQVDP_0 128 

const char *sti_plane_to_str(struct sti_plane *plane)
{
	switch (plane->desc) {
	case STI_GDP_0:
		return "GDP0";
	case STI_GDP_1:
		return "GDP1";
	case STI_GDP_2:
		return "GDP2";
	case STI_GDP_3:
		return "GDP3";
	case STI_HQVDP_0:
		return "HQVDP0";
	case STI_CURSOR:
		return "CURSOR";
	default:
		return "<UNKNOWN PLANE>";
	}
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
          int _len_plane0 = 65025;
          struct sti_plane * plane = (struct sti_plane *) malloc(_len_plane0*sizeof(struct sti_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              plane[_i0].desc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = sti_plane_to_str(plane);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(plane);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_plane0 = 100;
          struct sti_plane * plane = (struct sti_plane *) malloc(_len_plane0*sizeof(struct sti_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              plane[_i0].desc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = sti_plane_to_str(plane);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(plane);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_plane0 = 1;
          struct sti_plane * plane = (struct sti_plane *) malloc(_len_plane0*sizeof(struct sti_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              plane[_i0].desc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = sti_plane_to_str(plane);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(plane);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
