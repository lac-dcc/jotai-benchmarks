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
       1            big-arr-10x\n\
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
typedef  int u8 ;
struct ata_taskfile {int feature; int nsect; int lbal; int lbam; int lbah; } ;

/* Variables and functions */
 int ATA_REG_FEATURE ; 
 int ATA_REG_LBAH ; 
 int ATA_REG_LBAL ; 
 int ATA_REG_LBAM ; 
 int ATA_REG_NSECT ; 

__attribute__((used)) static inline unsigned int pdc_prep_lba28(struct ata_taskfile *tf, u8 *buf, unsigned int i)
{
	/* the "(1 << 5)" should be read "(count << 5)" */

	/* ATA command block registers */
	buf[i++] = (1 << 5) | ATA_REG_FEATURE;
	buf[i++] = tf->feature;

	buf[i++] = (1 << 5) | ATA_REG_NSECT;
	buf[i++] = tf->nsect;

	buf[i++] = (1 << 5) | ATA_REG_LBAL;
	buf[i++] = tf->lbal;

	buf[i++] = (1 << 5) | ATA_REG_LBAM;
	buf[i++] = tf->lbam;

	buf[i++] = (1 << 5) | ATA_REG_LBAH;
	buf[i++] = tf->lbah;

	return i;
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
          unsigned int i = 255;
          int _len_tf0 = 65025;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = pdc_prep_lba28(tf,buf,i);
          printf("%u\n", benchRet); 
          free(tf);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int i = 10;
          int _len_tf0 = 100;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = pdc_prep_lba28(tf,buf,i);
          printf("%u\n", benchRet); 
          free(tf);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
