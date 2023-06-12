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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* mbuf_t ;
typedef  int /*<<< orphan*/  errno_t ;
struct TYPE_4__ {int pkt_flags; uintptr_t drv_tx_compl_arg; uintptr_t drv_tx_compl_data; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int M_PKTHDR ; 
 int PKTF_DRIVER_MTAG ; 

errno_t
mbuf_get_tx_compl_data(mbuf_t m, uintptr_t *arg, uintptr_t *data)
{
	if (m == NULL || !(m->m_flags & M_PKTHDR) || arg == NULL ||
	    data == NULL)
		return (EINVAL);

	if ((m->m_pkthdr.pkt_flags & PKTF_DRIVER_MTAG) == 0) {
		*arg = 0;
		*data = 0;
	} else {
		*arg = m->m_pkthdr.drv_tx_compl_arg;
		*data = m->m_pkthdr.drv_tx_compl_data;
	}
	return (0);
}

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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_m0 = 65025;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.drv_tx_compl_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.drv_tx_compl_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_arg0 = 65025;
          unsigned long * arg = (unsigned long *) malloc(_len_arg0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_data0 = 65025;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mbuf_get_tx_compl_data(m,arg,data);
          printf("%d\n", benchRet); 
          free(m);
          free(arg);
          free(data);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_m0 = 100;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.drv_tx_compl_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.drv_tx_compl_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_arg0 = 100;
          unsigned long * arg = (unsigned long *) malloc(_len_arg0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_data0 = 100;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mbuf_get_tx_compl_data(m,arg,data);
          printf("%d\n", benchRet); 
          free(m);
          free(arg);
          free(data);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_m0 = 1;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.drv_tx_compl_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].m_pkthdr.drv_tx_compl_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_arg0 = 1;
          unsigned long * arg = (unsigned long *) malloc(_len_arg0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_data0 = 1;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mbuf_get_tx_compl_data(m,arg,data);
          printf("%d\n", benchRet); 
          free(m);
          free(arg);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
