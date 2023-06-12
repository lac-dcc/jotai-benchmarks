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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* pthread_rwlockattr_t ;
struct TYPE_3__ {int pshared; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENOSYS ; 
 int PTHREAD_PROCESS_PRIVATE ; 
 int PTHREAD_PROCESS_SHARED ; 

int
pthread_rwlockattr_setpshared (pthread_rwlockattr_t * attr, int pshared)
     /*
      * ------------------------------------------------------
      * DOCPUBLIC
      *      Rwlocks created with 'attr' can be shared between
      *      processes if pthread_rwlock_t variable is allocated
      *      in memory shared by these processes.
      *
      * PARAMETERS
      *      attr
      *              pointer to an instance of pthread_rwlockattr_t
      *
      *      pshared
      *              must be one of:
      *
      *                      PTHREAD_PROCESS_SHARED
      *                              May be shared if in shared memory
      *
      *                      PTHREAD_PROCESS_PRIVATE
      *                              Cannot be shared.
      *
      * DESCRIPTION
      *      Rwlocks creatd with 'attr' can be shared between
      *      processes if pthread_rwlock_t variable is allocated
      *      in memory shared by these processes.
      *
      *      NOTES:
      *              1)      pshared rwlocks MUST be allocated in shared
      *                      memory.
      *
      *              2)      The following macro is defined if shared rwlocks
      *                      are supported:
      *                              _POSIX_THREAD_PROCESS_SHARED
      *
      * RESULTS
      *              0               successfully set attribute,
      *              EINVAL          'attr' or pshared is invalid,
      *              ENOSYS          PTHREAD_PROCESS_SHARED not supported,
      *
      * ------------------------------------------------------
      */
{
  int result;

  if ((attr != NULL && *attr != NULL) &&
      ((pshared == PTHREAD_PROCESS_SHARED) ||
       (pshared == PTHREAD_PROCESS_PRIVATE)))
    {
      if (pshared == PTHREAD_PROCESS_SHARED)
	{

#if !defined( _POSIX_THREAD_PROCESS_SHARED )

	  result = ENOSYS;
	  pshared = PTHREAD_PROCESS_PRIVATE;

#else

	  result = 0;

#endif /* _POSIX_THREAD_PROCESS_SHARED */

	}
      else
	{
	  result = 0;
	}

      (*attr)->pshared = pshared;
    }
  else
    {
      result = EINVAL;
    }

  return (result);

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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int pshared = 100;
        
          int _len_attr0 = 1;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
                attr[_i0][_i1].pshared = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = pthread_rwlockattr_setpshared(attr,pshared);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
              free(attr[i1]);
          }
          free(attr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int pshared = 255;
        
          int _len_attr0 = 65025;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
                attr[_i0][_i1].pshared = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = pthread_rwlockattr_setpshared(attr,pshared);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
              free(attr[i1]);
          }
          free(attr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int pshared = 10;
        
          int _len_attr0 = 100;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
                attr[_i0][_i1].pshared = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = pthread_rwlockattr_setpshared(attr,pshared);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
              free(attr[i1]);
          }
          free(attr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int pshared = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_attr0 = 1;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
                attr[_i0][_i1].pshared = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = pthread_rwlockattr_setpshared(attr,pshared);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
              free(attr[i1]);
          }
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
