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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static uint8_t *get_next_inst_ip(uint8_t *addr)
{
	uint8_t *ip = addr;
	uint8_t sib;
	uint8_t rm;
	uint8_t mod;
	uint8_t base;
	uint8_t modrm;

	/* determine the prefix. */
	switch(*ip) {
	case 0xf2:
	case 0xf3:
	case 0x66:
		ip++;
		break;
	}

	/* look for rex prefix */
	if ((*ip & 0x40) == 0x40)
		ip++;

	/* Make sure we have a MPX instruction. */
	if (*ip++ != 0x0f)
		return addr;

	/* Skip the op code byte. */
	ip++;

	/* Get the modrm byte. */
	modrm = *ip++;

	/* Break it down into parts. */
	rm = modrm & 7;
	mod = (modrm >> 6);

	/* Init the parts of the address mode. */
	base = 8;

	/* Is it a mem mode? */
	if (mod != 3) {
		/* look for scaled indexed addressing */
		if (rm == 4) {
			/* SIB addressing */
			sib = *ip++;
			base = sib & 7;
			switch (mod) {
			case 0:
				if (base == 5)
					ip += 4;
				break;

			case 1:
				ip++;
				break;

			case 2:
				ip += 4;
				break;
			}

		} else {
			/* MODRM addressing */
			switch (mod) {
			case 0:
				/* DISP32 addressing, no base */
				if (rm == 5)
					ip += 4;
				break;

			case 1:
				ip++;
				break;

			case 2:
				ip += 4;
				break;
			}
		}
	}
	return ip;
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
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_next_inst_ip(addr);
          printf("%d\n", (*benchRet)); 
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_addr0 = 100;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_next_inst_ip(addr);
          printf("%d\n", (*benchRet)); 
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
