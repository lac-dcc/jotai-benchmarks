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

/* Type definitions */
typedef  int u32 ;
struct snd_aes_iec958 {int* status; } ;

/* Variables and functions */
 int IEC958_AES0_CON_EMPHASIS_5015 ; 
 int IEC958_AES0_NONAUDIO ; 
 int IEC958_AES0_PROFESSIONAL ; 
 int IEC958_AES0_PRO_EMPHASIS_5015 ; 
 int RME96_WCR_DOLBY ; 
 int RME96_WCR_EMP ; 
 int RME96_WCR_PRO ; 

__attribute__((used)) static u32 snd_rme96_convert_from_aes(struct snd_aes_iec958 *aes)
{
	u32 val = 0;
	val |= (aes->status[0] & IEC958_AES0_PROFESSIONAL) ? RME96_WCR_PRO : 0;
	val |= (aes->status[0] & IEC958_AES0_NONAUDIO) ? RME96_WCR_DOLBY : 0;
	if (val & RME96_WCR_PRO)
		val |= (aes->status[0] & IEC958_AES0_PRO_EMPHASIS_5015) ? RME96_WCR_EMP : 0;
	else
		val |= (aes->status[0] & IEC958_AES0_CON_EMPHASIS_5015) ? RME96_WCR_EMP : 0;
	return val;
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
          int _len_aes0 = 1;
          struct snd_aes_iec958 * aes = (struct snd_aes_iec958 *) malloc(_len_aes0*sizeof(struct snd_aes_iec958));
          for(int _i0 = 0; _i0 < _len_aes0; _i0++) {
              int _len_aes__i0__status0 = 1;
          aes[_i0].status = (int *) malloc(_len_aes__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aes__i0__status0; _j0++) {
            aes[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_rme96_convert_from_aes(aes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_aes0; _aux++) {
          free(aes[_aux].status);
          }
          free(aes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
