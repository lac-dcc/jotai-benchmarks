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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut64 ;
typedef  scalar_t__ ut32 ;
typedef  scalar_t__ uint64_t ;
typedef  size_t uint32_t ;
struct TYPE_5__ {scalar_t__ address; scalar_t__ size; scalar_t__ fileOffset; } ;
typedef  TYPE_1__ cache_map_t ;
struct TYPE_6__ {size_t mappingCount; } ;
typedef  TYPE_2__ cache_hdr_t ;
typedef  int /*<<< orphan*/  RBuffer ;

/* Variables and functions */
 scalar_t__ UT64_MAX ; 

__attribute__((used)) static ut64 va2pa(uint64_t addr, cache_hdr_t *hdr, cache_map_t *maps, RBuffer *cache_buf, ut64 slide, ut32 *offset, ut32 *left) {
	ut64 res = UT64_MAX;
	uint32_t i;

	addr -= slide;

	for (i = 0; i < hdr->mappingCount; ++i) {
		if (addr >= maps[i].address && addr < maps[i].address + maps[i].size) {
			res = maps[i].fileOffset + addr - maps[i].address;
			if (offset) {
				*offset = addr - maps[i].address;
			}
			if (left) {
				*left = maps[i].size - (addr - maps[i].address);
			}
			break;
		}
	}

	return res;
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
          long addr = 255;
          long slide = 255;
          int _len_hdr0 = 65025;
          struct TYPE_6__ * hdr = (struct TYPE_6__ *) malloc(_len_hdr0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].mappingCount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maps0 = 65025;
          struct TYPE_5__ * maps = (struct TYPE_5__ *) malloc(_len_maps0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_maps0; _i0++) {
            maps[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
        maps[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        maps[_i0].fileOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cache_buf0 = 65025;
          int * cache_buf = (int *) malloc(_len_cache_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cache_buf0; _i0++) {
            cache_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 65025;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_left0 = 65025;
          long * left = (long *) malloc(_len_left0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = va2pa(addr,hdr,maps,cache_buf,slide,offset,left);
          printf("%ld\n", benchRet); 
          free(hdr);
          free(maps);
          free(cache_buf);
          free(offset);
          free(left);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
