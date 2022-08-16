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
typedef  enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;
typedef  enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;

/* Variables and functions */
 int AMIXER_LINEIN ; 
 int AMIXER_LINEIN_C ; 
 int AMIXER_MASTER_F ; 
 int AMIXER_MASTER_F_C ; 
 int AMIXER_MIC ; 
 int AMIXER_MIC_C ; 
 int AMIXER_PCM_F ; 
 int AMIXER_PCM_F_C ; 
 int AMIXER_SPDIFI ; 
 int AMIXER_SPDIFI_C ; 
 int AMIXER_SPDIFO ; 
 int AMIXER_WAVE_C ; 
 int AMIXER_WAVE_F ; 
 int AMIXER_WAVE_R ; 
 int AMIXER_WAVE_S ; 
#define  MIXER_LINEIN_C 146 
#define  MIXER_LINEIN_C_S 145 
#define  MIXER_LINEIN_P 144 
#define  MIXER_MASTER_C 143 
#define  MIXER_MASTER_P 142 
#define  MIXER_MIC_C 141 
#define  MIXER_MIC_C_S 140 
#define  MIXER_MIC_P 139 
#define  MIXER_PCM_C 138 
#define  MIXER_PCM_C_S 137 
#define  MIXER_PCM_P 136 
#define  MIXER_SPDIFI_C 135 
#define  MIXER_SPDIFI_C_S 134 
#define  MIXER_SPDIFI_P 133 
#define  MIXER_SPDIFO_P 132 
#define  MIXER_WAVEC_P 131 
#define  MIXER_WAVEF_P 130 
#define  MIXER_WAVER_P 129 
#define  MIXER_WAVES_P 128 
 int NUM_CT_AMIXERS ; 

__attribute__((used)) static enum CT_AMIXER_CTL get_amixer_index(enum CTALSA_MIXER_CTL alsa_index)
{
	switch (alsa_index) {
	case MIXER_MASTER_P:	return AMIXER_MASTER_F;
	case MIXER_MASTER_C:	return AMIXER_MASTER_F_C;
	case MIXER_PCM_P:	return AMIXER_PCM_F;
	case MIXER_PCM_C:
	case MIXER_PCM_C_S:	return AMIXER_PCM_F_C;
	case MIXER_LINEIN_P:	return AMIXER_LINEIN;
	case MIXER_LINEIN_C:
	case MIXER_LINEIN_C_S:	return AMIXER_LINEIN_C;
	case MIXER_MIC_P:	return AMIXER_MIC;
	case MIXER_MIC_C:
	case MIXER_MIC_C_S:	return AMIXER_MIC_C;
	case MIXER_SPDIFI_P:	return AMIXER_SPDIFI;
	case MIXER_SPDIFI_C:
	case MIXER_SPDIFI_C_S:	return AMIXER_SPDIFI_C;
	case MIXER_SPDIFO_P:	return AMIXER_SPDIFO;
	case MIXER_WAVEF_P:	return AMIXER_WAVE_F;
	case MIXER_WAVES_P:	return AMIXER_WAVE_S;
	case MIXER_WAVEC_P:	return AMIXER_WAVE_C;
	case MIXER_WAVER_P:	return AMIXER_WAVE_R;
	default:		return NUM_CT_AMIXERS;
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
          enum CTALSA_MIXER_CTL alsa_index = 0;
          enum CT_AMIXER_CTL benchRet = get_amixer_index(alsa_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
