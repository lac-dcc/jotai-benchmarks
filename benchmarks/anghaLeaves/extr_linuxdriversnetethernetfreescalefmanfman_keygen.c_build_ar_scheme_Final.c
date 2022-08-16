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
typedef  scalar_t__ u8 ;
typedef  int u32 ;

/* Variables and functions */
 int DUMMY_PORT_ID ; 
 int FM_KG_KGAR_GO ; 
 int FM_KG_KGAR_NUM_SHIFT ; 
 scalar_t__ FM_KG_KGAR_READ ; 
 int FM_KG_KGAR_SCM_WSEL_UPDATE_CNT ; 
 int FM_KG_KGAR_SEL_SCHEME_ENTRY ; 
 scalar_t__ FM_KG_KGAR_WRITE ; 

__attribute__((used)) static u32 build_ar_scheme(u8 scheme_id, bool update_counter, bool write)
{
	u32 rw = (u32)(write ? FM_KG_KGAR_WRITE : FM_KG_KGAR_READ);

	return (u32)(FM_KG_KGAR_GO |
			rw |
			FM_KG_KGAR_SEL_SCHEME_ENTRY |
			DUMMY_PORT_ID |
			((u32)scheme_id << FM_KG_KGAR_NUM_SHIFT) |
			(update_counter ? FM_KG_KGAR_SCM_WSEL_UPDATE_CNT : 0));
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
          long scheme_id = 100;
          int update_counter = 100;
          int write = 100;
          int benchRet = build_ar_scheme(scheme_id,update_counter,write);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long scheme_id = 255;
          int update_counter = 255;
          int write = 255;
          int benchRet = build_ar_scheme(scheme_id,update_counter,write);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long scheme_id = 10;
          int update_counter = 10;
          int write = 10;
          int benchRet = build_ar_scheme(scheme_id,update_counter,write);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
