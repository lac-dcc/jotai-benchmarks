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
typedef  enum parse_status { ____Placeholder_parse_status } parse_status ;

/* Variables and functions */
 int PARSE_ERR ; 
 int PARSE_SUCCESS ; 
 int PARSE_WARN ; 

__attribute__((used)) static inline void set_parse_status(enum parse_status *current, enum parse_status update)
{
    if (update == PARSE_ERR)
        *current = PARSE_ERR;
    else if (update == PARSE_WARN && *current == PARSE_SUCCESS)
        *current = PARSE_WARN;
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
          enum parse_status update = 0;
        
          int _len_current0 = 65025;
          enum parse_status * current = (enum parse_status *) malloc(_len_current0*sizeof(enum parse_status));
          for(int _i0 = 0; _i0 < _len_current0; _i0++) {
            current[_i0] = 0;
          }
        
          set_parse_status(current,update);
          free(current);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum parse_status update = 0;
        
          int _len_current0 = 100;
          enum parse_status * current = (enum parse_status *) malloc(_len_current0*sizeof(enum parse_status));
          for(int _i0 = 0; _i0 < _len_current0; _i0++) {
            current[_i0] = 0;
          }
        
          set_parse_status(current,update);
          free(current);
        
        break;
    }
    // empty
    case 2:
    {
          enum parse_status update = 0;
        
          int _len_current0 = 1;
          enum parse_status * current = (enum parse_status *) malloc(_len_current0*sizeof(enum parse_status));
          for(int _i0 = 0; _i0 < _len_current0; _i0++) {
            current[_i0] = 0;
          }
        
          set_parse_status(current,update);
          free(current);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
