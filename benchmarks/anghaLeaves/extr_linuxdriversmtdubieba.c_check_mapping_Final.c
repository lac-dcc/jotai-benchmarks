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
struct ubi_volume {int dummy; } ;
struct ubi_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int check_mapping(struct ubi_device *ubi, struct ubi_volume *vol, int lnum,
		  int *pnum)
{
	return 0;
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
          int lnum = 100;
          int _len_ubi0 = 1;
          struct ubi_device * ubi = (struct ubi_device *) malloc(_len_ubi0*sizeof(struct ubi_device));
          for(int _i0 = 0; _i0 < _len_ubi0; _i0++) {
            ubi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vol0 = 1;
          struct ubi_volume * vol = (struct ubi_volume *) malloc(_len_vol0*sizeof(struct ubi_volume));
          for(int _i0 = 0; _i0 < _len_vol0; _i0++) {
            vol[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pnum0 = 1;
          int * pnum = (int *) malloc(_len_pnum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pnum0; _i0++) {
            pnum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_mapping(ubi,vol,lnum,pnum);
          printf("%d\n", benchRet); 
          free(ubi);
          free(vol);
          free(pnum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
