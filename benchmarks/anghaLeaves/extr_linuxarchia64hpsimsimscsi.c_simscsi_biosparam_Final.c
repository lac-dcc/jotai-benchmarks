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
       0            big-arr\n\
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
struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef  int sector_t ;

/* Variables and functions */

__attribute__((used)) static int
simscsi_biosparam (struct scsi_device *sdev, struct block_device *n,
		sector_t capacity, int ip[])
{
	ip[0] = 64;		/* heads */
	ip[1] = 32;		/* sectors */
	ip[2] = capacity >> 11;	/* cylinders */
	return 0;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int capacity = 255;
        
          int _len_sdev0 = 65025;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
              sdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_n0 = 65025;
          struct block_device * n = (struct block_device *) malloc(_len_n0*sizeof(struct block_device));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
              n[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ip0 = 65025;
          int * ip = (int *) malloc(_len_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = simscsi_biosparam(sdev,n,capacity,ip);
          printf("%d\n", benchRet); 
          free(sdev);
          free(n);
          free(ip);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int capacity = 10;
        
          int _len_sdev0 = 100;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
              sdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_n0 = 100;
          struct block_device * n = (struct block_device *) malloc(_len_n0*sizeof(struct block_device));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
              n[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ip0 = 100;
          int * ip = (int *) malloc(_len_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = simscsi_biosparam(sdev,n,capacity,ip);
          printf("%d\n", benchRet); 
          free(sdev);
          free(n);
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
