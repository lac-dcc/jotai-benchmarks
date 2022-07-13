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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

int THAtomicCompareAndSwap(int volatile *a, int oldvalue, int newvalue)
{
#if defined(USE_C11_ATOMICS)
  return atomic_compare_exchange_strong(a, &oldvalue, newvalue);
#elif defined(USE_MSC_ATOMICS)
  assert(sizeof(int) == sizeof(long));
  return (_InterlockedCompareExchange((long*)a, (long)newvalue, (long)oldvalue) == (long)oldvalue);
#elif defined(USE_GCC_ATOMICS)
  return __sync_bool_compare_and_swap(a, oldvalue, newvalue);
#elif defined(USE_PTHREAD_ATOMICS)
  int ret = 0;
  pthread_mutex_lock(&ptm);
  if(*a == oldvalue) {
    *a = newvalue;
    ret = 1;
  }
  pthread_mutex_unlock(&ptm);
  return ret;
#else
#warning THAtomic is not thread safe
  if(*a == oldvalue) {
    *a = newvalue;
    return 1;
  }
  else
    return 0;
#endif
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int oldvalue = 100;
          int newvalue = 100;
          int _len_a0 = 1;
          volatile int * a = (volatile int *) malloc(_len_a0*sizeof(volatile int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = THAtomicCompareAndSwap(a,oldvalue,newvalue);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          int oldvalue = 255;
          int newvalue = 255;
          int _len_a0 = 65025;
          volatile int * a = (volatile int *) malloc(_len_a0*sizeof(volatile int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = THAtomicCompareAndSwap(a,oldvalue,newvalue);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int oldvalue = 10;
          int newvalue = 10;
          int _len_a0 = 100;
          volatile int * a = (volatile int *) malloc(_len_a0*sizeof(volatile int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = THAtomicCompareAndSwap(a,oldvalue,newvalue);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
