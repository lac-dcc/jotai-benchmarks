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

int util_memsearch(char *buf, int buf_len, char *mem, int mem_len)
{
    int i, matched = 0;

    if (mem_len > buf_len)
        return -1;

    for (i = 0; i < buf_len; i++)
    {
        if (buf[i] == mem[matched])
        {
            if (++matched == mem_len)
                return i + 1;
        }
        else
            matched = 0;
    }

    return -1;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 5622
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 3328
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 3328
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 3328
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 3328
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 3327
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 3582
          // ------------------------------- 

          int buf_len = 255;
        
          int mem_len = 255;
        
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mem0 = 65025;
          char * mem = (char *) malloc(_len_mem0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = util_memsearch(buf,buf_len,mem,mem_len);
          printf("%d\n", benchRet); 
          free(buf);
          free(mem);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 232
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 143
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 143
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 143
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 143
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 142
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 152
          // ------------------------------- 

          int buf_len = 10;
        
          int mem_len = 10;
        
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mem0 = 100;
          char * mem = (char *) malloc(_len_mem0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = util_memsearch(buf,buf_len,mem,mem_len);
          printf("%d\n", benchRet); 
          free(buf);
          free(mem);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int mem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mem0 = 1;
          char * mem = (char *) malloc(_len_mem0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = util_memsearch(buf,buf_len,mem,mem_len);
          printf("%d\n", benchRet); 
          free(buf);
          free(mem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
