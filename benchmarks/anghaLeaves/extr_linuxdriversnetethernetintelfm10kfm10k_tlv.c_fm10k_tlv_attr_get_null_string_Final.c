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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  unsigned char u8 ;
typedef  size_t u32 ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  FM10K_ERR_PARAM ; 
 size_t FM10K_TLV_LEN_SHIFT ; 

__attribute__((used)) static s32 fm10k_tlv_attr_get_null_string(u32 *attr, unsigned char *string)
{
	u32 len;

	/* verify pointers are not NULL */
	if (!string || !attr)
		return FM10K_ERR_PARAM;

	len = *attr >> FM10K_TLV_LEN_SHIFT;
	attr++;

	while (len--)
		string[len] = (u8)(attr[len / 4] >> (8 * (len % 4)));

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

    // big-arr
    case 0:
    {
          int _len_attr0 = 65025;
          unsigned long * attr = (unsigned long *) malloc(_len_attr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_string0 = 65025;
          unsigned char * string = (unsigned char *) malloc(_len_string0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_tlv_attr_get_null_string(attr,string);
          printf("%d\n", benchRet); 
          free(attr);
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
