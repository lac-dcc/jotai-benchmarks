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
       0            empty\n\
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
struct fuse_req {TYPE_1__* page_descs; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ length; } ;

/* Variables and functions */
 scalar_t__ PAGE_SIZE ; 

__attribute__((used)) static inline void fuse_page_descs_length_init(struct fuse_req *req,
		unsigned index, unsigned nr_pages)
{
	int i;

	for (i = index; i < index + nr_pages; i++)
		req->page_descs[i].length = PAGE_SIZE -
			req->page_descs[i].offset;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_req0 = 1;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__page_descs0 = 1;
          req[_i0].page_descs = (struct TYPE_2__ *) malloc(_len_req__i0__page_descs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_req__i0__page_descs0; _j0++) {
              req[_i0].page_descs->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].page_descs->length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          fuse_page_descs_length_init(req,index,nr_pages);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].page_descs);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
