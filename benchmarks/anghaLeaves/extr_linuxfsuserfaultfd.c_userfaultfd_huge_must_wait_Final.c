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
struct vm_area_struct {int dummy; } ;
struct userfaultfd_ctx {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline bool userfaultfd_huge_must_wait(struct userfaultfd_ctx *ctx,
					 struct vm_area_struct *vma,
					 unsigned long address,
					 unsigned long flags,
					 unsigned long reason)
{
	return false;	/* should never get here */
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
          unsigned long address = 100;
          unsigned long flags = 100;
          unsigned long reason = 100;
          int _len_ctx0 = 1;
          struct userfaultfd_ctx * ctx = (struct userfaultfd_ctx *) malloc(_len_ctx0*sizeof(struct userfaultfd_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = userfaultfd_huge_must_wait(ctx,vma,address,flags,reason);
          printf("%d\n", benchRet); 
          free(ctx);
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
