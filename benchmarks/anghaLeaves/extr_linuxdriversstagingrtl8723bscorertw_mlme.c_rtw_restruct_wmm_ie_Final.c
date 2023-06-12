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
typedef  unsigned int uint ;
typedef  int u8 ;
struct adapter {int dummy; } ;

/* Variables and functions */

int rtw_restruct_wmm_ie(struct adapter *adapter, u8 *in_ie, u8 *out_ie, uint in_len, uint initial_out_len)
{
	unsigned	int ielength = 0;
	unsigned int i, j;

	i = 12; /* after the fixed IE */
	while (i < in_len) {
		ielength = initial_out_len;

		if (in_ie[i] == 0xDD && in_ie[i+2] == 0x00 && in_ie[i+3] == 0x50  && in_ie[i+4] == 0xF2 && in_ie[i+5] == 0x02 && i+5 < in_len) { /* WMM element ID and OUI */
			for (j = i; j < i + 9; j++) {
					out_ie[ielength] = in_ie[j];
					ielength++;
			}
			out_ie[initial_out_len + 1] = 0x07;
			out_ie[initial_out_len + 6] = 0x00;
			out_ie[initial_out_len + 8] = 0x00;

			break;
		}

		i += (in_ie[i+1]+2); /*  to the next IE element */
	}

	return ielength;

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
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          unsigned int in_len = 255;
        
          unsigned int initial_out_len = 255;
        
          int _len_adapter0 = 65025;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_in_ie0 = 65025;
          int * in_ie = (int *) malloc(_len_in_ie0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_ie0; _i0++) {
            in_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out_ie0 = 65025;
          int * out_ie = (int *) malloc(_len_out_ie0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_ie0; _i0++) {
            out_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtw_restruct_wmm_ie(adapter,in_ie,out_ie,in_len,initial_out_len);
          printf("%d\n", benchRet); 
          free(adapter);
          free(in_ie);
          free(out_ie);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int in_len = 10;
        
          unsigned int initial_out_len = 10;
        
          int _len_adapter0 = 100;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_in_ie0 = 100;
          int * in_ie = (int *) malloc(_len_in_ie0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_ie0; _i0++) {
            in_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out_ie0 = 100;
          int * out_ie = (int *) malloc(_len_out_ie0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_ie0; _i0++) {
            out_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtw_restruct_wmm_ie(adapter,in_ie,out_ie,in_len,initial_out_len);
          printf("%d\n", benchRet); 
          free(adapter);
          free(in_ie);
          free(out_ie);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
