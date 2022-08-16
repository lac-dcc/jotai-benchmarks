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
typedef  int u8 ;
struct cyapa {int dummy; } ;

/* Variables and functions */
 int PIP_APP_DEEP_SLEEP_REPORT_ID ; 
 int PIP_DEEP_SLEEP_OPCODE ; 
 int PIP_DEEP_SLEEP_OPCODE_MASK ; 
 int PIP_DEEP_SLEEP_RESP_LENGTH ; 
 size_t PIP_RESP_REPORT_ID_OFFSET ; 

__attribute__((used)) static bool cyapa_sort_pip_deep_sleep_data(struct cyapa *cyapa,
		u8 *buf, int len)
{
	if (len == PIP_DEEP_SLEEP_RESP_LENGTH &&
		buf[PIP_RESP_REPORT_ID_OFFSET] ==
			PIP_APP_DEEP_SLEEP_REPORT_ID &&
		(buf[4] & PIP_DEEP_SLEEP_OPCODE_MASK) ==
			PIP_DEEP_SLEEP_OPCODE)
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
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyapa_sort_pip_deep_sleep_data(cyapa,buf,len);
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
