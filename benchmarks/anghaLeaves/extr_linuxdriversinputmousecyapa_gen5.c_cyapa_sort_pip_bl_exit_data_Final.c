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
typedef  scalar_t__ u8 ;
struct cyapa {int dummy; } ;

/* Variables and functions */
 int PIP_BL_FAIL_EXIT_RESP_LEN ; 
 scalar_t__ PIP_BL_RESP_REPORT_ID ; 
 scalar_t__ PIP_EOP_KEY ; 
 size_t PIP_RESP_BL_SOP_OFFSET ; 
 int PIP_RESP_LENGTH_SIZE ; 
 size_t PIP_RESP_REPORT_ID_OFFSET ; 
 scalar_t__ PIP_RESP_RSVD_KEY ; 
 size_t PIP_RESP_RSVD_OFFSET ; 
 scalar_t__ PIP_SOP_KEY ; 

__attribute__((used)) static bool cyapa_sort_pip_bl_exit_data(struct cyapa *cyapa, u8 *buf, int len)
{
	if (buf == NULL || len < PIP_RESP_LENGTH_SIZE)
		return false;

	if (buf[0] == 0 && buf[1] == 0)
		return true;

	/* Exit bootloader failed for some reason. */
	if (len == PIP_BL_FAIL_EXIT_RESP_LEN &&
			buf[PIP_RESP_REPORT_ID_OFFSET] ==
				PIP_BL_RESP_REPORT_ID &&
			buf[PIP_RESP_RSVD_OFFSET] == PIP_RESP_RSVD_KEY &&
			buf[PIP_RESP_BL_SOP_OFFSET] == PIP_SOP_KEY &&
			buf[10] == PIP_EOP_KEY)
		return true;

	return false;
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
          int len = 100;
          int _len_cyapa0 = 1;
          struct cyapa * cyapa = (struct cyapa *) malloc(_len_cyapa0*sizeof(struct cyapa));
          for(int _i0 = 0; _i0 < _len_cyapa0; _i0++) {
            cyapa[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyapa_sort_pip_bl_exit_data(cyapa,buf,len);
          printf("%d\n", benchRet); 
          free(cyapa);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
