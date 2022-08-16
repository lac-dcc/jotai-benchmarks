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
struct cyapa {int state; } ;

/* Variables and functions */
#define  CYAPA_STATE_BL_ACTIVE 135 
#define  CYAPA_STATE_BL_BUSY 134 
#define  CYAPA_STATE_BL_IDLE 133 
#define  CYAPA_STATE_GEN5_APP 132 
#define  CYAPA_STATE_GEN5_BL 131 
#define  CYAPA_STATE_GEN6_APP 130 
#define  CYAPA_STATE_GEN6_BL 129 
#define  CYAPA_STATE_OP 128 

__attribute__((used)) static char *cyapa_state_to_string(struct cyapa *cyapa)
{
	switch (cyapa->state) {
	case CYAPA_STATE_BL_BUSY:
		return "bootloader busy";
	case CYAPA_STATE_BL_IDLE:
		return "bootloader idle";
	case CYAPA_STATE_BL_ACTIVE:
		return "bootloader active";
	case CYAPA_STATE_GEN5_BL:
	case CYAPA_STATE_GEN6_BL:
		return "bootloader";
	case CYAPA_STATE_OP:
	case CYAPA_STATE_GEN5_APP:
	case CYAPA_STATE_GEN6_APP:
		return "operational";  /* Normal valid state. */
	default:
		return "invalid mode";
	}
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
          int _len_cyapa0 = 1;
          struct cyapa * cyapa = (struct cyapa *) malloc(_len_cyapa0*sizeof(struct cyapa));
          for(int _i0 = 0; _i0 < _len_cyapa0; _i0++) {
            cyapa[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = cyapa_state_to_string(cyapa);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cyapa);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cyapa0 = 100;
          struct cyapa * cyapa = (struct cyapa *) malloc(_len_cyapa0*sizeof(struct cyapa));
          for(int _i0 = 0; _i0 < _len_cyapa0; _i0++) {
            cyapa[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = cyapa_state_to_string(cyapa);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cyapa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
