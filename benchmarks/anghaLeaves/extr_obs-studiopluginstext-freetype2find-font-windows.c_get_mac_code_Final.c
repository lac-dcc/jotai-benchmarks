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
typedef  scalar_t__ uint16_t ;
struct mac_font_mapping {scalar_t__ encoding_id; scalar_t__ language_id; unsigned int code_page; } ;

/* Variables and functions */
 size_t mac_code_count ; 
 struct mac_font_mapping* mac_codes ; 

__attribute__((used)) static unsigned int get_mac_code(uint16_t encoding_id, uint16_t language_id)
{
	for (size_t i = 0; i < mac_code_count; i++) {
		const struct mac_font_mapping *mac_code = &mac_codes[i];

		if (mac_code->encoding_id == encoding_id &&
		    mac_code->language_id == language_id)
			return mac_code->code_page;
	}

	return 0;
}


// ------------------------------------------------------------------------- //




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
          long encoding_id = 100;
          long language_id = 100;
          unsigned int benchRet = get_mac_code(encoding_id,language_id);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long encoding_id = 255;
          long language_id = 255;
          unsigned int benchRet = get_mac_code(encoding_id,language_id);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long encoding_id = 10;
          long language_id = 10;
          unsigned int benchRet = get_mac_code(encoding_id,language_id);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
