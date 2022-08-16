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
typedef  int /*<<< orphan*/  qtype ;

/* Variables and functions */
 int /*<<< orphan*/  Q_DEF ; 
 int /*<<< orphan*/  Q_NEWS ; 
 int /*<<< orphan*/  Q_WATCHCAT ; 

qtype get_qtype (char *qname) {
  if (qname[0] == 'w' && qname[1] == '_') {
    return Q_WATCHCAT;
  }
  if (qname[0] == 'n' && qname[1] == '_') {
    return Q_NEWS;
  }
  return Q_DEF;
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
          int _len_qname0 = 1;
          char * qname = (char *) malloc(_len_qname0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_qname0; _i0++) {
            qname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_qtype(qname);
          printf("%d\n", benchRet); 
          free(qname);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_qname0 = 100;
          char * qname = (char *) malloc(_len_qname0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_qname0; _i0++) {
            qname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_qtype(qname);
          printf("%d\n", benchRet); 
          free(qname);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
