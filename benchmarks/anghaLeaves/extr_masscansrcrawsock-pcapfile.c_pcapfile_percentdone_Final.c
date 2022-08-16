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
typedef  int uint64_t ;
struct PcapFile {int bytes_read; int file_size; int /*<<< orphan*/ * fp; } ;

/* Variables and functions */

unsigned pcapfile_percentdone(struct PcapFile *capfile, uint64_t *r_bytes_read)
{
    if (r_bytes_read)
        *r_bytes_read = capfile->bytes_read;

    if (capfile->fp == NULL)
        return 100;
    return (unsigned)(capfile->bytes_read*100/capfile->file_size);
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
          int _len_capfile0 = 1;
          struct PcapFile * capfile = (struct PcapFile *) malloc(_len_capfile0*sizeof(struct PcapFile));
          for(int _i0 = 0; _i0 < _len_capfile0; _i0++) {
            capfile[_i0].bytes_read = ((-2 * (next_i()%2)) + 1) * next_i();
        capfile[_i0].file_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_capfile__i0__fp0 = 1;
          capfile[_i0].fp = (int *) malloc(_len_capfile__i0__fp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_capfile__i0__fp0; _j0++) {
            capfile[_i0].fp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r_bytes_read0 = 1;
          int * r_bytes_read = (int *) malloc(_len_r_bytes_read0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_bytes_read0; _i0++) {
            r_bytes_read[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = pcapfile_percentdone(capfile,r_bytes_read);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_capfile0; _aux++) {
          free(capfile[_aux].fp);
          }
          free(capfile);
          free(r_bytes_read);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
