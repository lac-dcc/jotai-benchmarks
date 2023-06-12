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
       3            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_3__ {int level; int /*<<< orphan*/  updated; } ;
struct TYPE_4__ {TYPE_1__ qual; } ;
struct atmel_private {int firmware_type; TYPE_2__ wstats; } ;

/* Variables and functions */
#define  ATMEL_FW_TYPE_502E 128 
 int /*<<< orphan*/  IW_QUAL_LEVEL_INVALID ; 
 int /*<<< orphan*/  IW_QUAL_LEVEL_UPDATED ; 

__attribute__((used)) static void smooth_rssi(struct atmel_private *priv, u8 rssi)
{
	u8 old = priv->wstats.qual.level;
	u8 max_rssi = 42; /* 502-rmfd-revd max by experiment, default for now */

	switch (priv->firmware_type) {
	case ATMEL_FW_TYPE_502E:
		max_rssi = 63; /* 502-rmfd-reve max by experiment */
		break;
	default:
		break;
	}

	rssi = rssi * 100 / max_rssi;
	if ((rssi + old) % 2)
		priv->wstats.qual.level = (rssi + old) / 2 + 1;
	else
		priv->wstats.qual.level = (rssi + old) / 2;
	priv->wstats.qual.updated |= IW_QUAL_LEVEL_UPDATED;
	priv->wstats.qual.updated &= ~IW_QUAL_LEVEL_INVALID;
}

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
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int rssi = 100;
        
          int _len_priv0 = 1;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].firmware_type = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          smooth_rssi(priv,rssi);
          free(priv);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int rssi = 255;
        
          int _len_priv0 = 65025;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].firmware_type = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          smooth_rssi(priv,rssi);
          free(priv);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int rssi = 10;
        
          int _len_priv0 = 100;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].firmware_type = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          smooth_rssi(priv,rssi);
          free(priv);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int rssi = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_priv0 = 1;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].firmware_type = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          smooth_rssi(priv,rssi);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
