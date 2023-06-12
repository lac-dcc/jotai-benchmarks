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
typedef  int u8 ;
typedef  int /*<<< orphan*/  efi_char16_t ;

/* Variables and functions */

__attribute__((used)) static bool
validate_ascii_string(efi_char16_t *var_name, int match, u8 *buffer,
		      unsigned long len)
{
	int i;

	for (i = 0; i < len; i++) {
		if (buffer[i] > 127)
			return false;

		if (buffer[i] == 0)
			return true;
	}

	return false;
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 4094
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 2049
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 2049
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 2049
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 2049
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 2049
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 2049
          // ------------------------------- 

          int match = 255;
        
          unsigned long len = 255;
        
          int _len_var_name0 = 65025;
          int * var_name = (int *) malloc(_len_var_name0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_var_name0; _i0++) {
            var_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_buffer0 = 65025;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = validate_ascii_string(var_name,match,buffer,len);
          printf("%d\n", benchRet); 
          free(var_name);
          free(buffer);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 174
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 89
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 89
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 89
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 89
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 89
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 89
          // ------------------------------- 

          int match = 10;
        
          unsigned long len = 10;
        
          int _len_var_name0 = 100;
          int * var_name = (int *) malloc(_len_var_name0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_var_name0; _i0++) {
            var_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_buffer0 = 100;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = validate_ascii_string(var_name,match,buffer,len);
          printf("%d\n", benchRet); 
          free(var_name);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
