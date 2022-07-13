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
typedef  int uint64_t ;

/* Variables and functions */
 int PGEX_I ; 
 int PGEX_P ; 
 int PGEX_RSV ; 
 int PGEX_U ; 
 int PGEX_W ; 
 int PG_V ; 
 int XHYVE_PROT_EXECUTE ; 
 int XHYVE_PROT_WRITE ; 

__attribute__((used)) static int
pf_error_code(int usermode, int prot, int rsvd, uint64_t pte)
{
	int error_code = 0;

	if (pte & PG_V)
		error_code |= PGEX_P;
	if (prot & XHYVE_PROT_WRITE)
		error_code |= PGEX_W;
	if (usermode)
		error_code |= PGEX_U;
	if (rsvd)
		error_code |= PGEX_RSV;
	if (prot & XHYVE_PROT_EXECUTE)
		error_code |= PGEX_I;

	return (error_code);
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
          int usermode = 100;
          int prot = 100;
          int rsvd = 100;
          int pte = 100;
          int benchRet = pf_error_code(usermode,prot,rsvd,pte);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int usermode = 255;
          int prot = 255;
          int rsvd = 255;
          int pte = 255;
          int benchRet = pf_error_code(usermode,prot,rsvd,pte);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int usermode = 10;
          int prot = 10;
          int rsvd = 10;
          int pte = 10;
          int benchRet = pf_error_code(usermode,prot,rsvd,pte);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
