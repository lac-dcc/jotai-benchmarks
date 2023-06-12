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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

u8 cx231xx_find_next_SAV_EAV(u8 *p_buffer, u32 buffer_size, u32 *p_bytes_used)
{
	u32 i;
	u8 sav_eav = 0;

	/*
	 * Don't search if the buffer size is less than 4.  It causes a page
	 * fault since buffer_size - 4 evaluates to a large number in that
	 * case.
	 */
	if (buffer_size < 4) {
		*p_bytes_used = buffer_size;
		return 0;
	}

	for (i = 0; i < (buffer_size - 3); i++) {

		if ((p_buffer[i] == 0xFF) &&
		    (p_buffer[i + 1] == 0x00) && (p_buffer[i + 2] == 0x00)) {

			*p_bytes_used = i + 4;
			sav_eav = p_buffer[i + 3];
			return sav_eav;
		}
	}

	*p_bytes_used = buffer_size;
	return 0;
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
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 3549
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 1776
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 1776
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 1776
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 1776
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 1775
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 1778
          // ------------------------------- 

          int buffer_size = 255;
        
          int _len_p_buffer0 = 65025;
          int * p_buffer = (int *) malloc(_len_p_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_buffer0; _i0++) {
            p_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p_bytes_used0 = 65025;
          int * p_bytes_used = (int *) malloc(_len_p_bytes_used0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_bytes_used0; _i0++) {
            p_bytes_used[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cx231xx_find_next_SAV_EAV(p_buffer,buffer_size,p_bytes_used);
          printf("%d\n", benchRet); 
          free(p_buffer);
          free(p_bytes_used);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 119
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          int buffer_size = 10;
        
          int _len_p_buffer0 = 100;
          int * p_buffer = (int *) malloc(_len_p_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_buffer0; _i0++) {
            p_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p_bytes_used0 = 100;
          int * p_bytes_used = (int *) malloc(_len_p_bytes_used0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_bytes_used0; _i0++) {
            p_bytes_used[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cx231xx_find_next_SAV_EAV(p_buffer,buffer_size,p_bytes_used);
          printf("%d\n", benchRet); 
          free(p_buffer);
          free(p_bytes_used);
        
        break;
    }


    // empty
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

          int buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p_buffer0 = 1;
          int * p_buffer = (int *) malloc(_len_p_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_buffer0; _i0++) {
            p_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p_bytes_used0 = 1;
          int * p_bytes_used = (int *) malloc(_len_p_bytes_used0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_bytes_used0; _i0++) {
            p_bytes_used[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cx231xx_find_next_SAV_EAV(p_buffer,buffer_size,p_bytes_used);
          printf("%d\n", benchRet); 
          free(p_buffer);
          free(p_bytes_used);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
