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
 int ECRYPTFS_SUPPORTED_FILE_VERSION ; 
 int ECRYPTFS_VERSION_MAJOR ; 
 int ECRYPTFS_VERSION_MINOR ; 

void ecryptfs_get_versions(int *major, int *minor, int *file_version)
{
	*major = ECRYPTFS_VERSION_MAJOR;
	*minor = ECRYPTFS_VERSION_MINOR;
	if (file_version)
		*file_version = ECRYPTFS_SUPPORTED_FILE_VERSION;
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
          int _len_major0 = 1;
          int * major = (int *) malloc(_len_major0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_major0; _i0++) {
            major[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_minor0 = 1;
          int * minor = (int *) malloc(_len_minor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_minor0; _i0++) {
            minor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file_version0 = 1;
          int * file_version = (int *) malloc(_len_file_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_file_version0; _i0++) {
            file_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ecryptfs_get_versions(major,minor,file_version);
          free(major);
          free(minor);
          free(file_version);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
