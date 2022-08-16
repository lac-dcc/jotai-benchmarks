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

/* Type definitions */
typedef  int u16 ;
struct bq27xxx_device_info {int opts; } ;

/* Variables and functions */
 int BQ27XXX_FLAG_OT ; 
 int BQ27XXX_FLAG_OTC ; 
 int BQ27XXX_FLAG_OTD ; 
 int BQ27XXX_O_OTDC ; 
 int BQ27XXX_O_UTOT ; 

__attribute__((used)) static bool bq27xxx_battery_overtemp(struct bq27xxx_device_info *di, u16 flags)
{
	if (di->opts & BQ27XXX_O_OTDC)
		return flags & (BQ27XXX_FLAG_OTC | BQ27XXX_FLAG_OTD);
        if (di->opts & BQ27XXX_O_UTOT)
		return flags & BQ27XXX_FLAG_OT;

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
          int flags = 100;
          int _len_di0 = 1;
          struct bq27xxx_device_info * di = (struct bq27xxx_device_info *) malloc(_len_di0*sizeof(struct bq27xxx_device_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].opts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq27xxx_battery_overtemp(di,flags);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flags = 10;
          int _len_di0 = 100;
          struct bq27xxx_device_info * di = (struct bq27xxx_device_info *) malloc(_len_di0*sizeof(struct bq27xxx_device_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].opts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq27xxx_battery_overtemp(di,flags);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
