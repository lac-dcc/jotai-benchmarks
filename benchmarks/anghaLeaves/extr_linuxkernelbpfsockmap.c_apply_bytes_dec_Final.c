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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct smap_psock {int apply_bytes; } ;

/* Variables and functions */

__attribute__((used)) static void apply_bytes_dec(struct smap_psock *psock, int i)
{
	if (psock->apply_bytes) {
		if (psock->apply_bytes < i)
			psock->apply_bytes = 0;
		else
			psock->apply_bytes -= i;
	}
}

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
          int i = 100;
        
          int _len_psock0 = 1;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
              psock[_i0].apply_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          apply_bytes_dec(psock,i);
          free(psock);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
        
          int _len_psock0 = 65025;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
              psock[_i0].apply_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          apply_bytes_dec(psock,i);
          free(psock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
        
          int _len_psock0 = 100;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
              psock[_i0].apply_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          apply_bytes_dec(psock,i);
          free(psock);
        
        break;
    }
    // empty
    case 3:
    {
          int i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_psock0 = 1;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
              psock[_i0].apply_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          apply_bytes_dec(psock,i);
          free(psock);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
