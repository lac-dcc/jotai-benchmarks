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
struct mon_reader_bin {unsigned int b_cnt; unsigned int b_out; unsigned int b_size; } ;

/* Variables and functions */
 unsigned int PKT_ALIGN ; 

__attribute__((used)) static void mon_buff_area_free(struct mon_reader_bin *rp, unsigned int size)
{

	size = (size + PKT_ALIGN-1) & ~(PKT_ALIGN-1);
	rp->b_cnt -= size;
	if ((rp->b_out += size) >= rp->b_size)
		rp->b_out -= rp->b_size;
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int size = 100;
        
          int _len_rp0 = 1;
          struct mon_reader_bin * rp = (struct mon_reader_bin *) malloc(_len_rp0*sizeof(struct mon_reader_bin));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
              rp[_i0].b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_out = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mon_buff_area_free(rp,size);
          free(rp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int size = 255;
        
          int _len_rp0 = 65025;
          struct mon_reader_bin * rp = (struct mon_reader_bin *) malloc(_len_rp0*sizeof(struct mon_reader_bin));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
              rp[_i0].b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_out = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mon_buff_area_free(rp,size);
          free(rp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int size = 10;
        
          int _len_rp0 = 100;
          struct mon_reader_bin * rp = (struct mon_reader_bin *) malloc(_len_rp0*sizeof(struct mon_reader_bin));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
              rp[_i0].b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_out = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mon_buff_area_free(rp,size);
          free(rp);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rp0 = 1;
          struct mon_reader_bin * rp = (struct mon_reader_bin *) malloc(_len_rp0*sizeof(struct mon_reader_bin));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
              rp[_i0].b_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_out = ((-2 * (next_i()%2)) + 1) * next_i();
          rp[_i0].b_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mon_buff_area_free(rp,size);
          free(rp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
