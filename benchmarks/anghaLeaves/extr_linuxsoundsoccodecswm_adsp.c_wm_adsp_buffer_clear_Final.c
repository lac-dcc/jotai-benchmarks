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
struct wm_adsp_compr_buf {int irq_count; int read_index; scalar_t__ avail; } ;

/* Variables and functions */

__attribute__((used)) static void wm_adsp_buffer_clear(struct wm_adsp_compr_buf *buf)
{
	buf->irq_count = 0xFFFFFFFF;
	buf->read_index = -1;
	buf->avail = 0;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_buf0 = 65025;
          struct wm_adsp_compr_buf * buf = (struct wm_adsp_compr_buf *) malloc(_len_buf0*sizeof(struct wm_adsp_compr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              buf[_i0].irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          buf[_i0].read_index = ((-2 * (next_i()%2)) + 1) * next_i();
          buf[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          wm_adsp_buffer_clear(buf);
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_buf0 = 100;
          struct wm_adsp_compr_buf * buf = (struct wm_adsp_compr_buf *) malloc(_len_buf0*sizeof(struct wm_adsp_compr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              buf[_i0].irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          buf[_i0].read_index = ((-2 * (next_i()%2)) + 1) * next_i();
          buf[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          wm_adsp_buffer_clear(buf);
          free(buf);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_buf0 = 1;
          struct wm_adsp_compr_buf * buf = (struct wm_adsp_compr_buf *) malloc(_len_buf0*sizeof(struct wm_adsp_compr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              buf[_i0].irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          buf[_i0].read_index = ((-2 * (next_i()%2)) + 1) * next_i();
          buf[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          wm_adsp_buffer_clear(buf);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
