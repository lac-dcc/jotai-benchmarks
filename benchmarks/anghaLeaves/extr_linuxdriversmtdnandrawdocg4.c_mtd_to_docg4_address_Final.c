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
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t mtd_to_docg4_address(int page, int column)
{
	/*
	 * Convert mtd address to format used by the device, 32 bit packed.
	 *
	 * Some notes on G4 addressing... The M-Sys documentation on this device
	 * claims that pages are 2K in length, and indeed, the format of the
	 * address used by the device reflects that.  But within each page are
	 * four 512 byte "sub-pages", each with its own oob data that is
	 * read/written immediately after the 512 bytes of page data.  This oob
	 * data contains the ecc bytes for the preceeding 512 bytes.
	 *
	 * Rather than tell the mtd nand infrastructure that page size is 2k,
	 * with four sub-pages each, we engage in a little subterfuge and tell
	 * the infrastructure code that pages are 512 bytes in size.  This is
	 * done because during the course of reverse-engineering the device, I
	 * never observed an instance where an entire 2K "page" was read or
	 * written as a unit.  Each "sub-page" is always addressed individually,
	 * its data read/written, and ecc handled before the next "sub-page" is
	 * addressed.
	 *
	 * This requires us to convert addresses passed by the mtd nand
	 * infrastructure code to those used by the device.
	 *
	 * The address that is written to the device consists of four bytes: the
	 * first two are the 2k page number, and the second is the index into
	 * the page.  The index is in terms of 16-bit half-words and includes
	 * the preceeding oob data, so e.g., the index into the second
	 * "sub-page" is 0x108, and the full device address of the start of mtd
	 * page 0x201 is 0x00800108.
	 */
	int g4_page = page / 4;	                      /* device's 2K page */
	int g4_index = (page % 4) * 0x108 + column/2; /* offset into page */
	return (g4_page << 16) | g4_index;	      /* pack */
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
          int page = 100;
          int column = 100;
          int benchRet = mtd_to_docg4_address(page,column);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int page = 255;
          int column = 255;
          int benchRet = mtd_to_docg4_address(page,column);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int page = 10;
          int column = 10;
          int benchRet = mtd_to_docg4_address(page,column);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
