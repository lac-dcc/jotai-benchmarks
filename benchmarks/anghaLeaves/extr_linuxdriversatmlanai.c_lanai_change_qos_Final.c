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
struct atm_vcc {int dummy; } ;
struct atm_qos {int dummy; } ;

/* Variables and functions */
 int EBUSY ; 

__attribute__((used)) static int lanai_change_qos(struct atm_vcc *atmvcc,
	/*const*/ struct atm_qos *qos, int flags)
{
	return -EBUSY;		/* TODO: need to write this */
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
          int flags = 100;
          int _len_atmvcc0 = 1;
          struct atm_vcc * atmvcc = (struct atm_vcc *) malloc(_len_atmvcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_atmvcc0; _i0++) {
            atmvcc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qos0 = 1;
          struct atm_qos * qos = (struct atm_qos *) malloc(_len_qos0*sizeof(struct atm_qos));
          for(int _i0 = 0; _i0 < _len_qos0; _i0++) {
            qos[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lanai_change_qos(atmvcc,qos,flags);
          printf("%d\n", benchRet); 
          free(atmvcc);
          free(qos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
