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
struct spu_queue {scalar_t__ q_type; } ;

/* Variables and functions */
 unsigned long CWQ_ENTRY_SIZE ; 
 unsigned long CWQ_NUM_ENTRIES ; 
 scalar_t__ HV_NCS_QTYPE_MAU ; 
 unsigned long MAU_ENTRY_SIZE ; 
 unsigned long MAU_NUM_ENTRIES ; 

__attribute__((used)) static unsigned long spu_next_offset(struct spu_queue *q, unsigned long off)
{
	if (q->q_type == HV_NCS_QTYPE_MAU) {
		off += MAU_ENTRY_SIZE;
		if (off == (MAU_ENTRY_SIZE * MAU_NUM_ENTRIES))
			off = 0;
	} else {
		off += CWQ_ENTRY_SIZE;
		if (off == (CWQ_ENTRY_SIZE * CWQ_NUM_ENTRIES))
			off = 0;
	}
	return off;
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
          unsigned long off = 100;
          int _len_q0 = 1;
          struct spu_queue * q = (struct spu_queue *) malloc(_len_q0*sizeof(struct spu_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].q_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = spu_next_offset(q,off);
          printf("%lu\n", benchRet); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
