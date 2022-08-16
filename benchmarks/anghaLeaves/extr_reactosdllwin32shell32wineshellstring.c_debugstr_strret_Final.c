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
struct TYPE_3__ {int uType; } ;
typedef  TYPE_1__ STRRET ;

/* Variables and functions */
#define  STRRET_CSTR 130 
#define  STRRET_OFFSET 129 
#define  STRRET_WSTR 128 

__attribute__((used)) static const char *debugstr_strret(STRRET *s)
{
    switch (s->uType)
    {
        case STRRET_WSTR:
            return "STRRET_WSTR";
        case STRRET_CSTR:
            return "STRRET_CSTR";
        case STRRET_OFFSET:
            return "STRRET_OFFSET";
        default:
            return "STRRET_???";
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].uType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = debugstr_strret(s);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].uType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = debugstr_strret(s);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
