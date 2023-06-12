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
typedef  int /*<<< orphan*/  uint ;
typedef  int u8 ;
typedef  int sint ;

/* Variables and functions */
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

__attribute__((used)) static void construct_ctr_preload(
                        u8 *ctr_preload,
                        sint a4_exists,
                        sint qc_exists,
                        u8 *mpdu,
                        u8 *pn_vector,
                        sint c,
                        uint frtype // add for CONFIG_IEEE80211W, none 11w also can use
                        )
{
    sint i = 0;
_func_enter_;		
    for (i=0; i<16; i++) ctr_preload[i] = 0x00;
    i = 0;
	
    ctr_preload[0] = 0x01;                                  /* flag */
    if (qc_exists && a4_exists) 
		ctr_preload[1] = mpdu[30] & 0x0f;   /* QoC_Control */
    if (qc_exists && !a4_exists) 
		ctr_preload[1] = mpdu[24] & 0x0f;
#ifdef CONFIG_IEEE80211W
	//802.11w management frame should set management bit(4)
	if(frtype == WIFI_MGT_TYPE)
		ctr_preload[1] |= BIT(4);
#endif //CONFIG_IEEE80211W
    for (i = 2; i < 8; i++)
        ctr_preload[i] = mpdu[i + 8];                       /* ctr_preload[2:7] = A2[0:5] = mpdu[10:15] */
    #ifdef CONSISTENT_PN_ORDER
      for (i = 8; i < 14; i++)
            ctr_preload[i] =    pn_vector[i - 8];           /* ctr_preload[8:13] = PN[0:5] */
    #else
      for (i = 8; i < 14; i++)
            ctr_preload[i] =    pn_vector[13 - i];          /* ctr_preload[8:13] = PN[5:0] */
    #endif
    ctr_preload[14] =  (unsigned char) (c / 256); /* Ctr */
    ctr_preload[15] =  (unsigned char) (c % 256);
_func_exit_;		
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
          // static_instructions_O0 : 83
          // dynamic_instructions_O0 : 364
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 90
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 50
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 50
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 50
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 91
          // ------------------------------- 
          // static_instructions_Oz : 45
          // dynamic_instructions_Oz : 191
          // ------------------------------- 

          int a4_exists = 255;
        
          int qc_exists = 255;
        
          int c = 255;
        
          int frtype = 255;
        
          int _len_ctr_preload0 = 65025;
          int * ctr_preload = (int *) malloc(_len_ctr_preload0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctr_preload0; _i0++) {
            ctr_preload[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mpdu0 = 65025;
          int * mpdu = (int *) malloc(_len_mpdu0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpdu0; _i0++) {
            mpdu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pn_vector0 = 65025;
          int * pn_vector = (int *) malloc(_len_pn_vector0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pn_vector0; _i0++) {
            pn_vector[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          construct_ctr_preload(ctr_preload,a4_exists,qc_exists,mpdu,pn_vector,c,frtype);
          free(ctr_preload);
          free(mpdu);
          free(pn_vector);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 83
          // dynamic_instructions_O0 : 364
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 90
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 50
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 50
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 50
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 91
          // ------------------------------- 
          // static_instructions_Oz : 45
          // dynamic_instructions_Oz : 191
          // ------------------------------- 

          int a4_exists = 10;
        
          int qc_exists = 10;
        
          int c = 10;
        
          int frtype = 10;
        
          int _len_ctr_preload0 = 100;
          int * ctr_preload = (int *) malloc(_len_ctr_preload0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctr_preload0; _i0++) {
            ctr_preload[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mpdu0 = 100;
          int * mpdu = (int *) malloc(_len_mpdu0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpdu0; _i0++) {
            mpdu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pn_vector0 = 100;
          int * pn_vector = (int *) malloc(_len_pn_vector0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pn_vector0; _i0++) {
            pn_vector[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          construct_ctr_preload(ctr_preload,a4_exists,qc_exists,mpdu,pn_vector,c,frtype);
          free(ctr_preload);
          free(mpdu);
          free(pn_vector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
