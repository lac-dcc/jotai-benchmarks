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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned char group; } ;
struct scc_channel {int* wreg; scalar_t__ dcd; scalar_t__ dev; TYPE_1__ kiss; } ;

/* Variables and functions */
 int Nchips ; 
 size_t R5 ; 
 int RTS ; 
 unsigned char RXGROUP ; 
 struct scc_channel* SCC_Info ; 
 unsigned char TXGROUP ; 

__attribute__((used)) static inline int is_grouped(struct scc_channel *scc)
{
	int k;
	struct scc_channel *scc2;
	unsigned char grp1, grp2;

	grp1 = scc->kiss.group;
	
	for (k = 0; k < (Nchips * 2); k++)
	{
		scc2 = &SCC_Info[k];
		grp2 = scc2->kiss.group;
		
		if (scc2 == scc || !(scc2->dev && grp2))
			continue;
		
		if ((grp1 & 0x3f) == (grp2 & 0x3f))
		{
			if ( (grp1 & TXGROUP) && (scc2->wreg[R5] & RTS) )
				return 1;
			
			if ( (grp1 & RXGROUP) && scc2->dcd )
				return 1;
		}
	}
	return 0;
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
          int _len_scc0 = 1;
          struct scc_channel * scc = (struct scc_channel *) malloc(_len_scc0*sizeof(struct scc_channel));
          for(int _i0 = 0; _i0 < _len_scc0; _i0++) {
              int _len_scc__i0__wreg0 = 1;
          scc[_i0].wreg = (int *) malloc(_len_scc__i0__wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scc__i0__wreg0; _j0++) {
            scc[_i0].wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scc[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
        scc[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
        scc[_i0].kiss.group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_grouped(scc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scc0; _aux++) {
          free(scc[_aux].wreg);
          }
          free(scc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_scc0 = 65025;
          struct scc_channel * scc = (struct scc_channel *) malloc(_len_scc0*sizeof(struct scc_channel));
          for(int _i0 = 0; _i0 < _len_scc0; _i0++) {
              int _len_scc__i0__wreg0 = 1;
          scc[_i0].wreg = (int *) malloc(_len_scc__i0__wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scc__i0__wreg0; _j0++) {
            scc[_i0].wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scc[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
        scc[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
        scc[_i0].kiss.group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_grouped(scc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scc0; _aux++) {
          free(scc[_aux].wreg);
          }
          free(scc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_scc0 = 100;
          struct scc_channel * scc = (struct scc_channel *) malloc(_len_scc0*sizeof(struct scc_channel));
          for(int _i0 = 0; _i0 < _len_scc0; _i0++) {
              int _len_scc__i0__wreg0 = 1;
          scc[_i0].wreg = (int *) malloc(_len_scc__i0__wreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scc__i0__wreg0; _j0++) {
            scc[_i0].wreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scc[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
        scc[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
        scc[_i0].kiss.group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_grouped(scc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scc0; _aux++) {
          free(scc[_aux].wreg);
          }
          free(scc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
