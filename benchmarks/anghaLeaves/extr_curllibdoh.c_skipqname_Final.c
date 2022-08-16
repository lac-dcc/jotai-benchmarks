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
typedef  int /*<<< orphan*/  DOHcode ;

/* Variables and functions */
 int /*<<< orphan*/  DOH_DNS_BAD_LABEL ; 
 int /*<<< orphan*/  DOH_DNS_OUT_OF_RANGE ; 
 int /*<<< orphan*/  DOH_OK ; 

__attribute__((used)) static DOHcode skipqname(unsigned char *doh, size_t dohlen,
                         unsigned int *indexp)
{
  unsigned char length;
  do {
    if(dohlen < (*indexp + 1))
      return DOH_DNS_OUT_OF_RANGE;
    length = doh[*indexp];
    if((length & 0xc0) == 0xc0) {
      /* name pointer, advance over it and be done */
      if(dohlen < (*indexp + 2))
        return DOH_DNS_OUT_OF_RANGE;
      *indexp += 2;
      break;
    }
    if(length & 0xc0)
      return DOH_DNS_BAD_LABEL;
    if(dohlen < (*indexp + 1 + length))
      return DOH_DNS_OUT_OF_RANGE;
    *indexp += 1 + length;
  } while(length);
  return DOH_OK;
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
          unsigned long dohlen = 100;
          int _len_doh0 = 1;
          unsigned char * doh = (unsigned char *) malloc(_len_doh0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_doh0; _i0++) {
            doh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_indexp0 = 1;
          unsigned int * indexp = (unsigned int *) malloc(_len_indexp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_indexp0; _i0++) {
            indexp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skipqname(doh,dohlen,indexp);
          printf("%d\n", benchRet); 
          free(doh);
          free(indexp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
