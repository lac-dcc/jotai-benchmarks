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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct odm_dm_struct {int BoardType; int SupportPlatform; int SupportInterface; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct odm_dm_struct odmpriv; } ;

/* Variables and functions */

__attribute__((used)) static bool check_condition(struct adapter *adapt, const u32  condition)
{
	struct odm_dm_struct *odm = &adapt->HalData->odmpriv;
	u32 _board = odm->BoardType;
	u32 _platform = odm->SupportPlatform;
	u32 _interface = odm->SupportInterface;
	u32 cond = condition;

	if (condition == 0xCDCDCDCD)
		return true;

	cond = condition & 0x000000FF;
	if ((_board == cond) && cond != 0x00)
		return false;

	cond = condition & 0x0000FF00;
	cond >>= 8;
	if ((_interface & cond) == 0 && cond != 0x07)
		return false;

	cond = condition & 0x00FF0000;
	cond >>= 16;
	if ((_platform & cond) == 0 && cond != 0x0F)
		return false;
	return true;
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
          const int condition = 100;
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct TYPE_2__ *) malloc(_len_adapt__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->odmpriv.BoardType = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.SupportPlatform = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.SupportInterface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_condition(adapt,condition);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
