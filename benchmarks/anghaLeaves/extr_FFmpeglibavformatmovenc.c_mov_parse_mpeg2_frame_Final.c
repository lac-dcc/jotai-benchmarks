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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_3__ {int size; int* data; } ;
typedef  TYPE_1__ AVPacket ;

/* Variables and functions */
 int MOV_PARTIAL_SYNC_SAMPLE ; 
 int MOV_SYNC_SAMPLE ; 

__attribute__((used)) static int mov_parse_mpeg2_frame(AVPacket *pkt, uint32_t *flags)
{
    uint32_t c = -1;
    int i, closed_gop = 0;

    for (i = 0; i < pkt->size - 4; i++) {
        c = (c << 8) + pkt->data[i];
        if (c == 0x1b8) { // gop
            closed_gop = pkt->data[i + 4] >> 6 & 0x01;
        } else if (c == 0x100) { // pic
            int temp_ref = (pkt->data[i + 1] << 2) | (pkt->data[i + 2] >> 6);
            if (!temp_ref || closed_gop) // I picture is not reordered
                *flags = MOV_SYNC_SAMPLE;
            else
                *flags = MOV_PARTIAL_SYNC_SAMPLE;
            break;
        }
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
          int _len_pkt0 = 1;
          struct TYPE_3__ * pkt = (struct TYPE_3__ *) malloc(_len_pkt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt__i0__data0 = 1;
          pkt[_i0].data = (int *) malloc(_len_pkt__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__data0; _j0++) {
            pkt[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_flags0 = 1;
          int * flags = (int *) malloc(_len_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mov_parse_mpeg2_frame(pkt,flags);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].data);
          }
          free(pkt);
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
