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
struct crlf_attrs {scalar_t__ auto_crlf; scalar_t__ core_eol; } ;

/* Variables and functions */
 scalar_t__ GIT_AUTO_CRLF_INPUT ; 
 scalar_t__ GIT_AUTO_CRLF_TRUE ; 
 scalar_t__ GIT_EOL_CRLF ; 
 scalar_t__ GIT_EOL_NATIVE ; 
 scalar_t__ GIT_EOL_UNSET ; 

__attribute__((used)) static int text_eol_is_crlf(struct crlf_attrs *ca)
{
	if (ca->auto_crlf == GIT_AUTO_CRLF_TRUE)
		return 1;
	else if (ca->auto_crlf == GIT_AUTO_CRLF_INPUT)
		return 0;

	if (ca->core_eol == GIT_EOL_CRLF)
		return 1;
	if (ca->core_eol == GIT_EOL_UNSET && GIT_EOL_NATIVE == GIT_EOL_CRLF)
		return 1;

	return 0;
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
          int _len_ca0 = 1;
          struct crlf_attrs * ca = (struct crlf_attrs *) malloc(_len_ca0*sizeof(struct crlf_attrs));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca[_i0].auto_crlf = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].core_eol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = text_eol_is_crlf(ca);
          printf("%d\n", benchRet); 
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
