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
typedef  int u64 ;

/* Variables and functions */

void get_next_word_lm (char *buf, u64 sz, u64 *len, u64 *off)
{
  char *ptr = buf;

  for (u64 i = 0; i < sz; i++, ptr++)
  {
    if (*ptr >= 'a' && *ptr <= 'z') *ptr -= 0x20;

    if (i == 7)
    {
      *off = i;
      *len = i;

      return;
    }

    if (*ptr != '\n') continue;

    *off = i + 1;

    if ((i > 0) && (buf[i - 1] == '\r')) i--;

    *len = i;

    return;
  }

  *off = sz;
  *len = sz;
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
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 174
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 96
          // ------------------------------- 
          // static_instructions_O2 : 71
          // dynamic_instructions_O2 : 71
          // ------------------------------- 
          // static_instructions_O3 : 70
          // dynamic_instructions_O3 : 70
          // ------------------------------- 
          // static_instructions_Ofast : 70
          // dynamic_instructions_Ofast : 70
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 95
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 104
          // ------------------------------- 

          int sz = 255;
        
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_off0 = 65025;
          int * off = (int *) malloc(_len_off0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_off0; _i0++) {
            off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_next_word_lm(buf,sz,len,off);
          free(buf);
          free(len);
          free(off);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 174
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 96
          // ------------------------------- 
          // static_instructions_O2 : 71
          // dynamic_instructions_O2 : 71
          // ------------------------------- 
          // static_instructions_O3 : 70
          // dynamic_instructions_O3 : 70
          // ------------------------------- 
          // static_instructions_Ofast : 70
          // dynamic_instructions_Ofast : 70
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 95
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 104
          // ------------------------------- 

          int sz = 10;
        
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_off0 = 100;
          int * off = (int *) malloc(_len_off0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_off0; _i0++) {
            off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_next_word_lm(buf,sz,len,off);
          free(buf);
          free(len);
          free(off);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_off0 = 1;
          int * off = (int *) malloc(_len_off0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_off0; _i0++) {
            off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_next_word_lm(buf,sz,len,off);
          free(buf);
          free(len);
          free(off);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
