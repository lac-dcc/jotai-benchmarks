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
 char* progname ; 

extern void
tuklib_progname_init(char **argv)
{
#ifdef TUKLIB_DOSLIKE
	// On these systems, argv[0] always has the full path and .exe
	// suffix even if the user just types the plain program name.
	// We modify argv[0] to make it nicer to read.

	// Strip the leading path.
	char *p = argv[0] + strlen(argv[0]);
	while (argv[0] < p && p[-1] != '/' && p[-1] != '\\')
		--p;

	argv[0] = p;

	// Strip the .exe suffix.
	p = strrchr(p, '.');
	if (p != NULL)
		*p = '\0';

	// Make it lowercase.
	for (p = argv[0]; *p != '\0'; ++p)
		if (*p >= 'A' && *p <= 'Z')
			*p = *p - 'A' + 'a';
#endif

	progname = argv[0];
	return;
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
          int _len_argv0 = 1;
          char ** argv = (char **) malloc(_len_argv0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_argv0; _i0++) {
            int _len_argv1 = 1;
            argv[_i0] = (char *) malloc(_len_argv1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_argv1; _i1++) {
              argv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          tuklib_progname_init(argv);
          for(int i1 = 0; i1 < _len_argv0; i1++) {
            int _len_argv1 = 1;
              free(argv[i1]);
          }
          free(argv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
