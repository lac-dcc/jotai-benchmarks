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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* CombinedRes_Type; void* CombinedRes; void* ProgressRes; void* ReadRes; void* DecodeRes; void* DecodingTruncated; void* DataAfterEnd; void* NumBlocks_Defined; void* NumStreams_Defined; void* UnpackSize_Defined; scalar_t__ NumBlocks; scalar_t__ NumStreams; scalar_t__ OutSize; scalar_t__ InSize; } ;
typedef  TYPE_1__ CXzStatInfo ;

/* Variables and functions */
 void* False ; 
 void* SZ_OK ; 

void XzStatInfo_Clear(CXzStatInfo *p)
{
  p->InSize = 0;
  p->OutSize = 0;
  
  p->NumStreams = 0;
  p->NumBlocks = 0;
  
  p->UnpackSize_Defined = False;
  
  p->NumStreams_Defined = False;
  p->NumBlocks_Defined = False;
  
  // p->IsArc = False;
  // p->UnexpectedEnd = False;
  // p->Unsupported = False;
  // p->HeadersError = False;
  // p->DataError = False;
  // p->CrcError = False;

  p->DataAfterEnd = False;
  p->DecodingTruncated = False;
  
  p->DecodeRes = SZ_OK;
  p->ReadRes = SZ_OK;
  p->ProgressRes = SZ_OK;

  p->CombinedRes = SZ_OK;
  p->CombinedRes_Type = SZ_OK;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p->NumBlocks = ((-2 * (next_i()%2)) + 1) * next_i();
        p->NumStreams = ((-2 * (next_i()%2)) + 1) * next_i();
        p->OutSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p->InSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XzStatInfo_Clear(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
