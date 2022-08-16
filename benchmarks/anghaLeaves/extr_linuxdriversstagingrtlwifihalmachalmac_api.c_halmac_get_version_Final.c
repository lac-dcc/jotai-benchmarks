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
typedef  void* u8 ;
struct halmac_ver {void* minor_ver; void* prototype_ver; void* major_ver; } ;
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;

/* Variables and functions */
 scalar_t__ HALMAC_MAJOR_VER ; 
 scalar_t__ HALMAC_MINOR_VER ; 
 scalar_t__ HALMAC_PROTOTYPE_VER ; 
 int HALMAC_RET_SUCCESS ; 

enum halmac_ret_status halmac_get_version(struct halmac_ver *version)
{
	version->major_ver = (u8)HALMAC_MAJOR_VER;
	version->prototype_ver = (u8)HALMAC_PROTOTYPE_VER;
	version->minor_ver = (u8)HALMAC_MINOR_VER;

	return HALMAC_RET_SUCCESS;
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
          int _len_version0 = 1;
          struct halmac_ver * version = (struct halmac_ver *) malloc(_len_version0*sizeof(struct halmac_ver));
          for(int _i0 = 0; _i0 < _len_version0; _i0++) {
              }
          enum halmac_ret_status benchRet = halmac_get_version(version);
          free(version);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_version0 = 100;
          struct halmac_ver * version = (struct halmac_ver *) malloc(_len_version0*sizeof(struct halmac_ver));
          for(int _i0 = 0; _i0 < _len_version0; _i0++) {
              }
          enum halmac_ret_status benchRet = halmac_get_version(version);
          free(version);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
