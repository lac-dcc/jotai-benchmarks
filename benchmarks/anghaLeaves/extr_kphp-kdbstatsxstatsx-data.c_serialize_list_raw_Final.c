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

/* Variables and functions */

__attribute__((used)) static int *serialize_list_raw (int *ptr, int *list, int num) {
  int i;
  if (!list) {
    *(ptr++) = 0;
    return ptr;
  }
  *(ptr++) = num;
  for (i = 0; i < num; i++) {
    *(ptr++) = list[i];
  }
  return ptr;
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
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 3847
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 1291
          // ------------------------------- 
          // static_instructions_O2 : 89
          // dynamic_instructions_O2 : 253
          // ------------------------------- 
          // static_instructions_O3 : 89
          // dynamic_instructions_O3 : 253
          // ------------------------------- 
          // static_instructions_Ofast : 89
          // dynamic_instructions_Ofast : 253
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 1291
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 1547
          // ------------------------------- 

          int num = 255;
        
          int _len_ptr0 = 65025;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_list0 = 65025;
          int * list = (int *) malloc(_len_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = serialize_list_raw(ptr,list,num);
          printf("%d\n", (*benchRet)); 
          free(ptr);
          free(list);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 172
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 66
          // ------------------------------- 
          // static_instructions_O2 : 68
          // dynamic_instructions_O2 : 74
          // ------------------------------- 
          // static_instructions_O3 : 68
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 68
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 66
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 77
          // ------------------------------- 

          int num = 10;
        
          int _len_ptr0 = 100;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_list0 = 100;
          int * list = (int *) malloc(_len_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = serialize_list_raw(ptr,list,num);
          printf("%d\n", (*benchRet)); 
          free(ptr);
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
