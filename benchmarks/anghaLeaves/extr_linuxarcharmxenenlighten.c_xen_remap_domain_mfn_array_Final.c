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
typedef  int /*<<< orphan*/  xen_pfn_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef  int /*<<< orphan*/  pgprot_t ;

/* Variables and functions */
 int ENOSYS ; 

int xen_remap_domain_mfn_array(struct vm_area_struct *vma,
			       unsigned long addr,
			       xen_pfn_t *mfn, int nr,
			       int *err_ptr, pgprot_t prot,
			       unsigned int domid, struct page **pages)
{
	return -ENOSYS;
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
          unsigned long addr = 100;
          int nr = 100;
          int prot = 100;
          unsigned int domid = 100;
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mfn0 = 1;
          int * mfn = (int *) malloc(_len_mfn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mfn0; _i0++) {
            mfn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_ptr0 = 1;
          int * err_ptr = (int *) malloc(_len_err_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_err_ptr0; _i0++) {
            err_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 1;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = xen_remap_domain_mfn_array(vma,addr,mfn,nr,err_ptr,prot,domid,pages);
          printf("%d\n", benchRet); 
          free(vma);
          free(mfn);
          free(err_ptr);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
