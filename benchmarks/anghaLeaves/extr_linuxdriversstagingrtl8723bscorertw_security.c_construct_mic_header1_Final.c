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
typedef  scalar_t__ uint ;
typedef  int u8 ;
typedef  int sint ;

/* Variables and functions */
 scalar_t__ WIFI_MGT_TYPE ; 

__attribute__((used)) static void construct_mic_header1(
	u8 *mic_header1,
	sint header_length,
	u8 *mpdu,
	uint frtype/*  add for CONFIG_IEEE80211W, none 11w also can use */
)
{
		mic_header1[0] = (u8)((header_length - 2) / 256);
		mic_header1[1] = (u8)((header_length - 2) % 256);

		/* 802.11w management frame don't AND subtype bits 4, 5, 6 of frame control field */
		if (frtype == WIFI_MGT_TYPE)
			mic_header1[2] = mpdu[0];
		else
			mic_header1[2] = mpdu[0] & 0xcf;    /* Mute CF poll & CF ack bits */

		mic_header1[3] = mpdu[1] & 0xc7;    /* Mute retry, more data and pwr mgt bits */
		mic_header1[4] = mpdu[4];       /* A1 */
		mic_header1[5] = mpdu[5];
		mic_header1[6] = mpdu[6];
		mic_header1[7] = mpdu[7];
		mic_header1[8] = mpdu[8];
		mic_header1[9] = mpdu[9];
		mic_header1[10] = mpdu[10];     /* A2 */
		mic_header1[11] = mpdu[11];
		mic_header1[12] = mpdu[12];
		mic_header1[13] = mpdu[13];
		mic_header1[14] = mpdu[14];
		mic_header1[15] = mpdu[15];
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
          // static_instructions_O0 : 84
          // dynamic_instructions_O0 : 84
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 49
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 49
          // ------------------------------- 
          // static_instructions_Os : 49
          // dynamic_instructions_Os : 49
          // ------------------------------- 
          // static_instructions_Oz : 44
          // dynamic_instructions_Oz : 44
          // ------------------------------- 

          int header_length = 255;
        
          long frtype = 255;
        
          int _len_mic_header10 = 65025;
          int * mic_header1 = (int *) malloc(_len_mic_header10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mic_header10; _i0++) {
            mic_header1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mpdu0 = 65025;
          int * mpdu = (int *) malloc(_len_mpdu0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpdu0; _i0++) {
            mpdu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          construct_mic_header1(mic_header1,header_length,mpdu,frtype);
          free(mic_header1);
          free(mpdu);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 84
          // dynamic_instructions_O0 : 84
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 49
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 49
          // ------------------------------- 
          // static_instructions_Os : 49
          // dynamic_instructions_Os : 49
          // ------------------------------- 
          // static_instructions_Oz : 44
          // dynamic_instructions_Oz : 44
          // ------------------------------- 

          int header_length = 10;
        
          long frtype = 10;
        
          int _len_mic_header10 = 100;
          int * mic_header1 = (int *) malloc(_len_mic_header10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mic_header10; _i0++) {
            mic_header1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mpdu0 = 100;
          int * mpdu = (int *) malloc(_len_mpdu0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpdu0; _i0++) {
            mpdu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          construct_mic_header1(mic_header1,header_length,mpdu,frtype);
          free(mic_header1);
          free(mpdu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
