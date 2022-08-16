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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct vm_area_struct {unsigned long vm_pgoff; int vm_flags; void* vm_private_data; int /*<<< orphan*/ * vm_ops; TYPE_1__* vm_file; } ;
struct psb_framebuffer {scalar_t__ addr_space; } ;
struct psb_fbdev {struct psb_framebuffer pfb; } ;
struct fb_info {struct psb_fbdev* par; } ;
struct TYPE_2__ {scalar_t__ f_mapping; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned long PAGE_SHIFT ; 
 int VM_DONTDUMP ; 
 int VM_DONTEXPAND ; 
 int VM_IO ; 
 int VM_MIXEDMAP ; 
 int /*<<< orphan*/  psbfb_vm_ops ; 

__attribute__((used)) static int psbfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
{
	struct psb_fbdev *fbdev = info->par;
	struct psb_framebuffer *psbfb = &fbdev->pfb;

	if (vma->vm_pgoff != 0)
		return -EINVAL;
	if (vma->vm_pgoff > (~0UL >> PAGE_SHIFT))
		return -EINVAL;

	if (!psbfb->addr_space)
		psbfb->addr_space = vma->vm_file->f_mapping;
	/*
	 * If this is a GEM object then info->screen_base is the virtual
	 * kernel remapping of the object. FIXME: Review if this is
	 * suitable for our mmap work
	 */
	vma->vm_ops = &psbfb_vm_ops;
	vma->vm_private_data = (void *)psbfb;
	vma->vm_flags |= VM_IO | VM_MIXEDMAP | VM_DONTEXPAND | VM_DONTDUMP;
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

    // int-bounds
    case 0:
    {
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__par0 = 1;
          info[_i0].par = (struct psb_fbdev *) malloc(_len_info__i0__par0*sizeof(struct psb_fbdev));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
            info[_i0].par->pfb.addr_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_pgoff = ((-2 * (next_i()%2)) + 1) * next_i();
        vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vma__i0__vm_ops0 = 1;
          vma[_i0].vm_ops = (int *) malloc(_len_vma__i0__vm_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_ops0; _j0++) {
            vma[_i0].vm_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma__i0__vm_file0 = 1;
          vma[_i0].vm_file = (struct TYPE_2__ *) malloc(_len_vma__i0__vm_file0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_file0; _j0++) {
            vma[_i0].vm_file->f_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = psbfb_mmap(info,vma);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_ops);
          }
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_file);
          }
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
