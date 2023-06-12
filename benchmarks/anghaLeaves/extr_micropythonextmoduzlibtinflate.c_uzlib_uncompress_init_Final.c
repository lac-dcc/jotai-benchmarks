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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int btype; unsigned int dict_size; scalar_t__ curlen; scalar_t__ dict_idx; void* dict_ring; scalar_t__ bfinal; scalar_t__ bitcount; scalar_t__ eof; } ;
typedef  TYPE_1__ TINF_DATA ;

/* Variables and functions */

void uzlib_uncompress_init(TINF_DATA *d, void *dict, unsigned int dictLen)
{
   d->eof = 0;
   d->bitcount = 0;
   d->bfinal = 0;
   d->btype = -1;
   d->dict_size = dictLen;
   d->dict_ring = dict;
   d->dict_idx = 0;
   d->curlen = 0;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int dictLen = 100;
        
          int _len_d0 = 1;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].btype = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bfinal = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bitcount = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dict;
        
          uzlib_uncompress_init(d,dict,dictLen);
          free(d);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int dictLen = 255;
        
          int _len_d0 = 65025;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].btype = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bfinal = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bitcount = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dict;
        
          uzlib_uncompress_init(d,dict,dictLen);
          free(d);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int dictLen = 10;
        
          int _len_d0 = 100;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].btype = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bfinal = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bitcount = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dict;
        
          uzlib_uncompress_init(d,dict,dictLen);
          free(d);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int dictLen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_d0 = 1;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].btype = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].dict_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bfinal = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].bitcount = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dict;
        
          uzlib_uncompress_init(d,dict,dictLen);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
