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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {void* p; } ;

/* Variables and functions */
 int STB_MALLOC_HISTORY_COUNT ; 
 TYPE_1__* stb__alloc_history ; 
 int stb__history_pos ; 

__attribute__((used)) static int stb__historyfind(void *p)
{
   int n = stb__history_pos;
   int i;
   for (i=0; i < STB_MALLOC_HISTORY_COUNT; ++i) {
      if (--n < 0) n = STB_MALLOC_HISTORY_COUNT-1;
      if (stb__alloc_history[n].p == p)
         return n;
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
          void * p;
        
          int benchRet = stb__historyfind(p);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          void * p;
        
          int benchRet = stb__historyfind(p);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 2:
    {
          void * p;
        
          int benchRet = stb__historyfind(p);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
