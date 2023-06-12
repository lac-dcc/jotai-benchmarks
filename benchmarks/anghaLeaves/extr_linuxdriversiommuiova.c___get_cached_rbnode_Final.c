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
struct rb_node {int dummy; } ;
struct iova_domain {unsigned long dma_32bit_pfn; struct rb_node* cached_node; struct rb_node* cached32_node; } ;

/* Variables and functions */

__attribute__((used)) static struct rb_node *
__get_cached_rbnode(struct iova_domain *iovad, unsigned long limit_pfn)
{
	if (limit_pfn <= iovad->dma_32bit_pfn)
		return iovad->cached32_node;

	return iovad->cached_node;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long limit_pfn = 100;
        
          int _len_iovad0 = 1;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
              iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (struct rb_node *) malloc(_len_iovad__i0__cached_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
              iovad[_i0].cached_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (struct rb_node *) malloc(_len_iovad__i0__cached32_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
              iovad[_i0].cached32_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct rb_node * benchRet = __get_cached_rbnode(iovad,limit_pfn);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long limit_pfn = 255;
        
          int _len_iovad0 = 65025;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
              iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (struct rb_node *) malloc(_len_iovad__i0__cached_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
              iovad[_i0].cached_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (struct rb_node *) malloc(_len_iovad__i0__cached32_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
              iovad[_i0].cached32_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct rb_node * benchRet = __get_cached_rbnode(iovad,limit_pfn);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long limit_pfn = 10;
        
          int _len_iovad0 = 100;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
              iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (struct rb_node *) malloc(_len_iovad__i0__cached_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
              iovad[_i0].cached_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (struct rb_node *) malloc(_len_iovad__i0__cached32_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
              iovad[_i0].cached32_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct rb_node * benchRet = __get_cached_rbnode(iovad,limit_pfn);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long limit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_iovad0 = 1;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
              iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (struct rb_node *) malloc(_len_iovad__i0__cached_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
              iovad[_i0].cached_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (struct rb_node *) malloc(_len_iovad__i0__cached32_node0*sizeof(struct rb_node));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
              iovad[_i0].cached32_node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct rb_node * benchRet = __get_cached_rbnode(iovad,limit_pfn);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
