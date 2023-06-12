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
typedef  scalar_t__ byte ;

/* Variables and functions */
 int hl_numleafs ; 

int HL_CompressVis(byte *vis, byte *dest)
{
	int		j;
	int		rep;
	int		visrow;
	byte	*dest_p;
	
	dest_p = dest;
	visrow = (hl_numleafs + 7)>>3;
	
	for (j=0 ; j<visrow ; j++)
	{
		*dest_p++ = vis[j];
		if (vis[j])
			continue;

		rep = 1;
		for ( j++; j<visrow ; j++)
			if (vis[j] || rep == 255)
				break;
			else
				rep++;
		*dest_p++ = rep;
		j--;
	}
	
	return dest_p - dest;
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
          int _len_vis0 = 65025;
          long * vis = (long *) malloc(_len_vis0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vis0; _i0++) {
            vis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dest0 = 65025;
          long * dest = (long *) malloc(_len_dest0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = HL_CompressVis(vis,dest);
          printf("%d\n", benchRet); 
          free(vis);
          free(dest);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vis0 = 100;
          long * vis = (long *) malloc(_len_vis0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vis0; _i0++) {
            vis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dest0 = 100;
          long * dest = (long *) malloc(_len_dest0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = HL_CompressVis(vis,dest);
          printf("%d\n", benchRet); 
          free(vis);
          free(dest);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_vis0 = 1;
          long * vis = (long *) malloc(_len_vis0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vis0; _i0++) {
            vis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dest0 = 1;
          long * dest = (long *) malloc(_len_dest0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = HL_CompressVis(vis,dest);
          printf("%d\n", benchRet); 
          free(vis);
          free(dest);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
