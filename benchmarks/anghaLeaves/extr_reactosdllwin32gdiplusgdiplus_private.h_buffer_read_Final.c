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
struct memory_buffer {scalar_t__ size; scalar_t__ pos; void* buffer; } ;
typedef  scalar_t__ INT ;

/* Variables and functions */

__attribute__((used)) static inline const void *buffer_read(struct memory_buffer *mbuf, INT size)
{
    if (mbuf->size - mbuf->pos >= size)
    {
        const void *data = mbuf->buffer + mbuf->pos;
        mbuf->pos += size;
        return data;
    }
    return NULL;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long size = 100;
        
          int _len_mbuf0 = 1;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
              mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = buffer_read(mbuf,size);
          free(mbuf);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long size = 255;
        
          int _len_mbuf0 = 65025;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
              mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = buffer_read(mbuf,size);
          free(mbuf);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long size = 10;
        
          int _len_mbuf0 = 100;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
              mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = buffer_read(mbuf,size);
          free(mbuf);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mbuf0 = 1;
          struct memory_buffer * mbuf = (struct memory_buffer *) malloc(_len_mbuf0*sizeof(struct memory_buffer));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
              mbuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mbuf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = buffer_read(mbuf,size);
          free(mbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
