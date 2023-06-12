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
typedef  int uint32_t ;
struct TYPE_3__ {int old_flags; int flags; scalar_t__ is_modified; } ;
typedef  TYPE_1__ phar_entry_info ;

/* Variables and functions */
#define  PHAR_ENT_COMPRESSED_BZ2 129 
#define  PHAR_ENT_COMPRESSED_GZ 128 
 int PHAR_ENT_COMPRESSION_MASK ; 

char * phar_decompress_filter(phar_entry_info * entry, int return_unknown) /* {{{ */
{
	uint32_t flags;

	if (entry->is_modified) {
		flags = entry->old_flags;
	} else {
		flags = entry->flags;
	}

	switch (flags & PHAR_ENT_COMPRESSION_MASK) {
		case PHAR_ENT_COMPRESSED_GZ:
			return "zlib.inflate";
		case PHAR_ENT_COMPRESSED_BZ2:
			return "bzip2.decompress";
		default:
			return return_unknown ? "unknown" : NULL;
	}
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int return_unknown = 100;
        
          int _len_entry0 = 1;
          struct TYPE_3__ * entry = (struct TYPE_3__ *) malloc(_len_entry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].old_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].is_modified = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char * benchRet = phar_decompress_filter(entry,return_unknown);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(entry);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int return_unknown = 255;
        
          int _len_entry0 = 65025;
          struct TYPE_3__ * entry = (struct TYPE_3__ *) malloc(_len_entry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].old_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].is_modified = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char * benchRet = phar_decompress_filter(entry,return_unknown);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(entry);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int return_unknown = 10;
        
          int _len_entry0 = 100;
          struct TYPE_3__ * entry = (struct TYPE_3__ *) malloc(_len_entry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].old_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].is_modified = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char * benchRet = phar_decompress_filter(entry,return_unknown);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(entry);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int return_unknown = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_entry0 = 1;
          struct TYPE_3__ * entry = (struct TYPE_3__ *) malloc(_len_entry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].old_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].is_modified = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char * benchRet = phar_decompress_filter(entry,return_unknown);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
