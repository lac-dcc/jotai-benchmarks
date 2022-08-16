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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct hci_uart {int init_speed; int oper_speed; TYPE_1__* proto; } ;
typedef  enum qca_speed_type { ____Placeholder_qca_speed_type } qca_speed_type ;
struct TYPE_2__ {int init_speed; int oper_speed; } ;

/* Variables and functions */
 int QCA_INIT_SPEED ; 

__attribute__((used)) static unsigned int qca_get_speed(struct hci_uart *hu,
				  enum qca_speed_type speed_type)
{
	unsigned int speed = 0;

	if (speed_type == QCA_INIT_SPEED) {
		if (hu->init_speed)
			speed = hu->init_speed;
		else if (hu->proto->init_speed)
			speed = hu->proto->init_speed;
	} else {
		if (hu->oper_speed)
			speed = hu->oper_speed;
		else if (hu->proto->oper_speed)
			speed = hu->proto->oper_speed;
	}

	return speed;
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
          enum qca_speed_type speed_type = 0;
          int _len_hu0 = 1;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
            hu[_i0].init_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hu[_i0].oper_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hu__i0__proto0 = 1;
          hu[_i0].proto = (struct TYPE_2__ *) malloc(_len_hu__i0__proto0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hu__i0__proto0; _j0++) {
            hu[_i0].proto->init_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hu[_i0].proto->oper_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = qca_get_speed(hu,speed_type);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_hu0; _aux++) {
          free(hu[_aux].proto);
          }
          free(hu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
