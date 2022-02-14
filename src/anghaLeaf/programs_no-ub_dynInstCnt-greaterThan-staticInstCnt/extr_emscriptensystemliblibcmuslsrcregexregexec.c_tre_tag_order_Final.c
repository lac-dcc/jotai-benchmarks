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
typedef  scalar_t__ tre_tag_direction_t ;

/* Variables and functions */
 scalar_t__ TRE_TAG_MINIMIZE ; 

__attribute__((used)) static int
tre_tag_order(int num_tags, tre_tag_direction_t *tag_directions,
	      int *t1, int *t2)
{
  int i;
  for (i = 0; i < num_tags; i++)
    {
      if (tag_directions[i] == TRE_TAG_MINIMIZE)
	{
	  if (t1[i] < t2[i])
	    return 1;
	  if (t1[i] > t2[i])
	    return 0;
	}
      else
	{
	  if (t1[i] > t2[i])
	    return 1;
	  if (t1[i] < t2[i])
	    return 0;
	}
    }
  /*  assert(0);*/
  return 0;
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
          int num_tags = 255;
          int _len_tag_directions0 = 65025;
          long * tag_directions = (long *) malloc(_len_tag_directions0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_tag_directions0; _i0++) {
            tag_directions[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t10 = 65025;
          int * t1 = (int *) malloc(_len_t10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t20 = 65025;
          int * t2 = (int *) malloc(_len_t20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tre_tag_order(num_tags,tag_directions,t1,t2);
          printf("%d\n", benchRet); 
          free(tag_directions);
          free(t1);
          free(t2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
