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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONGLONG ;
typedef  scalar_t__ ULONG ;
struct TYPE_4__ {int QuadPart; } ;
typedef  TYPE_1__* PLARGE_INTEGER ;

/* Variables and functions */
 scalar_t__ INFINITE ; 

__attribute__((used)) static inline PLARGE_INTEGER get_nt_timeout( PLARGE_INTEGER pTime, ULONG timeout )
{
    if (timeout == INFINITE) return NULL;
    pTime->QuadPart = (ULONGLONG)timeout * -10000;
    return pTime;
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
          long timeout = 100;
          int _len_pTime0 = 1;
          struct TYPE_4__ * pTime = (struct TYPE_4__ *) malloc(_len_pTime0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_pTime0; _i0++) {
            pTime[_i0].QuadPart = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = get_nt_timeout(pTime,timeout);
          printf("%d\n", (*benchRet).QuadPart);
          free(pTime);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long timeout = 10;
          int _len_pTime0 = 100;
          struct TYPE_4__ * pTime = (struct TYPE_4__ *) malloc(_len_pTime0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_pTime0; _i0++) {
            pTime[_i0].QuadPart = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = get_nt_timeout(pTime,timeout);
          printf("%d\n", (*benchRet).QuadPart);
          free(pTime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
