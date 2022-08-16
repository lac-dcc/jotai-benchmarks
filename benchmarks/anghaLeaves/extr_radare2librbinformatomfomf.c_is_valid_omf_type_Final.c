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
typedef  scalar_t__ ut8 ;

/* Variables and functions */
 scalar_t__ OMF_ALIAS ; 
 scalar_t__ OMF_BAKPAT ; 
 scalar_t__ OMF_BAKPAT32 ; 
 scalar_t__ OMF_CEXTDEF ; 
 scalar_t__ OMF_COMDAT ; 
 scalar_t__ OMF_COMDAT32 ; 
 scalar_t__ OMF_COMDEF ; 
 scalar_t__ OMF_COMENT ; 
 scalar_t__ OMF_EXTDEF ; 
 scalar_t__ OMF_FIXUPP ; 
 scalar_t__ OMF_FIXUPP32 ; 
 scalar_t__ OMF_GRPDEF ; 
 scalar_t__ OMF_LCOMDEF ; 
 scalar_t__ OMF_LEDATA ; 
 scalar_t__ OMF_LEDATA32 ; 
 scalar_t__ OMF_LEXTDEF ; 
 scalar_t__ OMF_LHEADR ; 
 scalar_t__ OMF_LIDATA ; 
 scalar_t__ OMF_LIDATA32 ; 
 scalar_t__ OMF_LINNUM ; 
 scalar_t__ OMF_LINNUM32 ; 
 scalar_t__ OMF_LINSYM ; 
 scalar_t__ OMF_LINSYM32 ; 
 scalar_t__ OMF_LLNAMES ; 
 scalar_t__ OMF_LNAMES ; 
 scalar_t__ OMF_LPUBDEF ; 
 scalar_t__ OMF_LPUBDEF32 ; 
 scalar_t__ OMF_MODEND ; 
 scalar_t__ OMF_MODEND32 ; 
 scalar_t__ OMF_NBKPAT ; 
 scalar_t__ OMF_NBKPAT32 ; 
 scalar_t__ OMF_PUBDEF ; 
 scalar_t__ OMF_PUBDEF32 ; 
 scalar_t__ OMF_SEGDEF ; 
 scalar_t__ OMF_SEGDEF32 ; 
 scalar_t__ OMF_THEADR ; 
 scalar_t__ OMF_VENDEXT ; 
 scalar_t__ OMF_VERNUM ; 

__attribute__((used)) static int is_valid_omf_type(ut8 type) {
	int ct = 0;
	ut8 types[] = {
		OMF_THEADR, OMF_LHEADR, OMF_COMENT, OMF_MODEND, OMF_MODEND32,
		OMF_EXTDEF, OMF_PUBDEF, OMF_PUBDEF32, OMF_LINNUM,
		OMF_LINNUM32, OMF_LNAMES, OMF_LNAMES, OMF_SEGDEF,
		OMF_SEGDEF32, OMF_GRPDEF, OMF_FIXUPP, OMF_FIXUPP32,
		OMF_LEDATA, OMF_LEDATA32, OMF_LIDATA, OMF_LIDATA32,
		OMF_COMDEF, OMF_BAKPAT, OMF_BAKPAT32, OMF_LEXTDEF,
		OMF_LPUBDEF, OMF_LPUBDEF32, OMF_LCOMDEF, OMF_CEXTDEF,
		OMF_COMDAT, OMF_COMDAT32, OMF_LINSYM, OMF_LINSYM32,
		OMF_ALIAS, OMF_NBKPAT, OMF_NBKPAT32, OMF_LLNAMES, OMF_VERNUM,
		OMF_VENDEXT, 0};
	for (; types[ct]; ct++) {
		if (type == types[ct]) {
			return true;
		}
	}
	// eprintf ("Invalid record type\n");
	return false;
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
          long type = 100;
          int benchRet = is_valid_omf_type(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
          int benchRet = is_valid_omf_type(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
          int benchRet = is_valid_omf_type(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
