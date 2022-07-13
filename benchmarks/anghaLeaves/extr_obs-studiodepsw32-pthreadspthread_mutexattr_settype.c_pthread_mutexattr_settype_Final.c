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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {int kind; } ;

/* Variables and functions */
 int EINVAL ; 
#define  PTHREAD_MUTEX_ERRORCHECK_NP 130 
#define  PTHREAD_MUTEX_FAST_NP 129 
#define  PTHREAD_MUTEX_RECURSIVE_NP 128 

int
pthread_mutexattr_settype (pthread_mutexattr_t * attr, int kind)
     /*
      * ------------------------------------------------------
      *
      * DOCPUBLIC
      * The pthread_mutexattr_settype() and
      * pthread_mutexattr_gettype() functions  respectively set and
      * get the mutex type  attribute. This attribute is set in  the
      * type parameter to these functions.
      *
      * PARAMETERS
      *      attr
      *              pointer to an instance of pthread_mutexattr_t
      *
      *      type
      *              must be one of:
      *
      *                      PTHREAD_MUTEX_DEFAULT
      *
      *                      PTHREAD_MUTEX_NORMAL
      *
      *                      PTHREAD_MUTEX_ERRORCHECK
      *
      *                      PTHREAD_MUTEX_RECURSIVE
      *
      * DESCRIPTION
      * The pthread_mutexattr_settype() and
      * pthread_mutexattr_gettype() functions  respectively set and
      * get the mutex type  attribute. This attribute is set in  the
      * type  parameter to these functions. The default value of the
      * type  attribute is  PTHREAD_MUTEX_DEFAULT.
      * 
      * The type of mutex is contained in the type  attribute of the
      * mutex attributes. Valid mutex types include:
      *
      * PTHREAD_MUTEX_NORMAL
      *          This type of mutex does  not  detect  deadlock.  A
      *          thread  attempting  to  relock  this mutex without
      *          first unlocking it will  deadlock.  Attempting  to
      *          unlock  a  mutex  locked  by  a  different  thread
      *          results  in  undefined  behavior.  Attempting   to
      *          unlock  an  unlocked  mutex  results  in undefined
      *          behavior.
      * 
      * PTHREAD_MUTEX_ERRORCHECK
      *          This type of  mutex  provides  error  checking.  A
      *          thread  attempting  to  relock  this mutex without
      *          first unlocking it will return with  an  error.  A
      *          thread  attempting to unlock a mutex which another
      *          thread has locked will return  with  an  error.  A
      *          thread attempting to unlock an unlocked mutex will
      *          return with an error.
      *
      * PTHREAD_MUTEX_DEFAULT
      *          Same as PTHREAD_MUTEX_NORMAL.
      * 
      * PTHREAD_MUTEX_RECURSIVE
      *          A thread attempting to relock this  mutex  without
      *          first  unlocking  it  will  succeed in locking the
      *          mutex. The relocking deadlock which can occur with
      *          mutexes of type  PTHREAD_MUTEX_NORMAL cannot occur
      *          with this type of mutex. Multiple  locks  of  this
      *          mutex  require  the  same  number  of  unlocks  to
      *          release  the  mutex  before  another  thread   can
      *          acquire the mutex. A thread attempting to unlock a
      *          mutex which another thread has locked will  return
      *          with  an  error. A thread attempting to  unlock an
      *          unlocked mutex will return  with  an  error.  This
      *          type  of mutex is only supported for mutexes whose
      *          process        shared         attribute         is
      *          PTHREAD_PROCESS_PRIVATE.
      *
      * RESULTS
      *              0               successfully set attribute,
      *              EINVAL          'attr' or 'type' is invalid,
      *
      * ------------------------------------------------------
      */
{
  int result = 0;

  if ((attr != NULL && *attr != NULL))
    {
      switch (kind)
	{
	case PTHREAD_MUTEX_FAST_NP:
	case PTHREAD_MUTEX_RECURSIVE_NP:
	case PTHREAD_MUTEX_ERRORCHECK_NP:
	  (*attr)->kind = kind;
	  break;
	default:
	  result = EINVAL;
	  break;
	}
    }
  else
    {
      result = EINVAL;
    }

  return (result);
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
          int kind = 100;
          int _len_attr0 = 1;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
              attr[_i0][_i1].kind = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = pthread_mutexattr_settype(attr,kind);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
            int _len_attr1 = 1;
              free(attr[i1]);
          }
          free(attr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int kind = 255;
          int _len_attr0 = 65025;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
              attr[_i0][_i1].kind = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = pthread_mutexattr_settype(attr,kind);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
            int _len_attr1 = 1;
              free(attr[i1]);
          }
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int kind = 10;
          int _len_attr0 = 100;
          struct TYPE_3__ ** attr = (struct TYPE_3__ **) malloc(_len_attr0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            int _len_attr1 = 1;
            attr[_i0] = (struct TYPE_3__ *) malloc(_len_attr1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_attr1; _i1++) {
              attr[_i0][_i1].kind = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = pthread_mutexattr_settype(attr,kind);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_attr0; i1++) {
            int _len_attr1 = 1;
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
