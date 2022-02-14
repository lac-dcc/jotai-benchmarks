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
struct mb86a16_state {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int swp_freq_calcuation(struct mb86a16_state *state, int i, int v, int *V,  int vmax, int vmin,
			       int SIGMIN, int fOSC, int afcex_freq, int swp_ofs, unsigned char *SIG1)
{
	int swp_freq ;

	if ((i % 2 == 1) && (v <= vmax)) {
		/* positive v (case 1) */
		if ((v - 1 == vmin)				&&
		    (*(V + 30 + v) >= 0)			&&
		    (*(V + 30 + v - 1) >= 0)			&&
		    (*(V + 30 + v - 1) > *(V + 30 + v))		&&
		    (*(V + 30 + v - 1) > SIGMIN)) {

			swp_freq = fOSC * 1000 + afcex_freq - swp_ofs;
			*SIG1 = *(V + 30 + v - 1);
		} else if ((v == vmax)				&&
			   (*(V + 30 + v) >= 0)			&&
			   (*(V + 30 + v - 1) >= 0)		&&
			   (*(V + 30 + v) > *(V + 30 + v - 1))	&&
			   (*(V + 30 + v) > SIGMIN)) {
			/* (case 2) */
			swp_freq = fOSC * 1000 + afcex_freq;
			*SIG1 = *(V + 30 + v);
		} else if ((*(V + 30 + v) > 0)			&&
			   (*(V + 30 + v - 1) > 0)		&&
			   (*(V + 30 + v - 2) > 0)		&&
			   (*(V + 30 + v - 3) > 0)		&&
			   (*(V + 30 + v - 1) > *(V + 30 + v))	&&
			   (*(V + 30 + v - 2) > *(V + 30 + v - 3)) &&
			   ((*(V + 30 + v - 1) > SIGMIN)	||
			   (*(V + 30 + v - 2) > SIGMIN))) {
			/* (case 3) */
			if (*(V + 30 + v - 1) >= *(V + 30 + v - 2)) {
				swp_freq = fOSC * 1000 + afcex_freq - swp_ofs;
				*SIG1 = *(V + 30 + v - 1);
			} else {
				swp_freq = fOSC * 1000 + afcex_freq - swp_ofs * 2;
				*SIG1 = *(V + 30 + v - 2);
			}
		} else if ((v == vmax)				&&
			   (*(V + 30 + v) >= 0)			&&
			   (*(V + 30 + v - 1) >= 0)		&&
			   (*(V + 30 + v - 2) >= 0)		&&
			   (*(V + 30 + v) > *(V + 30 + v - 2))	&&
			   (*(V + 30 + v - 1) > *(V + 30 + v - 2)) &&
			   ((*(V + 30 + v) > SIGMIN)		||
			   (*(V + 30 + v - 1) > SIGMIN))) {
			/* (case 4) */
			if (*(V + 30 + v) >= *(V + 30 + v - 1)) {
				swp_freq = fOSC * 1000 + afcex_freq;
				*SIG1 = *(V + 30 + v);
			} else {
				swp_freq = fOSC * 1000 + afcex_freq - swp_ofs;
				*SIG1 = *(V + 30 + v - 1);
			}
		} else  {
			swp_freq = -1 ;
		}
	} else if ((i % 2 == 0) && (v >= vmin)) {
		/* Negative v (case 1) */
		if ((*(V + 30 + v) > 0)				&&
		    (*(V + 30 + v + 1) > 0)			&&
		    (*(V + 30 + v + 2) > 0)			&&
		    (*(V + 30 + v + 1) > *(V + 30 + v))		&&
		    (*(V + 30 + v + 1) > *(V + 30 + v + 2))	&&
		    (*(V + 30 + v + 1) > SIGMIN)) {

			swp_freq = fOSC * 1000 + afcex_freq + swp_ofs;
			*SIG1 = *(V + 30 + v + 1);
		} else if ((v + 1 == vmax)			&&
			   (*(V + 30 + v) >= 0)			&&
			   (*(V + 30 + v + 1) >= 0)		&&
			   (*(V + 30 + v + 1) > *(V + 30 + v))	&&
			   (*(V + 30 + v + 1) > SIGMIN)) {
			/* (case 2) */
			swp_freq = fOSC * 1000 + afcex_freq + swp_ofs;
			*SIG1 = *(V + 30 + v);
		} else if ((v == vmin)				&&
			   (*(V + 30 + v) > 0)			&&
			   (*(V + 30 + v + 1) > 0)		&&
			   (*(V + 30 + v + 2) > 0)		&&
			   (*(V + 30 + v) > *(V + 30 + v + 1))	&&
			   (*(V + 30 + v) > *(V + 30 + v + 2))	&&
			   (*(V + 30 + v) > SIGMIN)) {
			/* (case 3) */
			swp_freq = fOSC * 1000 + afcex_freq;
			*SIG1 = *(V + 30 + v);
		} else if ((*(V + 30 + v) >= 0)			&&
			   (*(V + 30 + v + 1) >= 0)		&&
			   (*(V + 30 + v + 2) >= 0)		&&
			   (*(V + 30 + v + 3) >= 0)		&&
			   (*(V + 30 + v + 1) > *(V + 30 + v))	&&
			   (*(V + 30 + v + 2) > *(V + 30 + v + 3)) &&
			   ((*(V + 30 + v + 1) > SIGMIN)	||
			    (*(V + 30 + v + 2) > SIGMIN))) {
			/* (case 4) */
			if (*(V + 30 + v + 1) >= *(V + 30 + v + 2)) {
				swp_freq = fOSC * 1000 + afcex_freq + swp_ofs;
				*SIG1 = *(V + 30 + v + 1);
			} else {
				swp_freq = fOSC * 1000 + afcex_freq + swp_ofs * 2;
				*SIG1 = *(V + 30 + v + 2);
			}
		} else if ((*(V + 30 + v) >= 0)			&&
			   (*(V + 30 + v + 1) >= 0)		&&
			   (*(V + 30 + v + 2) >= 0)		&&
			   (*(V + 30 + v + 3) >= 0)		&&
			   (*(V + 30 + v) > *(V + 30 + v + 2))	&&
			   (*(V + 30 + v + 1) > *(V + 30 + v + 2)) &&
			   (*(V + 30 + v) > *(V + 30 + v + 3))	&&
			   (*(V + 30 + v + 1) > *(V + 30 + v + 3)) &&
			   ((*(V + 30 + v) > SIGMIN)		||
			    (*(V + 30 + v + 1) > SIGMIN))) {
			/* (case 5) */
			if (*(V + 30 + v) >= *(V + 30 + v + 1)) {
				swp_freq = fOSC * 1000 + afcex_freq;
				*SIG1 = *(V + 30 + v);
			} else {
				swp_freq = fOSC * 1000 + afcex_freq + swp_ofs;
				*SIG1 = *(V + 30 + v + 1);
			}
		} else if ((v + 2 == vmin)			&&
			   (*(V + 30 + v) >= 0)			&&
			   (*(V + 30 + v + 1) >= 0)		&&
			   (*(V + 30 + v + 2) >= 0)		&&
			   (*(V + 30 + v + 1) > *(V + 30 + v))	&&
			   (*(V + 30 + v + 2) > *(V + 30 + v))	&&
			   ((*(V + 30 + v + 1) > SIGMIN)	||
			    (*(V + 30 + v + 2) > SIGMIN))) {
			/* (case 6) */
			if (*(V + 30 + v + 1) >= *(V + 30 + v + 2)) {
				swp_freq = fOSC * 1000 + afcex_freq + swp_ofs;
				*SIG1 = *(V + 30 + v + 1);
			} else {
				swp_freq = fOSC * 1000 + afcex_freq + swp_ofs * 2;
				*SIG1 = *(V + 30 + v + 2);
			}
		} else if ((vmax == 0) && (vmin == 0) && (*(V + 30 + v) > SIGMIN)) {
			swp_freq = fOSC * 1000;
			*SIG1 = *(V + 30 + v);
		} else
			swp_freq = -1;
	} else
		swp_freq = -1;

	return swp_freq;
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
          int i = 255;
          int v = 255;
          int vmax = 255;
          int vmin = 255;
          int SIGMIN = 255;
          int fOSC = 255;
          int afcex_freq = 255;
          int swp_ofs = 255;
          int _len_state0 = 1;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_V0 = 65025;
          int * V = (int *) malloc(_len_V0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_V0; _i0++) {
            V[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SIG10 = 65025;
          unsigned char * SIG1 = (unsigned char *) malloc(_len_SIG10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_SIG10; _i0++) {
            SIG1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = swp_freq_calcuation(state,i,v,V,vmax,vmin,SIGMIN,fOSC,afcex_freq,swp_ofs,SIG1);
          printf("%d\n", benchRet); 
          free(state);
          free(V);
          free(SIG1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
