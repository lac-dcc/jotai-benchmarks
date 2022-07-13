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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  void* uint16_t ;
typedef  void* int32_t ;

/* Variables and functions */
 int CAL_MARGIN ; 
 void* _cal_dvi ; 
 void* _cal_dvj ; 
 scalar_t__ _cal_dx ; 
 scalar_t__ _cal_dy ; 
 void* _cal_vi1 ; 
 void* _cal_vj1 ; 
 scalar_t__ _height ; 
 scalar_t__ _width ; 

__attribute__((used)) static void setCalibration (uint16_t vi1, uint16_t vj1, uint16_t vi2, uint16_t vj2) {
  _cal_dx = _width - 2*CAL_MARGIN;
  _cal_dy = _height - 2*CAL_MARGIN;

  _cal_vi1 = (int32_t)vi1;
  _cal_vj1 = (int32_t)vj1;
  _cal_dvi = (int32_t)vi2 - vi1;
  _cal_dvj = (int32_t)vj2 - vj1;
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
          void * vi1;
          void * vj1;
          void * vi2;
          void * vj2;
          setCalibration(vi1,vj1,vi2,vj2);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * vi1;
          void * vj1;
          void * vi2;
          void * vj2;
          setCalibration(vi1,vj1,vi2,vj2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * vi1;
          void * vj1;
          void * vi2;
          void * vj2;
          setCalibration(vi1,vj1,vi2,vj2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
