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
struct i40e_q_vector {TYPE_1__* adapter; } ;
struct TYPE_2__ {int link_speed; } ;

/* Variables and functions */
 int I40E_ITR_ADAPTIVE_MIN_INC ; 
#define  I40E_LINK_SPEED_100MB 133 
#define  I40E_LINK_SPEED_10GB 132 
#define  I40E_LINK_SPEED_1GB 131 
#define  I40E_LINK_SPEED_20GB 130 
#define  I40E_LINK_SPEED_25GB 129 
#define  I40E_LINK_SPEED_40GB 128 

__attribute__((used)) static inline unsigned int i40e_itr_divisor(struct i40e_q_vector *q_vector)
{
	unsigned int divisor;

	switch (q_vector->adapter->link_speed) {
	case I40E_LINK_SPEED_40GB:
		divisor = I40E_ITR_ADAPTIVE_MIN_INC * 1024;
		break;
	case I40E_LINK_SPEED_25GB:
	case I40E_LINK_SPEED_20GB:
		divisor = I40E_ITR_ADAPTIVE_MIN_INC * 512;
		break;
	default:
	case I40E_LINK_SPEED_10GB:
		divisor = I40E_ITR_ADAPTIVE_MIN_INC * 256;
		break;
	case I40E_LINK_SPEED_1GB:
	case I40E_LINK_SPEED_100MB:
		divisor = I40E_ITR_ADAPTIVE_MIN_INC * 32;
		break;
	}

	return divisor;
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
          int _len_q_vector0 = 1;
          struct i40e_q_vector * q_vector = (struct i40e_q_vector *) malloc(_len_q_vector0*sizeof(struct i40e_q_vector));
          for(int _i0 = 0; _i0 < _len_q_vector0; _i0++) {
              int _len_q_vector__i0__adapter0 = 1;
          q_vector[_i0].adapter = (struct TYPE_2__ *) malloc(_len_q_vector__i0__adapter0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q_vector__i0__adapter0; _j0++) {
            q_vector[_i0].adapter->link_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = i40e_itr_divisor(q_vector);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_q_vector0; _aux++) {
          free(q_vector[_aux].adapter);
          }
          free(q_vector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
