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
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  E_FAIL ; 
 int /*<<< orphan*/  S_OK ; 

__attribute__((used)) static HRESULT copy_substring_null(char *dest, int max_len, char *src)
{
    if (!src)
        return E_FAIL;

    if (max_len <= 0)
        return S_OK;

    if (!dest)
        return E_FAIL;

    while (*src && max_len-- > 1)
        *dest++ = *src++;
    *dest = 0;

    return S_OK;
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
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 6894
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 2302
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 2302
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 2302
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 2302
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 2301
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 2303
          // ------------------------------- 

          int max_len = 255;
        
          int _len_dest0 = 65025;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 65025;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = copy_substring_null(dest,max_len,src);
          printf("%d\n", benchRet); 
          free(dest);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 279
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 97
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 97
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 97
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 97
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 96
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 98
          // ------------------------------- 

          int max_len = 10;
        
          int _len_dest0 = 100;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 100;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = copy_substring_null(dest,max_len,src);
          printf("%d\n", benchRet); 
          free(dest);
          free(src);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int max_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dest0 = 1;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 1;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = copy_substring_null(dest,max_len,src);
          printf("%d\n", benchRet); 
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
