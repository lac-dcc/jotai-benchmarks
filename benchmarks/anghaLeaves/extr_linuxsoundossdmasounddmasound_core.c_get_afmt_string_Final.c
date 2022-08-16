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
#define  AFMT_A_LAW 135 
#define  AFMT_MU_LAW 134 
#define  AFMT_S16_BE 133 
#define  AFMT_S16_LE 132 
#define  AFMT_S8 131 
#define  AFMT_U16_BE 130 
#define  AFMT_U16_LE 129 
#define  AFMT_U8 128 

__attribute__((used)) static char *get_afmt_string(int afmt)
{
        switch(afmt) {
            case AFMT_MU_LAW:
                return "mu-law";
                break;
            case AFMT_A_LAW:
                return "A-law";
                break;
            case AFMT_U8:
                return "unsigned 8 bit";
                break;
            case AFMT_S8:
                return "signed 8 bit";
                break;
            case AFMT_S16_BE:
                return "signed 16 bit BE";
                break;
            case AFMT_U16_BE:
                return "unsigned 16 bit BE";
                break;
            case AFMT_S16_LE:
                return "signed 16 bit LE";
                break;
            case AFMT_U16_LE:
                return "unsigned 16 bit LE";
                break;
	    case 0:
		return "format not set" ;
		break ;
            default:
                break ;
        }
        return "ERROR: Unsupported AFMT_XXXX code" ;
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
          int afmt = 100;
          char * benchRet = get_afmt_string(afmt);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int afmt = 255;
          char * benchRet = get_afmt_string(afmt);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int afmt = 10;
          char * benchRet = get_afmt_string(afmt);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
