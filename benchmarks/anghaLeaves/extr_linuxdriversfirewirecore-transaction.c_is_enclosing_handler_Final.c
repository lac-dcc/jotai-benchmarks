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
struct fw_address_handler {unsigned long long offset; unsigned long long length; } ;

/* Variables and functions */

__attribute__((used)) static bool is_enclosing_handler(struct fw_address_handler *handler,
				 unsigned long long offset, size_t length)
{
	return handler->offset <= offset &&
		offset + length <= handler->offset + handler->length;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          unsigned long long offset = 100;
        
          unsigned long length = 100;
        
          int _len_handler0 = 1;
          struct fw_address_handler * handler = (struct fw_address_handler *) malloc(_len_handler0*sizeof(struct fw_address_handler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
              handler[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          handler[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_enclosing_handler(handler,offset,length);
          printf("%d\n", benchRet); 
          free(handler);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          unsigned long long offset = 255;
        
          unsigned long length = 255;
        
          int _len_handler0 = 65025;
          struct fw_address_handler * handler = (struct fw_address_handler *) malloc(_len_handler0*sizeof(struct fw_address_handler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
              handler[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          handler[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_enclosing_handler(handler,offset,length);
          printf("%d\n", benchRet); 
          free(handler);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          unsigned long long offset = 10;
        
          unsigned long length = 10;
        
          int _len_handler0 = 100;
          struct fw_address_handler * handler = (struct fw_address_handler *) malloc(_len_handler0*sizeof(struct fw_address_handler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
              handler[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          handler[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_enclosing_handler(handler,offset,length);
          printf("%d\n", benchRet); 
          free(handler);
        
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

          unsigned long long offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_handler0 = 1;
          struct fw_address_handler * handler = (struct fw_address_handler *) malloc(_len_handler0*sizeof(struct fw_address_handler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
              handler[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          handler[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_enclosing_handler(handler,offset,length);
          printf("%d\n", benchRet); 
          free(handler);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
