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
typedef  unsigned long u64 ;

/* Variables and functions */
 int MCHK_DISPOSITION_REPORT ; 
 int MCHK_DISPOSITION_UNKNOWN_ERROR ; 

__attribute__((used)) static int
titan_parse_c_misc(u64 c_misc, int print)
{
#ifdef CONFIG_VERBOSE_MCHECK
	char *src;
	int nxs = 0;
#endif
	int status = MCHK_DISPOSITION_REPORT;

#define TITAN__CCHIP_MISC__NXM		(1UL << 28)
#define TITAN__CCHIP_MISC__NXS__S	(29)
#define TITAN__CCHIP_MISC__NXS__M	(0x7)

	if (!(c_misc & TITAN__CCHIP_MISC__NXM))
		return MCHK_DISPOSITION_UNKNOWN_ERROR;

#ifdef CONFIG_VERBOSE_MCHECK
	if (!print)
		return status;

	nxs = EXTRACT(c_misc, TITAN__CCHIP_MISC__NXS);
	switch(nxs) {
	case 0:	/* CPU 0 */
	case 1:	/* CPU 1 */
	case 2:	/* CPU 2 */
	case 3:	/* CPU 3 */
		src = "CPU";
		/* num is already the CPU number */
		break;
	case 4:	/* Pchip 0 */
	case 5:	/* Pchip 1 */
		src = "Pchip";
		nxs -= 4;
		break;
	default:/* reserved */
		src = "Unknown, NXS =";
		/* leave num untouched */
		break;
	}

	printk("%s    Non-existent memory access from: %s %d\n", 
	       err_print_prefix, src, nxs);
#endif /* CONFIG_VERBOSE_MCHECK */

	return status;
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
          unsigned long c_misc = 100;
          int print = 100;
          int benchRet = titan_parse_c_misc(c_misc,print);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long c_misc = 255;
          int print = 255;
          int benchRet = titan_parse_c_misc(c_misc,print);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long c_misc = 10;
          int print = 10;
          int benchRet = titan_parse_c_misc(c_misc,print);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
