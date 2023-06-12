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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct Qdisc {int flags; } ;

/* Variables and functions */
 int TCQ_F_BUILTIN ; 
 int TCQ_F_INVISIBLE ; 

__attribute__((used)) static bool tc_qdisc_dump_ignore(struct Qdisc *q, bool dump_invisible)
{
	if (q->flags & TCQ_F_BUILTIN)
		return true;
	if ((q->flags & TCQ_F_INVISIBLE) && !dump_invisible)
		return true;

	return false;
}

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
          int dump_invisible = 100;
        
          int _len_q0 = 1;
          struct Qdisc * q = (struct Qdisc *) malloc(_len_q0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tc_qdisc_dump_ignore(q,dump_invisible);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dump_invisible = 255;
        
          int _len_q0 = 65025;
          struct Qdisc * q = (struct Qdisc *) malloc(_len_q0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tc_qdisc_dump_ignore(q,dump_invisible);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dump_invisible = 10;
        
          int _len_q0 = 100;
          struct Qdisc * q = (struct Qdisc *) malloc(_len_q0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tc_qdisc_dump_ignore(q,dump_invisible);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }
    // empty
    case 3:
    {
          int dump_invisible = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_q0 = 1;
          struct Qdisc * q = (struct Qdisc *) malloc(_len_q0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tc_qdisc_dump_ignore(q,dump_invisible);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
