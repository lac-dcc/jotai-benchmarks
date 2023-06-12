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
struct backtrace_location {int /*<<< orphan*/  method_id; int /*<<< orphan*/  lineno; int /*<<< orphan*/  filename; } ;

/* Variables and functions */

__attribute__((used)) static int
packed_bt_len(struct backtrace_location *bt, int n)
{
  int len = 0;
  int i;

  for (i=0; i<n; i++) {
    if (!bt[i].filename && !bt[i].lineno && !bt[i].method_id)
      continue;
    len++;
  }
  return len;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 4092
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 1542
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 1542
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 1542
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 1542
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 1542
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 1796
          // ------------------------------- 

          int n = 255;
        
          int _len_bt0 = 65025;
          struct backtrace_location * bt = (struct backtrace_location *) malloc(_len_bt0*sizeof(struct backtrace_location));
          for(int _i0 = 0; _i0 < _len_bt0; _i0++) {
              bt[_i0].method_id = ((-2 * (next_i()%2)) + 1) * next_i();
          bt[_i0].lineno = ((-2 * (next_i()%2)) + 1) * next_i();
          bt[_i0].filename = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = packed_bt_len(bt,n);
          printf("%d\n", benchRet); 
          free(bt);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 172
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 72
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 72
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 72
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 72
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 81
          // ------------------------------- 

          int n = 10;
        
          int _len_bt0 = 100;
          struct backtrace_location * bt = (struct backtrace_location *) malloc(_len_bt0*sizeof(struct backtrace_location));
          for(int _i0 = 0; _i0 < _len_bt0; _i0++) {
              bt[_i0].method_id = ((-2 * (next_i()%2)) + 1) * next_i();
          bt[_i0].lineno = ((-2 * (next_i()%2)) + 1) * next_i();
          bt[_i0].filename = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = packed_bt_len(bt,n);
          printf("%d\n", benchRet); 
          free(bt);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bt0 = 1;
          struct backtrace_location * bt = (struct backtrace_location *) malloc(_len_bt0*sizeof(struct backtrace_location));
          for(int _i0 = 0; _i0 < _len_bt0; _i0++) {
              bt[_i0].method_id = ((-2 * (next_i()%2)) + 1) * next_i();
          bt[_i0].lineno = ((-2 * (next_i()%2)) + 1) * next_i();
          bt[_i0].filename = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = packed_bt_len(bt,n);
          printf("%d\n", benchRet); 
          free(bt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
