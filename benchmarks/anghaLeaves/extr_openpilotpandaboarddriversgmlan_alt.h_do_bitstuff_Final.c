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

/* Variables and functions */

int do_bitstuff(char *out, char *in, int in_len) {
  int last_bit = -1;
  int bit_cnt = 0;
  int j = 0;
  for (int i = 0; i < in_len; i++) {
    char bit = in[i];
    out[j++] = bit;

    // do the stuffing
    if (bit == last_bit) {
      bit_cnt++;
      if (bit_cnt == 5) {
        // 5 in a row the same, do stuff
        last_bit = !bit;
        out[j++] = last_bit;
        bit_cnt = 1;
      }
    } else {
      // this is a new bit
      last_bit = bit;
      bit_cnt = 1;
    }
  }
  return j;
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
          // static_instructions_O0 : 60
          // dynamic_instructions_O0 : 8073
          // ------------------------------- 
          // static_instructions_O1 : 39
          // dynamic_instructions_O1 : 4349
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 4349
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 4349
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 4349
          // ------------------------------- 
          // static_instructions_Os : 39
          // dynamic_instructions_Os : 4349
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 3942
          // ------------------------------- 

          int in_len = 255;
        
          int _len_out0 = 65025;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 65025;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = do_bitstuff(out,in,in_len);
          printf("%d\n", benchRet); 
          free(out);
          free(in);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 60
          // dynamic_instructions_O0 : 331
          // ------------------------------- 
          // static_instructions_O1 : 39
          // dynamic_instructions_O1 : 184
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 184
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 184
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 184
          // ------------------------------- 
          // static_instructions_Os : 39
          // dynamic_instructions_Os : 184
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 169
          // ------------------------------- 

          int in_len = 10;
        
          int _len_out0 = 100;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 100;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = do_bitstuff(out,in,in_len);
          printf("%d\n", benchRet); 
          free(out);
          free(in);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int in_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 1;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 1;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = do_bitstuff(out,in,in_len);
          printf("%d\n", benchRet); 
          free(out);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
