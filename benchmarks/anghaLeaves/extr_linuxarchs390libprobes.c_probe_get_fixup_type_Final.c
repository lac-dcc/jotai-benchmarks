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
typedef  int u16 ;

/* Variables and functions */
 int FIXUP_BRANCH_NOT_TAKEN ; 
 int FIXUP_NOT_REQUIRED ; 
 int FIXUP_PSW_NORMAL ; 
 int FIXUP_RETURN_REGISTER ; 

int probe_get_fixup_type(u16 *insn)
{
	/* default fixup method */
	int fixup = FIXUP_PSW_NORMAL;

	switch (insn[0] >> 8) {
	case 0x05:	/* balr	*/
	case 0x0d:	/* basr */
		fixup = FIXUP_RETURN_REGISTER;
		/* if r2 = 0, no branch will be taken */
		if ((insn[0] & 0x0f) == 0)
			fixup |= FIXUP_BRANCH_NOT_TAKEN;
		break;
	case 0x06:	/* bctr	*/
	case 0x07:	/* bcr	*/
		fixup = FIXUP_BRANCH_NOT_TAKEN;
		break;
	case 0x45:	/* bal	*/
	case 0x4d:	/* bas	*/
		fixup = FIXUP_RETURN_REGISTER;
		break;
	case 0x47:	/* bc	*/
	case 0x46:	/* bct	*/
	case 0x86:	/* bxh	*/
	case 0x87:	/* bxle	*/
		fixup = FIXUP_BRANCH_NOT_TAKEN;
		break;
	case 0x82:	/* lpsw	*/
		fixup = FIXUP_NOT_REQUIRED;
		break;
	case 0xb2:	/* lpswe */
		if ((insn[0] & 0xff) == 0xb2)
			fixup = FIXUP_NOT_REQUIRED;
		break;
	case 0xa7:	/* bras	*/
		if ((insn[0] & 0x0f) == 0x05)
			fixup |= FIXUP_RETURN_REGISTER;
		break;
	case 0xc0:
		if ((insn[0] & 0x0f) == 0x05)	/* brasl */
			fixup |= FIXUP_RETURN_REGISTER;
		break;
	case 0xeb:
		switch (insn[2] & 0xff) {
		case 0x44: /* bxhg  */
		case 0x45: /* bxleg */
			fixup = FIXUP_BRANCH_NOT_TAKEN;
			break;
		}
		break;
	case 0xe3:	/* bctg	*/
		if ((insn[2] & 0xff) == 0x46)
			fixup = FIXUP_BRANCH_NOT_TAKEN;
		break;
	case 0xec:
		switch (insn[2] & 0xff) {
		case 0xe5: /* clgrb */
		case 0xe6: /* cgrb  */
		case 0xf6: /* crb   */
		case 0xf7: /* clrb  */
		case 0xfc: /* cgib  */
		case 0xfd: /* cglib */
		case 0xfe: /* cib   */
		case 0xff: /* clib  */
			fixup = FIXUP_BRANCH_NOT_TAKEN;
			break;
		}
		break;
	}
	return fixup;
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
          int _len_insn0 = 1;
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = probe_get_fixup_type(insn);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_insn0 = 100;
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = probe_get_fixup_type(insn);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
