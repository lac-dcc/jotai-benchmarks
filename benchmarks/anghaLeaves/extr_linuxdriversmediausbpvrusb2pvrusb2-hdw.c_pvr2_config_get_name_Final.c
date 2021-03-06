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
typedef  enum pvr2_config { ____Placeholder_pvr2_config } pvr2_config ;

/* Variables and functions */
#define  pvr2_config_empty 132 
#define  pvr2_config_mpeg 131 
#define  pvr2_config_pcm 130 
#define  pvr2_config_rawvideo 129 
#define  pvr2_config_vbi 128 

const char *pvr2_config_get_name(enum pvr2_config cfg)
{
	switch (cfg) {
	case pvr2_config_empty: return "empty";
	case pvr2_config_mpeg: return "mpeg";
	case pvr2_config_vbi: return "vbi";
	case pvr2_config_pcm: return "pcm";
	case pvr2_config_rawvideo: return "raw video";
	}
	return "<unknown>";
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
          enum pvr2_config cfg = 0;
          const char * benchRet = pvr2_config_get_name(cfg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum pvr2_config cfg = 0;
          const char * benchRet = pvr2_config_get_name(cfg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum pvr2_config cfg = 0;
          const char * benchRet = pvr2_config_get_name(cfg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
