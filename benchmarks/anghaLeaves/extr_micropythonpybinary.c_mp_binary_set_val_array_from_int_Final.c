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
typedef  size_t mp_uint_t ;
typedef  void* mp_int_t ;

/* Variables and functions */
#define  BYTEARRAY_TYPECODE 128 

void mp_binary_set_val_array_from_int(char typecode, void *p, mp_uint_t index, mp_int_t val) {
    switch (typecode) {
        case 'b':
            ((signed char*)p)[index] = val;
            break;
        case BYTEARRAY_TYPECODE:
        case 'B':
            ((unsigned char*)p)[index] = val;
            break;
        case 'h':
            ((short*)p)[index] = val;
            break;
        case 'H':
            ((unsigned short*)p)[index] = val;
            break;
        case 'i':
            ((int*)p)[index] = val;
            break;
        case 'I':
            ((unsigned int*)p)[index] = val;
            break;
        case 'l':
            ((long*)p)[index] = val;
            break;
        case 'L':
            ((unsigned long*)p)[index] = val;
            break;
        #if MICROPY_LONGINT_IMPL != MICROPY_LONGINT_IMPL_NONE
        case 'q':
            ((long long*)p)[index] = val;
            break;
        case 'Q':
            ((unsigned long long*)p)[index] = val;
            break;
        #endif
#if MICROPY_PY_BUILTINS_FLOAT
        case 'f':
            ((float*)p)[index] = val;
            break;
        case 'd':
            ((double*)p)[index] = val;
            break;
#endif
        // Extension to CPython: array of pointers
        case 'P':
            ((void**)p)[index] = (void*)(uintptr_t)val;
            break;
    }
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
          char typecode = 100;
        
          unsigned long index = 100;
        
          void * p;
        
          void * val;
        
          mp_binary_set_val_array_from_int(typecode,p,index,val);
        
        break;
    }
    // big-arr
    case 1:
    {
          char typecode = 255;
        
          unsigned long index = 255;
        
          void * p;
        
          void * val;
        
          mp_binary_set_val_array_from_int(typecode,p,index,val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char typecode = 10;
        
          unsigned long index = 10;
        
          void * p;
        
          void * val;
        
          mp_binary_set_val_array_from_int(typecode,p,index,val);
        
        break;
    }
    // empty
    case 3:
    {
          char typecode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * p;
        
          void * val;
        
          mp_binary_set_val_array_from_int(typecode,p,index,val);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
