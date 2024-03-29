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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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

/* Variables and functions */
 unsigned int AC_ERR_ATA_BUS ; 
 unsigned int AC_ERR_DEV ; 
 unsigned int AC_ERR_HSM ; 
 unsigned int AC_ERR_INVALID ; 
 unsigned int AC_ERR_MEDIA ; 
 unsigned int AC_ERR_TIMEOUT ; 
 int ATA_ECAT_ATA_BUS ; 
 int ATA_ECAT_DUBIOUS_NONE ; 
 int ATA_ECAT_TOUT_HSM ; 
 int ATA_ECAT_UNK_DEV ; 
 unsigned int ATA_EFLAG_DUBIOUS_XFER ; 
 unsigned int ATA_EFLAG_IS_IO ; 

__attribute__((used)) static int ata_eh_categorize_error(unsigned int eflags, unsigned int err_mask,
				   int *xfer_ok)
{
	int base = 0;

	if (!(eflags & ATA_EFLAG_DUBIOUS_XFER))
		*xfer_ok = 1;

	if (!*xfer_ok)
		base = ATA_ECAT_DUBIOUS_NONE;

	if (err_mask & AC_ERR_ATA_BUS)
		return base + ATA_ECAT_ATA_BUS;

	if (err_mask & AC_ERR_TIMEOUT)
		return base + ATA_ECAT_TOUT_HSM;

	if (eflags & ATA_EFLAG_IS_IO) {
		if (err_mask & AC_ERR_HSM)
			return base + ATA_ECAT_TOUT_HSM;
		if ((err_mask &
		     (AC_ERR_DEV|AC_ERR_MEDIA|AC_ERR_INVALID)) == AC_ERR_DEV)
			return base + ATA_ECAT_UNK_DEV;
	}

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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int eflags = 100;
        
          unsigned int err_mask = 100;
        
          int _len_xfer_ok0 = 1;
          int * xfer_ok = (int *) malloc(_len_xfer_ok0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xfer_ok0; _i0++) {
            xfer_ok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ata_eh_categorize_error(eflags,err_mask,xfer_ok);
          printf("%d\n", benchRet); 
          free(xfer_ok);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int eflags = 255;
        
          unsigned int err_mask = 255;
        
          int _len_xfer_ok0 = 65025;
          int * xfer_ok = (int *) malloc(_len_xfer_ok0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xfer_ok0; _i0++) {
            xfer_ok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ata_eh_categorize_error(eflags,err_mask,xfer_ok);
          printf("%d\n", benchRet); 
          free(xfer_ok);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int eflags = 10;
        
          unsigned int err_mask = 10;
        
          int _len_xfer_ok0 = 100;
          int * xfer_ok = (int *) malloc(_len_xfer_ok0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xfer_ok0; _i0++) {
            xfer_ok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ata_eh_categorize_error(eflags,err_mask,xfer_ok);
          printf("%d\n", benchRet); 
          free(xfer_ok);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int eflags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_xfer_ok0 = 1;
          int * xfer_ok = (int *) malloc(_len_xfer_ok0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xfer_ok0; _i0++) {
            xfer_ok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ata_eh_categorize_error(eflags,err_mask,xfer_ok);
          printf("%d\n", benchRet); 
          free(xfer_ok);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
