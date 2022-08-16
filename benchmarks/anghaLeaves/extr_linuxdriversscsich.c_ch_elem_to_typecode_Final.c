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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__* firsts; scalar_t__* counts; } ;
typedef  TYPE_1__ scsi_changer ;

/* Variables and functions */
 int CH_TYPES ; 

__attribute__((used)) static int
ch_elem_to_typecode(scsi_changer *ch, u_int elem)
{
	int i;

	for (i = 0; i < CH_TYPES; i++) {
		if (elem >= ch->firsts[i]  &&
		    elem <  ch->firsts[i] +
	            ch->counts[i])
			return i+1;
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
          long elem = 100;
          int _len_ch0 = 1;
          struct TYPE_3__ * ch = (struct TYPE_3__ *) malloc(_len_ch0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
              int _len_ch__i0__firsts0 = 1;
          ch[_i0].firsts = (long *) malloc(_len_ch__i0__firsts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ch__i0__firsts0; _j0++) {
            ch[_i0].firsts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch__i0__counts0 = 1;
          ch[_i0].counts = (long *) malloc(_len_ch__i0__counts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ch__i0__counts0; _j0++) {
            ch[_i0].counts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ch_elem_to_typecode(ch,elem);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ch0; _aux++) {
          free(ch[_aux].firsts);
          }
          for(int _aux = 0; _aux < _len_ch0; _aux++) {
          free(ch[_aux].counts);
          }
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
