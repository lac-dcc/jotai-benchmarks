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
typedef  int u8 ;
typedef  scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;

/* Variables and functions */

u32
nvbios_boostSe(struct nvkm_bios *bios, int idx,
	       u32 data, u8 *ver, u8 *hdr, u8 cnt, u8 len)
{
	if (data && idx < cnt) {
		data = data + *hdr + (idx * len);
		*hdr = len;
		return data;
	}
	return 0;
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
          int idx = 100;
          long data = 100;
          int cnt = 100;
          int len = 100;
          int _len_bios0 = 1;
          struct nvkm_bios * bios = (struct nvkm_bios *) malloc(_len_bios0*sizeof(struct nvkm_bios));
          for(int _i0 = 0; _i0 < _len_bios0; _i0++) {
            bios[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ver0 = 1;
          int * ver = (int *) malloc(_len_ver0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ver0; _i0++) {
            ver[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdr0 = 1;
          int * hdr = (int *) malloc(_len_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = nvbios_boostSe(bios,idx,data,ver,hdr,cnt,len);
          printf("%ld\n", benchRet); 
          free(bios);
          free(ver);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
