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

__attribute__((used)) static inline void
xlog_write_adv_cnt(void **ptr, int *len, int *off, size_t bytes)
{
	*ptr += bytes;
	*len -= bytes;
	*off += bytes;
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
          unsigned long bytes = 100;
          int _len_ptr0 = 1;
          void ** ptr = (void **) malloc(_len_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_off0 = 1;
          int * off = (int *) malloc(_len_off0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_off0; _i0++) {
            off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xlog_write_adv_cnt(ptr,len,off,bytes);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              }
          free(ptr);
          free(len);
          free(off);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long bytes = 255;
          int _len_ptr0 = 65025;
          void ** ptr = (void **) malloc(_len_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_off0 = 65025;
          int * off = (int *) malloc(_len_off0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_off0; _i0++) {
            off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xlog_write_adv_cnt(ptr,len,off,bytes);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              }
          free(ptr);
          free(len);
          free(off);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long bytes = 10;
          int _len_ptr0 = 100;
          void ** ptr = (void **) malloc(_len_ptr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_off0 = 100;
          int * off = (int *) malloc(_len_off0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_off0; _i0++) {
            off[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xlog_write_adv_cnt(ptr,len,off,bytes);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              }
          free(ptr);
          free(len);
          free(off);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
