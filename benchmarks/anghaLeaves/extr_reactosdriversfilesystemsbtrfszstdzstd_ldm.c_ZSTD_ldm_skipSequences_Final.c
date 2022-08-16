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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ pos; scalar_t__ size; TYPE_2__* seq; } ;
typedef  TYPE_1__ rawSeqStore_t ;
struct TYPE_5__ {size_t litLength; size_t matchLength; } ;
typedef  TYPE_2__ rawSeq ;
typedef  size_t U32 ;

/* Variables and functions */

void ZSTD_ldm_skipSequences(rawSeqStore_t* rawSeqStore, size_t srcSize, U32 const minMatch) {
    while (srcSize > 0 && rawSeqStore->pos < rawSeqStore->size) {
        rawSeq* seq = rawSeqStore->seq + rawSeqStore->pos;
        if (srcSize <= seq->litLength) {
            /* Skip past srcSize literals */
            seq->litLength -= (U32)srcSize;
            return;
        }
        srcSize -= seq->litLength;
        seq->litLength = 0;
        if (srcSize < seq->matchLength) {
            /* Skip past the first srcSize of the match */
            seq->matchLength -= (U32)srcSize;
            if (seq->matchLength < minMatch) {
                /* The match is too short, omit it */
                if (rawSeqStore->pos + 1 < rawSeqStore->size) {
                    seq[1].litLength += seq[0].matchLength;
                }
                rawSeqStore->pos++;
            }
            return;
        }
        srcSize -= seq->matchLength;
        seq->matchLength = 0;
        rawSeqStore->pos++;
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
          unsigned long srcSize = 100;
          const unsigned long minMatch = 100;
          int _len_rawSeqStore0 = 1;
          struct TYPE_4__ * rawSeqStore = (struct TYPE_4__ *) malloc(_len_rawSeqStore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_rawSeqStore0; _i0++) {
            rawSeqStore[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        rawSeqStore[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rawSeqStore__i0__seq0 = 1;
          rawSeqStore[_i0].seq = (struct TYPE_5__ *) malloc(_len_rawSeqStore__i0__seq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rawSeqStore__i0__seq0; _j0++) {
            rawSeqStore[_i0].seq->litLength = ((-2 * (next_i()%2)) + 1) * next_i();
        rawSeqStore[_i0].seq->matchLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ZSTD_ldm_skipSequences(rawSeqStore,srcSize,minMatch);
          for(int _aux = 0; _aux < _len_rawSeqStore0; _aux++) {
          free(rawSeqStore[_aux].seq);
          }
          free(rawSeqStore);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
