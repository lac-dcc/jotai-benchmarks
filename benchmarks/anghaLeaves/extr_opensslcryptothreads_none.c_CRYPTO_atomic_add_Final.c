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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  CRYPTO_RWLOCK ;

/* Variables and functions */

int CRYPTO_atomic_add(int *val, int amount, int *ret, CRYPTO_RWLOCK *lock)
{
    *val += amount;
    *ret  = *val;

    return 1;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int amount = 100;
        
          int _len_val0 = 1;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ret0 = 1;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lock0 = 1;
          int * lock = (int *) malloc(_len_lock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = CRYPTO_atomic_add(val,amount,ret,lock);
          printf("%d\n", benchRet); 
          free(val);
          free(ret);
          free(lock);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int amount = 255;
        
          int _len_val0 = 65025;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ret0 = 65025;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lock0 = 65025;
          int * lock = (int *) malloc(_len_lock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = CRYPTO_atomic_add(val,amount,ret,lock);
          printf("%d\n", benchRet); 
          free(val);
          free(ret);
          free(lock);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int amount = 10;
        
          int _len_val0 = 100;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ret0 = 100;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lock0 = 100;
          int * lock = (int *) malloc(_len_lock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = CRYPTO_atomic_add(val,amount,ret,lock);
          printf("%d\n", benchRet); 
          free(val);
          free(ret);
          free(lock);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int amount = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_val0 = 1;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ret0 = 1;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lock0 = 1;
          int * lock = (int *) malloc(_len_lock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = CRYPTO_atomic_add(val,amount,ret,lock);
          printf("%d\n", benchRet); 
          free(val);
          free(ret);
          free(lock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
