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
typedef  int u16 ;
struct nvkm_bios {int dummy; } ;

/* Variables and functions */

u16
nvbios_ocfg_entry(struct nvkm_bios *bios, u16 outp, u8 idx,
		  u8 *ver, u8 *hdr, u8 *cnt, u8 *len)
{
	if (idx < *cnt)
		return outp + *hdr + (idx * *len);
	return 0x0000;
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
          int outp = 100;
          int idx = 100;
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
          int _len_cnt0 = 1;
          int * cnt = (int *) malloc(_len_cnt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvbios_ocfg_entry(bios,outp,idx,ver,hdr,cnt,len);
          printf("%d\n", benchRet); 
          free(bios);
          free(ver);
          free(hdr);
          free(cnt);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
