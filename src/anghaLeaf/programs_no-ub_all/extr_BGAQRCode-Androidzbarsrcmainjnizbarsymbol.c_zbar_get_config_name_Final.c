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
       0            big-arr\n\
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
typedef  int zbar_config_t ;

/* Variables and functions */
#define  ZBAR_CFG_ADD_CHECK 137 
#define  ZBAR_CFG_ASCII 136 
#define  ZBAR_CFG_EMIT_CHECK 135 
#define  ZBAR_CFG_ENABLE 134 
#define  ZBAR_CFG_MAX_LEN 133 
#define  ZBAR_CFG_MIN_LEN 132 
#define  ZBAR_CFG_POSITION 131 
#define  ZBAR_CFG_UNCERTAINTY 130 
#define  ZBAR_CFG_X_DENSITY 129 
#define  ZBAR_CFG_Y_DENSITY 128 

const char *zbar_get_config_name (zbar_config_t cfg)
{
    switch(cfg) {
    case ZBAR_CFG_ENABLE: return("ENABLE");
    case ZBAR_CFG_ADD_CHECK: return("ADD_CHECK");
    case ZBAR_CFG_EMIT_CHECK: return("EMIT_CHECK");
    case ZBAR_CFG_ASCII: return("ASCII");
    case ZBAR_CFG_MIN_LEN: return("MIN_LEN");
    case ZBAR_CFG_MAX_LEN: return("MAX_LEN");
    case ZBAR_CFG_UNCERTAINTY: return("UNCERTAINTY");
    case ZBAR_CFG_POSITION: return("POSITION");
    case ZBAR_CFG_X_DENSITY: return("X_DENSITY");
    case ZBAR_CFG_Y_DENSITY: return("Y_DENSITY");
    default: return("");
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

    // big-arr
    case 0:
    {
          int cfg = 255;
          const char * benchRet = zbar_get_config_name(cfg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
