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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  pthread_attr_t ;

/* Variables and functions */
 int ENOSYS ; 

int
pthread_attr_setstackaddr (pthread_attr_t * attr, void *stackaddr)
     /*
      * ------------------------------------------------------
      * DOCPUBLIC
      *      Threads created with 'attr' will run on the stack
      *      starting at 'stackaddr'.
      *      Stack must be at least PTHREAD_STACK_MIN bytes.
      *
      * PARAMETERS
      *      attr
      *              pointer to an instance of pthread_attr_t
      *
      *      stackaddr
      *              the address of the stack to use
      *
      *
      * DESCRIPTION
      *      Threads created with 'attr' will run on the stack
      *      starting at 'stackaddr'.
      *      Stack must be at least PTHREAD_STACK_MIN bytes.
      *
      *      NOTES:
      *              1)      Function supported only if this macro is
      *                      defined:
      *
      *                              _POSIX_THREAD_ATTR_STACKADDR
      *
      *              2)      Create only one thread for each stack
      *                      address..
      *
      *              3)      Ensure that stackaddr is aligned.
      *
      * RESULTS
      *              0               successfully set stack address,
      *              EINVAL          'attr' is invalid
      *              ENOSYS          function not supported
      *
      * ------------------------------------------------------
      */
{
#if defined( _POSIX_THREAD_ATTR_STACKADDR )

  if (ptw32_is_attr (attr) != 0)
    {
      return EINVAL;
    }

  (*attr)->stackaddr = stackaddr;
  return 0;

#else

  return ENOSYS;

#endif /* _POSIX_THREAD_ATTR_STACKADDR */
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
          int _len_attr0 = 1;
          int * attr = (int *) malloc(_len_attr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * stackaddr;
          int benchRet = pthread_attr_setstackaddr(attr,stackaddr);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_attr0 = 65025;
          int * attr = (int *) malloc(_len_attr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * stackaddr;
          int benchRet = pthread_attr_setstackaddr(attr,stackaddr);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_attr0 = 100;
          int * attr = (int *) malloc(_len_attr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * stackaddr;
          int benchRet = pthread_attr_setstackaddr(attr,stackaddr);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
