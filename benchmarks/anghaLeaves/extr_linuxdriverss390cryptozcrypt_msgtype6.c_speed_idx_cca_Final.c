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

/* Variables and functions */
 int HIGH ; 
 int LOW ; 
 int MEDIUM ; 

int speed_idx_cca(int req_type)
{
	switch (req_type) {
	case 0x4142:
	case 0x4149:
	case 0x414D:
	case 0x4341:
	case 0x4344:
	case 0x4354:
	case 0x4358:
	case 0x444B:
	case 0x4558:
	case 0x4643:
	case 0x4651:
	case 0x4C47:
	case 0x4C4B:
	case 0x4C51:
	case 0x4F48:
	case 0x504F:
	case 0x5053:
	case 0x5058:
	case 0x5343:
	case 0x5344:
	case 0x5345:
	case 0x5350:
		return LOW;
	case 0x414B:
	case 0x4345:
	case 0x4349:
	case 0x434D:
	case 0x4847:
	case 0x4849:
	case 0x484D:
	case 0x4850:
	case 0x4851:
	case 0x4954:
	case 0x4958:
	case 0x4B43:
	case 0x4B44:
	case 0x4B45:
	case 0x4B47:
	case 0x4B48:
	case 0x4B49:
	case 0x4B4E:
	case 0x4B50:
	case 0x4B52:
	case 0x4B54:
	case 0x4B58:
	case 0x4D50:
	case 0x4D53:
	case 0x4D56:
	case 0x4D58:
	case 0x5044:
	case 0x5045:
	case 0x5046:
	case 0x5047:
	case 0x5049:
	case 0x504B:
	case 0x504D:
	case 0x5254:
	case 0x5347:
	case 0x5349:
	case 0x534B:
	case 0x534D:
	case 0x5356:
	case 0x5358:
	case 0x5443:
	case 0x544B:
	case 0x5647:
		return HIGH;
	default:
		return MEDIUM;
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
          int req_type = 100;
          int benchRet = speed_idx_cca(req_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int req_type = 255;
          int benchRet = speed_idx_cca(req_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int req_type = 10;
          int benchRet = speed_idx_cca(req_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
