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

/* Variables and functions */
#define  AMIXER_LINEIN 132 
 int AMIXER_LINEIN_C ; 
#define  AMIXER_MASTER_F 131 
 int AMIXER_MASTER_F_C ; 
#define  AMIXER_MIC 130 
 int AMIXER_MIC_C ; 
#define  AMIXER_PCM_F 129 
 int AMIXER_PCM_F_C ; 
#define  AMIXER_SPDIFI 128 
 int AMIXER_SPDIFI_C ; 
 int NUM_CT_AMIXERS ; 

__attribute__((used)) static enum CT_AMIXER_CTL get_recording_amixer(enum CT_AMIXER_CTL index)
{
	switch (index) {
	case AMIXER_MASTER_F:	return AMIXER_MASTER_F_C;
	case AMIXER_PCM_F:	return AMIXER_PCM_F_C;
	case AMIXER_SPDIFI:	return AMIXER_SPDIFI_C;
	case AMIXER_LINEIN:	return AMIXER_LINEIN_C;
	case AMIXER_MIC:	return AMIXER_MIC_C;
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
          enum CT_AMIXER_CTL index = 0;
          enum CT_AMIXER_CTL benchRet = get_recording_amixer(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
