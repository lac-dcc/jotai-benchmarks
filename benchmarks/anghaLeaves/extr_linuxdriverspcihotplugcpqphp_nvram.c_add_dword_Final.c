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
       0            int-bounds\n\
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
typedef  scalar_t__ u32 ;

/* Variables and functions */

__attribute__((used)) static u32 add_dword(u32 **p_buffer, u32 value, u32 *used, u32 *avail)
{
	if ((*used + 4) > *avail)
		return(1);

	**p_buffer = value;
	(*p_buffer)++;
	*used += 4;
	return(0);
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

    // int-bounds
    case 0:
    {
          long value = 100;
          int _len_p_buffer0 = 1;
          long ** p_buffer = (long **) malloc(_len_p_buffer0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_p_buffer0; _i0++) {
            int _len_p_buffer1 = 1;
            p_buffer[_i0] = (long *) malloc(_len_p_buffer1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_p_buffer1; _i1++) {
              p_buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_used0 = 1;
          long * used = (long *) malloc(_len_used0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_used0; _i0++) {
            used[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avail0 = 1;
          long * avail = (long *) malloc(_len_avail0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_avail0; _i0++) {
            avail[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = add_dword(p_buffer,value,used,avail);
          printf("%ld\n", benchRet); 
          for(int i1 = 0; i1 < _len_p_buffer0; i1++) {
            int _len_p_buffer1 = 1;
              free(p_buffer[i1]);
          }
          free(p_buffer);
          free(used);
          free(avail);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
