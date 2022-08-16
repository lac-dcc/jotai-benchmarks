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
struct vtoc_cchh {int hh; int cc; } ;
struct hd_geometry {int heads; int sectors; } ;
typedef  int sector_t ;
typedef  int __u16 ;

/* Variables and functions */

__attribute__((used)) static sector_t cchh2blk(struct vtoc_cchh *ptr, struct hd_geometry *geo)
{
	sector_t cyl;
	__u16 head;

	/* decode cylinder and heads for large volumes */
	cyl = ptr->hh & 0xFFF0;
	cyl <<= 12;
	cyl |= ptr->cc;
	head = ptr->hh & 0x000F;
	return cyl * geo->heads * geo->sectors +
	       head * geo->sectors;
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
          int _len_ptr0 = 1;
          struct vtoc_cchh * ptr = (struct vtoc_cchh *) malloc(_len_ptr0*sizeof(struct vtoc_cchh));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].hh = ((-2 * (next_i()%2)) + 1) * next_i();
        ptr[_i0].cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_geo0 = 1;
          struct hd_geometry * geo = (struct hd_geometry *) malloc(_len_geo0*sizeof(struct hd_geometry));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].heads = ((-2 * (next_i()%2)) + 1) * next_i();
        geo[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cchh2blk(ptr,geo);
          printf("%d\n", benchRet); 
          free(ptr);
          free(geo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
