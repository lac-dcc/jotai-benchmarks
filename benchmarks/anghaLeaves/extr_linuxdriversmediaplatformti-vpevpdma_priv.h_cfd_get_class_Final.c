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
       1            big-arr-10x\n\
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
struct vpdma_cfd {int ctl_payload_len; } ;

/* Variables and functions */
 int CFD_CLASS_MASK ; 
 int CFD_CLASS_SHFT ; 

__attribute__((used)) static inline bool cfd_get_class(struct vpdma_cfd *cfd)
{
	return (cfd->ctl_payload_len >> CFD_CLASS_SHFT) & CFD_CLASS_MASK;
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
          int _len_cfd0 = 1;
          struct vpdma_cfd * cfd = (struct vpdma_cfd *) malloc(_len_cfd0*sizeof(struct vpdma_cfd));
          for(int _i0 = 0; _i0 < _len_cfd0; _i0++) {
            cfd[_i0].ctl_payload_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfd_get_class(cfd);
          printf("%d\n", benchRet); 
          free(cfd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cfd0 = 100;
          struct vpdma_cfd * cfd = (struct vpdma_cfd *) malloc(_len_cfd0*sizeof(struct vpdma_cfd));
          for(int _i0 = 0; _i0 < _len_cfd0; _i0++) {
            cfd[_i0].ctl_payload_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfd_get_class(cfd);
          printf("%d\n", benchRet); 
          free(cfd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
