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
struct TYPE_3__ {unsigned int* __val; } ;
typedef  TYPE_1__ sem_t ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 unsigned int SEM_VALUE_MAX ; 
 int /*<<< orphan*/  errno ; 

int sem_init(sem_t *sem, int pshared, unsigned value)
{
	if (value > SEM_VALUE_MAX) {
		errno = EINVAL;
		return -1;
	}
	sem->__val[0] = value;
	sem->__val[1] = 0;
	sem->__val[2] = pshared ? 0 : 128;
	return 0;
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
          int pshared = 100;
        
          unsigned int value = 100;
        
          int _len_sem0 = 1;
          struct TYPE_3__ * sem = (struct TYPE_3__ *) malloc(_len_sem0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sem0; _i0++) {
              int _len_sem__i0____val0 = 1;
          sem[_i0].__val = (unsigned int *) malloc(_len_sem__i0____val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sem__i0____val0; _j0++) {
            sem[_i0].__val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = sem_init(sem,pshared,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sem0; _aux++) {
          free(sem[_aux].__val);
          }
          free(sem);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pshared = 255;
        
          unsigned int value = 255;
        
          int _len_sem0 = 65025;
          struct TYPE_3__ * sem = (struct TYPE_3__ *) malloc(_len_sem0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sem0; _i0++) {
              int _len_sem__i0____val0 = 1;
          sem[_i0].__val = (unsigned int *) malloc(_len_sem__i0____val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sem__i0____val0; _j0++) {
            sem[_i0].__val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = sem_init(sem,pshared,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sem0; _aux++) {
          free(sem[_aux].__val);
          }
          free(sem);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pshared = 10;
        
          unsigned int value = 10;
        
          int _len_sem0 = 100;
          struct TYPE_3__ * sem = (struct TYPE_3__ *) malloc(_len_sem0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sem0; _i0++) {
              int _len_sem__i0____val0 = 1;
          sem[_i0].__val = (unsigned int *) malloc(_len_sem__i0____val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sem__i0____val0; _j0++) {
            sem[_i0].__val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = sem_init(sem,pshared,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sem0; _aux++) {
          free(sem[_aux].__val);
          }
          free(sem);
        
        break;
    }
    // empty
    case 3:
    {
          int pshared = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sem0 = 1;
          struct TYPE_3__ * sem = (struct TYPE_3__ *) malloc(_len_sem0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sem0; _i0++) {
              int _len_sem__i0____val0 = 1;
          sem[_i0].__val = (unsigned int *) malloc(_len_sem__i0____val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sem__i0____val0; _j0++) {
            sem[_i0].__val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = sem_init(sem,pshared,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sem0; _aux++) {
          free(sem[_aux].__val);
          }
          free(sem);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
