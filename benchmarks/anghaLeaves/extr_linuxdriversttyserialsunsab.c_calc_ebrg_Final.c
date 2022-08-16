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

/* Variables and functions */
 int SAB_BASE_BAUD ; 

__attribute__((used)) static void calc_ebrg(int baud, int *n_ret, int *m_ret)
{
	int	n, m;

	if (baud == 0) {
		*n_ret = 0;
		*m_ret = 0;
		return;
	}
     
	/*
	 * We scale numbers by 10 so that we get better accuracy
	 * without having to use floating point.  Here we increment m
	 * until n is within the valid range.
	 */
	n = (SAB_BASE_BAUD * 10) / baud;
	m = 0;
	while (n >= 640) {
		n = n / 2;
		m++;
	}
	n = (n+5) / 10;
	/*
	 * We try very hard to avoid speeds with M == 0 since they may
	 * not work correctly for XTAL frequences above 10 MHz.
	 */
	if ((m == 0) && ((n & 1) == 0)) {
		n = n / 2;
		m++;
	}
	*n_ret = n - 1;
	*m_ret = m;
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
          int baud = 100;
          int _len_n_ret0 = 1;
          int * n_ret = (int *) malloc(_len_n_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n_ret0; _i0++) {
            n_ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m_ret0 = 1;
          int * m_ret = (int *) malloc(_len_m_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m_ret0; _i0++) {
            m_ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_ebrg(baud,n_ret,m_ret);
          free(n_ret);
          free(m_ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
