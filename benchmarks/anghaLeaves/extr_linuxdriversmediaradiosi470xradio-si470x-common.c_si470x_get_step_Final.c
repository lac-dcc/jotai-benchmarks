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
struct si470x_device {int* registers; } ;

/* Variables and functions */
 size_t SYSCONFIG2 ; 
 int SYSCONFIG2_SPACE ; 

__attribute__((used)) static unsigned int si470x_get_step(struct si470x_device *radio)
{
	/* Spacing (kHz) */
	switch ((radio->registers[SYSCONFIG2] & SYSCONFIG2_SPACE) >> 4) {
	/* 0: 200 kHz (USA, Australia) */
	case 0:
		return 200 * 16;
	/* 1: 100 kHz (Europe, Japan) */
	case 1:
		return 100 * 16;
	/* 2:  50 kHz */
	default:
		return 50 * 16;
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
          int _len_radio0 = 1;
          struct si470x_device * radio = (struct si470x_device *) malloc(_len_radio0*sizeof(struct si470x_device));
          for(int _i0 = 0; _i0 < _len_radio0; _i0++) {
              int _len_radio__i0__registers0 = 1;
          radio[_i0].registers = (int *) malloc(_len_radio__i0__registers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_radio__i0__registers0; _j0++) {
            radio[_i0].registers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = si470x_get_step(radio);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_radio0; _aux++) {
          free(radio[_aux].registers);
          }
          free(radio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
