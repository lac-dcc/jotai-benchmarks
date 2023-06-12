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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct vm_area_struct {struct stk_sio_buffer* vm_private_data; } ;
struct TYPE_2__ {int /*<<< orphan*/  flags; } ;
struct stk_sio_buffer {scalar_t__ mapcount; TYPE_1__ v4lbuf; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_BUF_FLAG_MAPPED ; 

__attribute__((used)) static void stk_v4l_vm_close(struct vm_area_struct *vma)
{
	struct stk_sio_buffer *sbuf = vma->vm_private_data;
	sbuf->mapcount--;
	if (sbuf->mapcount == 0)
		sbuf->v4lbuf.flags &= ~V4L2_BUF_FLAG_MAPPED;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_vma0 = 65025;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              int _len_vma__i0__vm_private_data0 = 1;
          vma[_i0].vm_private_data = (struct stk_sio_buffer *) malloc(_len_vma__i0__vm_private_data0*sizeof(struct stk_sio_buffer));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_private_data0; _j0++) {
              vma[_i0].vm_private_data->mapcount = ((-2 * (next_i()%2)) + 1) * next_i();
          vma[_i0].vm_private_data->v4lbuf.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          stk_v4l_vm_close(vma);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_private_data);
          }
          free(vma);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_vma0 = 100;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              int _len_vma__i0__vm_private_data0 = 1;
          vma[_i0].vm_private_data = (struct stk_sio_buffer *) malloc(_len_vma__i0__vm_private_data0*sizeof(struct stk_sio_buffer));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_private_data0; _j0++) {
              vma[_i0].vm_private_data->mapcount = ((-2 * (next_i()%2)) + 1) * next_i();
          vma[_i0].vm_private_data->v4lbuf.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          stk_v4l_vm_close(vma);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_private_data);
          }
          free(vma);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              int _len_vma__i0__vm_private_data0 = 1;
          vma[_i0].vm_private_data = (struct stk_sio_buffer *) malloc(_len_vma__i0__vm_private_data0*sizeof(struct stk_sio_buffer));
          for(int _j0 = 0; _j0 < _len_vma__i0__vm_private_data0; _j0++) {
              vma[_i0].vm_private_data->mapcount = ((-2 * (next_i()%2)) + 1) * next_i();
          vma[_i0].vm_private_data->v4lbuf.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          stk_v4l_vm_close(vma);
          for(int _aux = 0; _aux < _len_vma0; _aux++) {
          free(vma[_aux].vm_private_data);
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
