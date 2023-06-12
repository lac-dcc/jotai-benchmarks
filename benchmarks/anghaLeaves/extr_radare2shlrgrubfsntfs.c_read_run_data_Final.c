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
typedef  unsigned char grub_disk_addr_t ;

/* Variables and functions */

__attribute__((used)) static char *
read_run_data (char *run, int nn, grub_disk_addr_t * val, int sig)
{
  grub_disk_addr_t r, v;

  r = 0;
  v = 1;

  while (nn--)
    {
      r += v * (*(unsigned char *) (run++));
      v <<= 8;
    }

  if ((sig) && (r & (v >> 1)))
    r -= v;

  *val = r;
  return run;
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
          int nn = 255;
        
          int sig = 255;
        
          int _len_run0 = 65025;
          char * run = (char *) malloc(_len_run0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_run0; _i0++) {
            run[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_val0 = 65025;
          unsigned char * val = (unsigned char *) malloc(_len_val0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = read_run_data(run,nn,val,sig);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(run);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int nn = 10;
        
          int sig = 10;
        
          int _len_run0 = 100;
          char * run = (char *) malloc(_len_run0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_run0; _i0++) {
            run[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_val0 = 100;
          unsigned char * val = (unsigned char *) malloc(_len_val0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = read_run_data(run,nn,val,sig);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(run);
          free(val);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
