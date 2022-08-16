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
struct ata_link {int dummy; } ;
struct ata_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int pcmcia_set_mode_8bit(struct ata_link *link,
				struct ata_device **r_failed_dev)
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
          int _len_link0 = 1;
          struct ata_link * link = (struct ata_link *) malloc(_len_link0*sizeof(struct ata_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_failed_dev0 = 1;
          struct ata_device ** r_failed_dev = (struct ata_device **) malloc(_len_r_failed_dev0*sizeof(struct ata_device *));
          for(int _i0 = 0; _i0 < _len_r_failed_dev0; _i0++) {
            int _len_r_failed_dev1 = 1;
            r_failed_dev[_i0] = (struct ata_device *) malloc(_len_r_failed_dev1*sizeof(struct ata_device));
            for(int _i1 = 0; _i1 < _len_r_failed_dev1; _i1++) {
              r_failed_dev[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = pcmcia_set_mode_8bit(link,r_failed_dev);
          printf("%d\n", benchRet); 
          free(link);
          for(int i1 = 0; i1 < _len_r_failed_dev0; i1++) {
            int _len_r_failed_dev1 = 1;
              free(r_failed_dev[i1]);
          }
          free(r_failed_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
