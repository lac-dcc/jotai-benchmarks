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
       0            big-arr\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ptr ;
struct TYPE_4__ {scalar_t__ fastMode; scalar_t__ tableLog; } ;
struct TYPE_3__ {scalar_t__ nbBits; int /*<<< orphan*/  symbol; scalar_t__ newState; } ;
typedef  TYPE_1__ FSE_decode_t ;
typedef  TYPE_2__ FSE_DTableHeader ;
typedef  int /*<<< orphan*/  FSE_DTable ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */

__attribute__((used)) static size_t FSE_buildDTable_rle (FSE_DTable* dt, BYTE symbolValue)
{
    void* ptr = dt;
    FSE_DTableHeader* const DTableH = (FSE_DTableHeader*)ptr;
    FSE_decode_t* const cell = (FSE_decode_t*)(ptr) + 1;   /* because dt is unsigned */

    DTableH->tableLog = 0;
    DTableH->fastMode = 0;

    cell->newState = 0;
    cell->symbol = symbolValue;
    cell->nbBits = 0;

    return 0;
}

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
          int symbolValue = 255;
        
          int _len_dt0 = 65025;
          int * dt = (int *) malloc(_len_dt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dt0; _i0++) {
            dt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = FSE_buildDTable_rle(dt,symbolValue);
          printf("%lu\n", benchRet); 
          free(dt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int symbolValue = 10;
        
          int _len_dt0 = 100;
          int * dt = (int *) malloc(_len_dt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dt0; _i0++) {
            dt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = FSE_buildDTable_rle(dt,symbolValue);
          printf("%lu\n", benchRet); 
          free(dt);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
