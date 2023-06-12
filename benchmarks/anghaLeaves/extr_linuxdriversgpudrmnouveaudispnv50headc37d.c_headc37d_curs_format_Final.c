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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  format; } ;
struct nv50_wndw_atom {TYPE_2__ image; } ;
struct TYPE_3__ {int /*<<< orphan*/  format; } ;
struct nv50_head_atom {TYPE_1__ curs; } ;
struct nv50_head {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int
headc37d_curs_format(struct nv50_head *head, struct nv50_wndw_atom *asyw,
		     struct nv50_head_atom *asyh)
{
	asyh->curs.format = asyw->image.format;
	return 0;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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

          int _len_head0 = 65025;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
              head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_asyw0 = 65025;
          struct nv50_wndw_atom * asyw = (struct nv50_wndw_atom *) malloc(_len_asyw0*sizeof(struct nv50_wndw_atom));
          for(int _i0 = 0; _i0 < _len_asyw0; _i0++) {
              asyw[_i0].image.format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_asyh0 = 65025;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
              asyh[_i0].curs.format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = headc37d_curs_format(head,asyw,asyh);
          printf("%d\n", benchRet); 
          free(head);
          free(asyw);
          free(asyh);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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

          int _len_head0 = 100;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
              head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_asyw0 = 100;
          struct nv50_wndw_atom * asyw = (struct nv50_wndw_atom *) malloc(_len_asyw0*sizeof(struct nv50_wndw_atom));
          for(int _i0 = 0; _i0 < _len_asyw0; _i0++) {
              asyw[_i0].image.format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_asyh0 = 100;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
              asyh[_i0].curs.format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = headc37d_curs_format(head,asyw,asyh);
          printf("%d\n", benchRet); 
          free(head);
          free(asyw);
          free(asyh);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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

          int _len_head0 = 1;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
              head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_asyw0 = 1;
          struct nv50_wndw_atom * asyw = (struct nv50_wndw_atom *) malloc(_len_asyw0*sizeof(struct nv50_wndw_atom));
          for(int _i0 = 0; _i0 < _len_asyw0; _i0++) {
              asyw[_i0].image.format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_asyh0 = 1;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
              asyh[_i0].curs.format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = headc37d_curs_format(head,asyw,asyh);
          printf("%d\n", benchRet); 
          free(head);
          free(asyw);
          free(asyh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
