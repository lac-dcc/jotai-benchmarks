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
typedef  int u32 ;
struct fw_ohci {int* self_id_buffer; } ;

/* Variables and functions */

__attribute__((used)) static int get_self_id_pos(struct fw_ohci *ohci, u32 self_id,
	int self_id_count)
{
	int i;
	u32 entry;

	for (i = 0; i < self_id_count; i++) {
		entry = ohci->self_id_buffer[i];
		if ((self_id & 0xff000000) == (entry & 0xff000000))
			return -1;
		if ((self_id & 0xff000000) < (entry & 0xff000000))
			return i;
	}
	return i;
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
          int self_id = 100;
          int self_id_count = 100;
          int _len_ohci0 = 1;
          struct fw_ohci * ohci = (struct fw_ohci *) malloc(_len_ohci0*sizeof(struct fw_ohci));
          for(int _i0 = 0; _i0 < _len_ohci0; _i0++) {
              int _len_ohci__i0__self_id_buffer0 = 1;
          ohci[_i0].self_id_buffer = (int *) malloc(_len_ohci__i0__self_id_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ohci__i0__self_id_buffer0; _j0++) {
            ohci[_i0].self_id_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_self_id_pos(ohci,self_id,self_id_count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ohci0; _aux++) {
          free(ohci[_aux].self_id_buffer);
          }
          free(ohci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
