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
typedef  size_t u8 ;

/* Variables and functions */

__attribute__((used)) static int dccp_feat_preflist_match(u8 *servlist, u8 slen, u8 *clilist, u8 clen)
{
	u8 c, s;

	for (s = 0; s < slen; s++)
		for (c = 0; c < clen; c++)
			if (servlist[s] == clilist[c])
				return servlist[s];
	return -1;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          unsigned long slen = 100;
        
          unsigned long clen = 100;
        
          int _len_servlist0 = 1;
          unsigned long * servlist = (unsigned long *) malloc(_len_servlist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_servlist0; _i0++) {
            servlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clilist0 = 1;
          unsigned long * clilist = (unsigned long *) malloc(_len_clilist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_clilist0; _i0++) {
            clilist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dccp_feat_preflist_match(servlist,slen,clilist,clen);
          printf("%d\n", benchRet); 
          free(servlist);
          free(clilist);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          unsigned long slen = 255;
        
          unsigned long clen = 255;
        
          int _len_servlist0 = 65025;
          unsigned long * servlist = (unsigned long *) malloc(_len_servlist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_servlist0; _i0++) {
            servlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clilist0 = 65025;
          unsigned long * clilist = (unsigned long *) malloc(_len_clilist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_clilist0; _i0++) {
            clilist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dccp_feat_preflist_match(servlist,slen,clilist,clen);
          printf("%d\n", benchRet); 
          free(servlist);
          free(clilist);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          unsigned long slen = 10;
        
          unsigned long clen = 10;
        
          int _len_servlist0 = 100;
          unsigned long * servlist = (unsigned long *) malloc(_len_servlist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_servlist0; _i0++) {
            servlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clilist0 = 100;
          unsigned long * clilist = (unsigned long *) malloc(_len_clilist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_clilist0; _i0++) {
            clilist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dccp_feat_preflist_match(servlist,slen,clilist,clen);
          printf("%d\n", benchRet); 
          free(servlist);
          free(clilist);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          unsigned long slen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long clen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_servlist0 = 1;
          unsigned long * servlist = (unsigned long *) malloc(_len_servlist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_servlist0; _i0++) {
            servlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clilist0 = 1;
          unsigned long * clilist = (unsigned long *) malloc(_len_clilist0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_clilist0; _i0++) {
            clilist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dccp_feat_preflist_match(servlist,slen,clilist,clen);
          printf("%d\n", benchRet); 
          free(servlist);
          free(clilist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
