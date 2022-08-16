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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int /*<<< orphan*/  bt_chip_type; } ;
struct btc_coexist {TYPE_1__ board_info; } ;

/* Variables and functions */
 int /*<<< orphan*/  BTC_CHIP_CSR_BC4 ; 
 int /*<<< orphan*/  BTC_CHIP_CSR_BC8 ; 
 int /*<<< orphan*/  BTC_CHIP_RTL8723A ; 
 int /*<<< orphan*/  BTC_CHIP_RTL8723B ; 
 int /*<<< orphan*/  BTC_CHIP_RTL8821 ; 
 int /*<<< orphan*/  BTC_CHIP_UNDEF ; 
#define  BT_2WIRE 136 
#define  BT_ACCEL 135 
#define  BT_CSR_BC4 134 
#define  BT_CSR_BC8 133 
#define  BT_ISSC_3WIRE 132 
#define  BT_RTL8723A 131 
#define  BT_RTL8723B 130 
#define  BT_RTL8756 129 
#define  BT_RTL8821A 128 

void exhalbtc_set_chip_type(struct btc_coexist *btcoexist, u8 chip_type)
{
	switch (chip_type) {
	default:
	case BT_2WIRE:
	case BT_ISSC_3WIRE:
	case BT_ACCEL:
	case BT_RTL8756:
		btcoexist->board_info.bt_chip_type = BTC_CHIP_UNDEF;
		break;
	case BT_CSR_BC4:
		btcoexist->board_info.bt_chip_type = BTC_CHIP_CSR_BC4;
		break;
	case BT_CSR_BC8:
		btcoexist->board_info.bt_chip_type = BTC_CHIP_CSR_BC8;
		break;
	case BT_RTL8723A:
		btcoexist->board_info.bt_chip_type = BTC_CHIP_RTL8723A;
		break;
	case BT_RTL8821A:
		btcoexist->board_info.bt_chip_type = BTC_CHIP_RTL8821;
		break;
	case BT_RTL8723B:
		btcoexist->board_info.bt_chip_type = BTC_CHIP_RTL8723B;
		break;
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
          int chip_type = 100;
          int _len_btcoexist0 = 1;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].board_info.bt_chip_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exhalbtc_set_chip_type(btcoexist,chip_type);
          free(btcoexist);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int chip_type = 10;
          int _len_btcoexist0 = 100;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].board_info.bt_chip_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exhalbtc_set_chip_type(btcoexist,chip_type);
          free(btcoexist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
