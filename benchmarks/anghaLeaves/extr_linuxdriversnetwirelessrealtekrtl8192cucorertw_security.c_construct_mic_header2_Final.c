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
typedef  int u8 ;
typedef  int sint ;

/* Variables and functions */
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

__attribute__((used)) static void construct_mic_header2(
                u8 *mic_header2,
                u8 *mpdu,
                sint a4_exists,
                sint qc_exists
                )
{
    sint i;
_func_enter_;	
    for (i = 0; i<16; i++) mic_header2[i]=0x00;

    mic_header2[0] = mpdu[16];    /* A3 */
    mic_header2[1] = mpdu[17];
    mic_header2[2] = mpdu[18];
    mic_header2[3] = mpdu[19];
    mic_header2[4] = mpdu[20];
    mic_header2[5] = mpdu[21];

    //mic_header2[6] = mpdu[22] & 0xf0;   /* SC */
    mic_header2[6] = 0x00;
    mic_header2[7] = 0x00; /* mpdu[23]; */


    if (!qc_exists && a4_exists)
    {
        for (i=0;i<6;i++) mic_header2[8+i] = mpdu[24+i];   /* A4 */

    }

    if (qc_exists && !a4_exists)
    {
        mic_header2[8] = mpdu[24] & 0x0f; /* mute bits 15 - 4 */
        mic_header2[9] = mpdu[25] & 0x00;
    }

    if (qc_exists && a4_exists)
    {
        for (i=0;i<6;i++) mic_header2[8+i] = mpdu[24+i];   /* A4 */

        mic_header2[14] = mpdu[30] & 0x0f;
        mic_header2[15] = mpdu[31] & 0x00;
    }

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
          int a4_exists = 255;
        
          int qc_exists = 255;
        
          int _len_mic_header20 = 65025;
          int * mic_header2 = (int *) malloc(_len_mic_header20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mic_header20; _i0++) {
            mic_header2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mpdu0 = 65025;
          int * mpdu = (int *) malloc(_len_mpdu0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpdu0; _i0++) {
            mpdu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          construct_mic_header2(mic_header2,mpdu,a4_exists,qc_exists);
          free(mic_header2);
          free(mpdu);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int a4_exists = 10;
        
          int qc_exists = 10;
        
          int _len_mic_header20 = 100;
          int * mic_header2 = (int *) malloc(_len_mic_header20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mic_header20; _i0++) {
            mic_header2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mpdu0 = 100;
          int * mpdu = (int *) malloc(_len_mpdu0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpdu0; _i0++) {
            mpdu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          construct_mic_header2(mic_header2,mpdu,a4_exists,qc_exists);
          free(mic_header2);
          free(mpdu);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
