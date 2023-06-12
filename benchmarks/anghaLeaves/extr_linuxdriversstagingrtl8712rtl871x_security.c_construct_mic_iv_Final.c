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
typedef  int uint ;
typedef  int u8 ;
typedef  int sint ;

/* Variables and functions */

__attribute__((used)) static void construct_mic_iv(u8 *mic_iv, sint qc_exists, sint a4_exists,
			     u8 *mpdu, uint payload_length, u8 *pn_vector)
{
	sint i;

	mic_iv[0] = 0x59;
	if (qc_exists && a4_exists)
		mic_iv[1] = mpdu[30] & 0x0f;    /* QoS_TC           */
	if (qc_exists && !a4_exists)
		mic_iv[1] = mpdu[24] & 0x0f;   /* mute bits 7-4    */
	if (!qc_exists)
		mic_iv[1] = 0x00;
	for (i = 2; i < 8; i++)
		mic_iv[i] = mpdu[i + 8];
	for (i = 8; i < 14; i++)
		mic_iv[i] = pn_vector[13 - i]; /* mic_iv[8:13] = PN[5:0] */
	mic_iv[14] = (unsigned char) (payload_length / 256);
	mic_iv[15] = (unsigned char) (payload_length % 256);
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
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 216
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 90
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
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 90
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 112
          // ------------------------------- 

          int qc_exists = 255;
        
          int a4_exists = 255;
        
          int payload_length = 255;
        
          int _len_mic_iv0 = 65025;
          int * mic_iv = (int *) malloc(_len_mic_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mic_iv0; _i0++) {
            mic_iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
        
          construct_mic_iv(mic_iv,qc_exists,a4_exists,mpdu,payload_length,pn_vector);
          free(mic_iv);
          free(mpdu);
          free(pn_vector);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 216
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 90
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
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 90
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 112
          // ------------------------------- 

          int qc_exists = 10;
        
          int a4_exists = 10;
        
          int payload_length = 10;
        
          int _len_mic_iv0 = 100;
          int * mic_iv = (int *) malloc(_len_mic_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mic_iv0; _i0++) {
            mic_iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
        
          construct_mic_iv(mic_iv,qc_exists,a4_exists,mpdu,payload_length,pn_vector);
          free(mic_iv);
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
