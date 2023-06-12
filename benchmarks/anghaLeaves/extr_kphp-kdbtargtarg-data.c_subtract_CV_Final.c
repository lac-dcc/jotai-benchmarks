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
struct cyclic_views_entry {int dummy; } ;

/* Variables and functions */
 long CYCLIC_VIEWS_BUFFER_SIZE ; 

__attribute__((used)) static inline int subtract_CV (struct cyclic_views_entry *CV_start, struct cyclic_views_entry *CV_end) {
  long t = CV_end - CV_start;
  return t >= 0 ? t : t + CYCLIC_VIEWS_BUFFER_SIZE;
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
          int _len_CV_start0 = 65025;
          struct cyclic_views_entry * CV_start = (struct cyclic_views_entry *) malloc(_len_CV_start0*sizeof(struct cyclic_views_entry));
          for(int _i0 = 0; _i0 < _len_CV_start0; _i0++) {
              CV_start[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_CV_end0 = 65025;
          struct cyclic_views_entry * CV_end = (struct cyclic_views_entry *) malloc(_len_CV_end0*sizeof(struct cyclic_views_entry));
          for(int _i0 = 0; _i0 < _len_CV_end0; _i0++) {
              CV_end[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = subtract_CV(CV_start,CV_end);
          printf("%d\n", benchRet); 
          free(CV_start);
          free(CV_end);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_CV_start0 = 100;
          struct cyclic_views_entry * CV_start = (struct cyclic_views_entry *) malloc(_len_CV_start0*sizeof(struct cyclic_views_entry));
          for(int _i0 = 0; _i0 < _len_CV_start0; _i0++) {
              CV_start[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_CV_end0 = 100;
          struct cyclic_views_entry * CV_end = (struct cyclic_views_entry *) malloc(_len_CV_end0*sizeof(struct cyclic_views_entry));
          for(int _i0 = 0; _i0 < _len_CV_end0; _i0++) {
              CV_end[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = subtract_CV(CV_start,CV_end);
          printf("%d\n", benchRet); 
          free(CV_start);
          free(CV_end);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_CV_start0 = 1;
          struct cyclic_views_entry * CV_start = (struct cyclic_views_entry *) malloc(_len_CV_start0*sizeof(struct cyclic_views_entry));
          for(int _i0 = 0; _i0 < _len_CV_start0; _i0++) {
              CV_start[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_CV_end0 = 1;
          struct cyclic_views_entry * CV_end = (struct cyclic_views_entry *) malloc(_len_CV_end0*sizeof(struct cyclic_views_entry));
          for(int _i0 = 0; _i0 < _len_CV_end0; _i0++) {
              CV_end[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = subtract_CV(CV_start,CV_end);
          printf("%d\n", benchRet); 
          free(CV_start);
          free(CV_end);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
