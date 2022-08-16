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
typedef  size_t u64 ;
struct rxe_mem {int type; size_t iova; size_t length; } ;

/* Variables and functions */
 int EFAULT ; 
#define  RXE_MEM_TYPE_DMA 130 
#define  RXE_MEM_TYPE_FMR 129 
#define  RXE_MEM_TYPE_MR 128 

int mem_check_range(struct rxe_mem *mem, u64 iova, size_t length)
{
	switch (mem->type) {
	case RXE_MEM_TYPE_DMA:
		return 0;

	case RXE_MEM_TYPE_MR:
	case RXE_MEM_TYPE_FMR:
		if (iova < mem->iova ||
		    length > mem->length ||
		    iova > mem->iova + mem->length - length)
			return -EFAULT;
		return 0;

	default:
		return -EFAULT;
	}
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
          unsigned long iova = 100;
          unsigned long length = 100;
          int _len_mem0 = 1;
          struct rxe_mem * mem = (struct rxe_mem *) malloc(_len_mem0*sizeof(struct rxe_mem));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].iova = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mem_check_range(mem,iova,length);
          printf("%d\n", benchRet); 
          free(mem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
