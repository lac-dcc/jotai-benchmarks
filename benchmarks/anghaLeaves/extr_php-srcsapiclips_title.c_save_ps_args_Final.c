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
 int save_argc ; 
 char** save_argv ; 

char** save_ps_args(int argc, char** argv)
{
    save_argc = argc;
    save_argv = argv;

#if defined(PS_USE_CLOBBER_ARGV)
    /*
     * If we're going to overwrite the argv area, count the available space.
     * Also move the environment to make additional room.
     */
    {
        char* end_of_area = NULL;
        int non_contiguous_area = 0;
        int i;

        /*
         * check for contiguous argv strings
         */
        for (i = 0; (non_contiguous_area == 0) && (i < argc); i++)
        {
            if (i != 0 && end_of_area + 1 != argv[i])
                non_contiguous_area = 1;
            end_of_area = argv[i] + strlen(argv[i]);
        }

        /*
         * check for contiguous environ strings following argv
         */
        for (i = 0; (non_contiguous_area == 0) && (environ[i] != NULL); i++)
        {
            if (end_of_area + 1 != environ[i])
                non_contiguous_area = 1;
            end_of_area = environ[i] + strlen(environ[i]);
        }

        if (non_contiguous_area != 0)
            goto clobber_error;

        ps_buffer = argv[0];
        ps_buffer_size = end_of_area - argv[0];

        /*
         * move the environment out of the way
         */
        new_environ = (char **) malloc((i + 1) * sizeof(char *));
        frozen_environ = (char **) malloc((i + 1) * sizeof(char *));
        if (!new_environ || !frozen_environ)
            goto clobber_error;
        for (i = 0; environ[i] != NULL; i++)
        {
            new_environ[i] = strdup(environ[i]);
            if (!new_environ[i])
                goto clobber_error;
        }
        new_environ[i] = NULL;
        environ = new_environ;
        memcpy((char *)frozen_environ, (char *)new_environ, sizeof(char *) * (i + 1));

    }
#endif /* PS_USE_CLOBBER_ARGV */

#if defined(PS_USE_CHANGE_ARGV) || defined(PS_USE_CLOBBER_ARGV)
    /*
     * If we're going to change the original argv[] then make a copy for
     * argument parsing purposes.
     *
     * (NB: do NOT think to remove the copying of argv[]!
     * On some platforms, getopt() keeps pointers into the argv array, and
     * will get horribly confused when it is re-called to analyze a subprocess'
     * argument string if the argv storage has been clobbered meanwhile.
     * Other platforms have other dependencies on argv[].)
     */
    {
        char** new_argv;
        int i;

        new_argv = (char **) malloc((argc + 1) * sizeof(char *));
        if (!new_argv)
            goto clobber_error;
        for (i = 0; i < argc; i++)
        {
            new_argv[i] = strdup(argv[i]);
            if (!new_argv[i]) {
                free(new_argv);
                goto clobber_error;
            }
        }
        new_argv[argc] = NULL;

#if defined(DARWIN)
        /*
         * Darwin (and perhaps other NeXT-derived platforms?) has a static
         * copy of the argv pointer, which we may fix like so:
         */
        *_NSGetArgv() = new_argv;
#endif

        argv = new_argv;

    }
#endif /* PS_USE_CHANGE_ARGV or PS_USE_CLOBBER_ARGV */

#if defined(PS_USE_CLOBBER_ARGV)
    {
        /* make extra argv slots point at end_of_area (a NUL) */
        int i;
        for (i = 1; i < save_argc; i++)
            save_argv[i] = ps_buffer + ps_buffer_size;
    }
#endif /* PS_USE_CLOBBER_ARGV */

#ifdef PS_USE_CHANGE_ARGV
    save_argv[0] = ps_buffer; /* ps_buffer here is a static const array of size PS_BUFFER_SIZE */
    save_argv[1] = NULL;
#endif /* PS_USE_CHANGE_ARGV */

    return argv;

#if defined(PS_USE_CHANGE_ARGV) || defined(PS_USE_CLOBBER_ARGV)
clobber_error:
    /* probably can't happen?!
     * if we ever get here, argv still points to originally passed
     * in argument
     */
    save_argv = NULL;
    save_argc = 0;
    ps_buffer = NULL;
    ps_buffer_size = 0;
    return argv;
#endif /* PS_USE_CHANGE_ARGV or PS_USE_CLOBBER_ARGV */
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
          int argc = 100;
          int _len_argv0 = 1;
          char ** argv = (char **) malloc(_len_argv0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_argv0; _i0++) {
            int _len_argv1 = 1;
            argv[_i0] = (char *) malloc(_len_argv1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_argv1; _i1++) {
              argv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char ** benchRet = save_ps_args(argc,argv);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
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
