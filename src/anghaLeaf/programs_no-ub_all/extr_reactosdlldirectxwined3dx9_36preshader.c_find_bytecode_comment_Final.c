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
       0            big-arr\n\
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

__attribute__((used)) static unsigned int *find_bytecode_comment(unsigned int *ptr, unsigned int count,
        unsigned int fourcc, unsigned int *size)
{
    /* Provide at least one value in comment section on non-NULL return. */
    while (count > 2 && (*ptr & 0xffff) == 0xfffe)
    {
        unsigned int section_size;

        section_size = (*ptr >> 16);
        if (!section_size || section_size + 1 > count)
            break;
        if (*(ptr + 1) == fourcc)
        {
            *size = section_size;
            return ptr + 2;
        }
        count -= section_size + 1;
        ptr += section_size + 1;
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

    // big-arr
    case 0:
    {
          unsigned int count = 255;
          unsigned int fourcc = 255;
          int _len_ptr0 = 65025;
          unsigned int * ptr = (unsigned int *) malloc(_len_ptr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          unsigned int * size = (unsigned int *) malloc(_len_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int * benchRet = find_bytecode_comment(ptr,count,fourcc,size);
          printf("{{other_type}} %p\n", &benchRet); 
          free(ptr);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
