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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int m_status; } ;
struct TYPE_6__ {TYPE_1__ m_respInfo; } ;
struct TYPE_7__ {TYPE_2__ m_respHeader; } ;
typedef  TYPE_3__ LSAPI_Request ;

/* Variables and functions */

__attribute__((used)) static inline int LSAPI_SetRespStatus_r( LSAPI_Request * pReq, int code )
{
    if ( !pReq )
        return -1;
    pReq->m_respHeader.m_respInfo.m_status = code;
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
          int code = 100;
          int _len_pReq0 = 1;
          struct TYPE_7__ * pReq = (struct TYPE_7__ *) malloc(_len_pReq0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
            pReq[_i0].m_respHeader.m_respInfo.m_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LSAPI_SetRespStatus_r(pReq,code);
          printf("%d\n", benchRet); 
          free(pReq);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int code = 10;
          int _len_pReq0 = 100;
          struct TYPE_7__ * pReq = (struct TYPE_7__ *) malloc(_len_pReq0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
            pReq[_i0].m_respHeader.m_respInfo.m_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LSAPI_SetRespStatus_r(pReq,code);
          printf("%d\n", benchRet); 
          free(pReq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
