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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  ZSTD_nextInputType_e ;
struct TYPE_3__ {int stage; } ;
typedef  TYPE_1__ ZSTD_DCtx ;

/* Variables and functions */
#define  ZSTDds_checkChecksum 135 
#define  ZSTDds_decodeBlockHeader 134 
#define  ZSTDds_decodeFrameHeader 133 
#define  ZSTDds_decodeSkippableHeader 132 
#define  ZSTDds_decompressBlock 131 
#define  ZSTDds_decompressLastBlock 130 
#define  ZSTDds_getFrameHeaderSize 129 
#define  ZSTDds_skipFrame 128 
 int /*<<< orphan*/  ZSTDnit_block ; 
 int /*<<< orphan*/  ZSTDnit_blockHeader ; 
 int /*<<< orphan*/  ZSTDnit_checksum ; 
 int /*<<< orphan*/  ZSTDnit_frameHeader ; 
 int /*<<< orphan*/  ZSTDnit_lastBlock ; 
 int /*<<< orphan*/  ZSTDnit_skippableFrame ; 

ZSTD_nextInputType_e ZSTD_nextInputType(ZSTD_DCtx *dctx)
{
	switch (dctx->stage) {
	default: /* should not happen */
	case ZSTDds_getFrameHeaderSize:
	case ZSTDds_decodeFrameHeader: return ZSTDnit_frameHeader;
	case ZSTDds_decodeBlockHeader: return ZSTDnit_blockHeader;
	case ZSTDds_decompressBlock: return ZSTDnit_block;
	case ZSTDds_decompressLastBlock: return ZSTDnit_lastBlock;
	case ZSTDds_checkChecksum: return ZSTDnit_checksum;
	case ZSTDds_decodeSkippableHeader:
	case ZSTDds_skipFrame: return ZSTDnit_skippableFrame;
	}
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
          int _len_dctx0 = 1;
          struct TYPE_3__ * dctx = (struct TYPE_3__ *) malloc(_len_dctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dctx0; _i0++) {
            dctx[_i0].stage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ZSTD_nextInputType(dctx);
          printf("%d\n", benchRet); 
          free(dctx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dctx0 = 100;
          struct TYPE_3__ * dctx = (struct TYPE_3__ *) malloc(_len_dctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dctx0; _i0++) {
            dctx[_i0].stage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ZSTD_nextInputType(dctx);
          printf("%d\n", benchRet); 
          free(dctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
