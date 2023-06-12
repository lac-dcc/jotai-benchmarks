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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct mt76x2_dev {int txpower_cur; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt76x2_dev* priv; } ;

/* Variables and functions */

__attribute__((used)) static int
mt76x2_get_txpower(struct ieee80211_hw *hw, struct ieee80211_vif *vif, int *dbm)
{
	struct mt76x2_dev *dev = hw->priv;

	*dbm = dev->txpower_cur / 2;

	/* convert from per-chain power to combined output on 2x2 devices */
	*dbm += 3;

	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct mt76x2_dev *) malloc(_len_hw__i0__priv0*sizeof(struct mt76x2_dev));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
              hw[_i0].priv->txpower_cur = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_vif0 = 65025;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
              vif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dbm0 = 65025;
          int * dbm = (int *) malloc(_len_dbm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbm0; _i0++) {
            dbm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mt76x2_get_txpower(hw,vif,dbm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(vif);
          free(dbm);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct mt76x2_dev *) malloc(_len_hw__i0__priv0*sizeof(struct mt76x2_dev));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
              hw[_i0].priv->txpower_cur = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_vif0 = 100;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
              vif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dbm0 = 100;
          int * dbm = (int *) malloc(_len_dbm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbm0; _i0++) {
            dbm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mt76x2_get_txpower(hw,vif,dbm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(vif);
          free(dbm);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct mt76x2_dev *) malloc(_len_hw__i0__priv0*sizeof(struct mt76x2_dev));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
              hw[_i0].priv->txpower_cur = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
              vif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dbm0 = 1;
          int * dbm = (int *) malloc(_len_dbm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbm0; _i0++) {
            dbm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mt76x2_get_txpower(hw,vif,dbm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(vif);
          free(dbm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
