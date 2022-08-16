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
struct ftide010 {int dummy; } ;
struct ata_port_info {int dummy; } ;

/* Variables and functions */
 int ENOTSUPP ; 

__attribute__((used)) static int pata_ftide010_gemini_init(struct ftide010 *ftide,
				     struct ata_port_info *pi,
				     bool is_ata1)
{
	return -ENOTSUPP;
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
          int is_ata1 = 100;
          int _len_ftide0 = 1;
          struct ftide010 * ftide = (struct ftide010 *) malloc(_len_ftide0*sizeof(struct ftide010));
          for(int _i0 = 0; _i0 < _len_ftide0; _i0++) {
            ftide[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pi0 = 1;
          struct ata_port_info * pi = (struct ata_port_info *) malloc(_len_pi0*sizeof(struct ata_port_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pata_ftide010_gemini_init(ftide,pi,is_ata1);
          printf("%d\n", benchRet); 
          free(ftide);
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
