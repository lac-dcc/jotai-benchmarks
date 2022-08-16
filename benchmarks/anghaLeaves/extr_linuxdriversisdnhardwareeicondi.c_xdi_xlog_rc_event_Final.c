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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  byte ;

/* Variables and functions */

__attribute__((used)) static void xdi_xlog_rc_event(byte Adapter,
			      byte Id, byte Ch, byte Rc, byte cb, byte type) {
#if defined(XDI_USE_XLOG)
	word LogInfo[4];
	PUT_WORD(&LogInfo[0], ((word)Adapter | (word)(xdi_xlog_sec++ << 8)));
	PUT_WORD(&LogInfo[1], ((word)Id | (word)(Ch << 8)));
	PUT_WORD(&LogInfo[2], ((word)Rc | (word)(type << 8)));
	PUT_WORD(&LogInfo[3], cb);
	xdi_xlog((byte *)&LogInfo[0], 221, sizeof(LogInfo));
#endif
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
          int Adapter = 100;
          int Id = 100;
          int Ch = 100;
          int Rc = 100;
          int cb = 100;
          int type = 100;
          xdi_xlog_rc_event(Adapter,Id,Ch,Rc,cb,type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int Adapter = 255;
          int Id = 255;
          int Ch = 255;
          int Rc = 255;
          int cb = 255;
          int type = 255;
          xdi_xlog_rc_event(Adapter,Id,Ch,Rc,cb,type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Adapter = 10;
          int Id = 10;
          int Ch = 10;
          int Rc = 10;
          int cb = 10;
          int type = 10;
          xdi_xlog_rc_event(Adapter,Id,Ch,Rc,cb,type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
