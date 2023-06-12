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
struct vm_area_struct {unsigned long vm_flags; } ;
struct page_req_dsc {scalar_t__ wr_req; scalar_t__ rd_req; scalar_t__ exe_req; } ;

/* Variables and functions */
 unsigned long VM_EXEC ; 
 unsigned long VM_READ ; 
 unsigned long VM_WRITE ; 

__attribute__((used)) static bool access_error(struct vm_area_struct *vma, struct page_req_dsc *req)
{
	unsigned long requested = 0;

	if (req->exe_req)
		requested |= VM_EXEC;

	if (req->rd_req)
		requested |= VM_READ;

	if (req->wr_req)
		requested |= VM_WRITE;

	return (requested & ~vma->vm_flags) != 0;
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
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          int _len_vma0 = 65025;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_req0 = 65025;
          struct page_req_dsc * req = (struct page_req_dsc *) malloc(_len_req0*sizeof(struct page_req_dsc));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].wr_req = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].rd_req = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].exe_req = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = access_error(vma,req);
          printf("%d\n", benchRet); 
          free(vma);
          free(req);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          int _len_vma0 = 100;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_req0 = 100;
          struct page_req_dsc * req = (struct page_req_dsc *) malloc(_len_req0*sizeof(struct page_req_dsc));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].wr_req = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].rd_req = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].exe_req = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = access_error(vma,req);
          printf("%d\n", benchRet); 
          free(vma);
          free(req);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 23
          // ------------------------------- 

          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_req0 = 1;
          struct page_req_dsc * req = (struct page_req_dsc *) malloc(_len_req0*sizeof(struct page_req_dsc));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].wr_req = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].rd_req = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].exe_req = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = access_error(vma,req);
          printf("%d\n", benchRet); 
          free(vma);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
