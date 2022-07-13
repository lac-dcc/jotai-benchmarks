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
typedef  int u32 ;

/* Variables and functions */
 char const* OPTI_STR_APPENDED_SALT ; 
 char const* OPTI_STR_BRUTE_FORCE ; 
 char const* OPTI_STR_EARLY_SKIP ; 
 char const* OPTI_STR_MEET_IN_MIDDLE ; 
 char const* OPTI_STR_NOT_ITERATED ; 
 char const* OPTI_STR_NOT_SALTED ; 
 char const* OPTI_STR_OPTIMIZED_KERNEL ; 
 char const* OPTI_STR_PRECOMPUTE_INIT ; 
 char const* OPTI_STR_PREPENDED_SALT ; 
 char const* OPTI_STR_RAW_HASH ; 
 char const* OPTI_STR_SINGLE_HASH ; 
 char const* OPTI_STR_SINGLE_SALT ; 
 char const* OPTI_STR_SLOW_HASH_SIMD_COMP ; 
 char const* OPTI_STR_SLOW_HASH_SIMD_INIT ; 
 char const* OPTI_STR_SLOW_HASH_SIMD_LOOP ; 
 char const* OPTI_STR_USES_BITS_16 ; 
 char const* OPTI_STR_USES_BITS_32 ; 
 char const* OPTI_STR_USES_BITS_64 ; 
 char const* OPTI_STR_USES_BITS_8 ; 
 char const* OPTI_STR_ZERO_BYTE ; 
#define  OPTI_TYPE_APPENDED_SALT 147 
#define  OPTI_TYPE_BRUTE_FORCE 146 
#define  OPTI_TYPE_EARLY_SKIP 145 
#define  OPTI_TYPE_MEET_IN_MIDDLE 144 
#define  OPTI_TYPE_NOT_ITERATED 143 
#define  OPTI_TYPE_NOT_SALTED 142 
#define  OPTI_TYPE_OPTIMIZED_KERNEL 141 
#define  OPTI_TYPE_PRECOMPUTE_INIT 140 
#define  OPTI_TYPE_PREPENDED_SALT 139 
#define  OPTI_TYPE_RAW_HASH 138 
#define  OPTI_TYPE_SINGLE_HASH 137 
#define  OPTI_TYPE_SINGLE_SALT 136 
#define  OPTI_TYPE_SLOW_HASH_SIMD_COMP 135 
#define  OPTI_TYPE_SLOW_HASH_SIMD_INIT 134 
#define  OPTI_TYPE_SLOW_HASH_SIMD_LOOP 133 
#define  OPTI_TYPE_USES_BITS_16 132 
#define  OPTI_TYPE_USES_BITS_32 131 
#define  OPTI_TYPE_USES_BITS_64 130 
#define  OPTI_TYPE_USES_BITS_8 129 
#define  OPTI_TYPE_ZERO_BYTE 128 

const char *stroptitype (const u32 opti_type)
{
  switch (opti_type)
  {
    case OPTI_TYPE_OPTIMIZED_KERNEL:    return OPTI_STR_OPTIMIZED_KERNEL;
    case OPTI_TYPE_ZERO_BYTE:           return OPTI_STR_ZERO_BYTE;
    case OPTI_TYPE_PRECOMPUTE_INIT:     return OPTI_STR_PRECOMPUTE_INIT;
    case OPTI_TYPE_MEET_IN_MIDDLE:      return OPTI_STR_MEET_IN_MIDDLE;
    case OPTI_TYPE_EARLY_SKIP:          return OPTI_STR_EARLY_SKIP;
    case OPTI_TYPE_NOT_SALTED:          return OPTI_STR_NOT_SALTED;
    case OPTI_TYPE_NOT_ITERATED:        return OPTI_STR_NOT_ITERATED;
    case OPTI_TYPE_PREPENDED_SALT:      return OPTI_STR_PREPENDED_SALT;
    case OPTI_TYPE_APPENDED_SALT:       return OPTI_STR_APPENDED_SALT;
    case OPTI_TYPE_SINGLE_HASH:         return OPTI_STR_SINGLE_HASH;
    case OPTI_TYPE_SINGLE_SALT:         return OPTI_STR_SINGLE_SALT;
    case OPTI_TYPE_BRUTE_FORCE:         return OPTI_STR_BRUTE_FORCE;
    case OPTI_TYPE_RAW_HASH:            return OPTI_STR_RAW_HASH;
    case OPTI_TYPE_SLOW_HASH_SIMD_INIT: return OPTI_STR_SLOW_HASH_SIMD_INIT;
    case OPTI_TYPE_SLOW_HASH_SIMD_LOOP: return OPTI_STR_SLOW_HASH_SIMD_LOOP;
    case OPTI_TYPE_SLOW_HASH_SIMD_COMP: return OPTI_STR_SLOW_HASH_SIMD_COMP;
    case OPTI_TYPE_USES_BITS_8:         return OPTI_STR_USES_BITS_8;
    case OPTI_TYPE_USES_BITS_16:        return OPTI_STR_USES_BITS_16;
    case OPTI_TYPE_USES_BITS_32:        return OPTI_STR_USES_BITS_32;
    case OPTI_TYPE_USES_BITS_64:        return OPTI_STR_USES_BITS_64;
  }

  return NULL;
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
          const int opti_type = 100;
          const char * benchRet = stroptitype(opti_type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int opti_type = 255;
          const char * benchRet = stroptitype(opti_type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int opti_type = 10;
          const char * benchRet = stroptitype(opti_type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
