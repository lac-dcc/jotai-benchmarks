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
struct ch_t {int head; scalar_t__ cyl; } ;
typedef  int __u8 ;
typedef  int __u32 ;
typedef  scalar_t__ __u16 ;

/* Variables and functions */

__attribute__((used)) static void set_ch_t(struct ch_t *geo, __u32 cyl, __u8 head)
{
	geo->cyl = (__u16) cyl;
	geo->head = cyl >> 16;
	geo->head <<= 4;
	geo->head |= head;
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
          int cyl = 100;
        
          int head = 100;
        
          int _len_geo0 = 1;
          struct ch_t * geo = (struct ch_t *) malloc(_len_geo0*sizeof(struct ch_t));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
              geo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_ch_t(geo,cyl,head);
          free(geo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cyl = 255;
        
          int head = 255;
        
          int _len_geo0 = 65025;
          struct ch_t * geo = (struct ch_t *) malloc(_len_geo0*sizeof(struct ch_t));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
              geo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_ch_t(geo,cyl,head);
          free(geo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cyl = 10;
        
          int head = 10;
        
          int _len_geo0 = 100;
          struct ch_t * geo = (struct ch_t *) malloc(_len_geo0*sizeof(struct ch_t));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
              geo[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_ch_t(geo,cyl,head);
          free(geo);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
