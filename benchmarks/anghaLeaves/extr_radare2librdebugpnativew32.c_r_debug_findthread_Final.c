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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ULONG_PTR ;
struct TYPE_2__ {int tid; int pid; } ;
typedef  int /*<<< orphan*/  THREAD_ITEM ;
typedef  TYPE_1__* PTHREAD_ITEM ;

/* Variables and functions */
 scalar_t__ lstThread ; 

__attribute__((used)) static void * r_debug_findthread (int pid, int tid) {
	PTHREAD_ITEM threadPtr = NULL;
	if (lstThread) {
		threadPtr = (PTHREAD_ITEM)lstThread;
		while (threadPtr->tid != 0) {
			if (threadPtr->pid == pid) {
				if (threadPtr->tid == tid) {
					return ((void*)threadPtr);
				}
			}
			threadPtr = (PTHREAD_ITEM)((ULONG_PTR)threadPtr + sizeof (THREAD_ITEM));
		}
	}
	return NULL;
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
          int pid = 100;
          int tid = 100;
          void * benchRet = r_debug_findthread(pid,tid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pid = 255;
          int tid = 255;
          void * benchRet = r_debug_findthread(pid,tid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pid = 10;
          int tid = 10;
          void * benchRet = r_debug_findthread(pid,tid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
