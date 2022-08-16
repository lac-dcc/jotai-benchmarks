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

int CRYPTO_secure_malloc_init(size_t size, int minsize)
{
#ifdef OPENSSL_SECURE_MEMORY
    int ret = 0;

    if (!secure_mem_initialized) {
        sec_malloc_lock = CRYPTO_THREAD_lock_new();
        if (sec_malloc_lock == NULL)
            return 0;
        if ((ret = sh_init(size, minsize)) != 0) {
            secure_mem_initialized = 1;
        } else {
            CRYPTO_THREAD_lock_free(sec_malloc_lock);
            sec_malloc_lock = NULL;
        }
    }

    return ret;
#else
    return 0;
#endif /* OPENSSL_SECURE_MEMORY */
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
          unsigned long size = 100;
          int minsize = 100;
          int benchRet = CRYPTO_secure_malloc_init(size,minsize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int minsize = 255;
          int benchRet = CRYPTO_secure_malloc_init(size,minsize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int minsize = 10;
          int benchRet = CRYPTO_secure_malloc_init(size,minsize);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
