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
struct hws_trailer_entry {unsigned short bsdes; unsigned short dsdes; } ;
struct hws_basic_entry {int def; } ;

/* Variables and functions */
 int S390_CPUMSF_PAGESZ ; 

__attribute__((used)) static bool s390_cpumsf_validate(int machine_type,
				 unsigned char *buf, size_t len,
				 unsigned short *bsdes,
				 unsigned short *dsdes)
{
	struct hws_basic_entry *basic = (struct hws_basic_entry *)buf;
	struct hws_trailer_entry *te;

	*dsdes = *bsdes = 0;
	if (len & (S390_CPUMSF_PAGESZ - 1))	/* Illegal size */
		return false;
	if (basic->def != 1)		/* No basic set entry, must be first */
		return false;
	/* Check for trailer entry at end of SDB */
	te = (struct hws_trailer_entry *)(buf + S390_CPUMSF_PAGESZ
					      - sizeof(*te));
	*bsdes = te->bsdes;
	*dsdes = te->dsdes;
	if (!te->bsdes && !te->dsdes) {
		/* Very old hardware, use CPUID */
		switch (machine_type) {
		case 2097:
		case 2098:
			*dsdes = 64;
			*bsdes = 32;
			break;
		case 2817:
		case 2818:
			*dsdes = 74;
			*bsdes = 32;
			break;
		case 2827:
		case 2828:
			*dsdes = 85;
			*bsdes = 32;
			break;
		case 2964:
		case 2965:
			*dsdes = 112;
			*bsdes = 32;
			break;
		default:
			/* Illegal trailer entry */
			return false;
		}
	}
	return true;
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
          int machine_type = 100;
          unsigned long len = 100;
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bsdes0 = 1;
          unsigned short * bsdes = (unsigned short *) malloc(_len_bsdes0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_bsdes0; _i0++) {
            bsdes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dsdes0 = 1;
          unsigned short * dsdes = (unsigned short *) malloc(_len_dsdes0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_dsdes0; _i0++) {
            dsdes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s390_cpumsf_validate(machine_type,buf,len,bsdes,dsdes);
          printf("%d\n", benchRet); 
          free(buf);
          free(bsdes);
          free(dsdes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
