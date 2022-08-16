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
typedef  int /*<<< orphan*/  vm_size_t ;
typedef  int /*<<< orphan*/  vm_offset_t ;
typedef  int /*<<< orphan*/  processor_set_t ;
typedef  int /*<<< orphan*/  kern_return_t ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_NOT_SUPPORTED ; 

kern_return_t
processor_set_stack_usage(
	processor_set_t	pset,
	unsigned int	*totalp,
	vm_size_t	*spacep,
	vm_size_t	*residentp,
	vm_size_t	*maxusagep,
	vm_offset_t	*maxstackp)
{
#if !MACH_DEBUG
        return KERN_NOT_SUPPORTED;
#else
	unsigned int total;
	vm_size_t maxusage;
	vm_offset_t maxstack;

	thread_t *thread_list;
	thread_t thread;

	unsigned int actual;	/* this many things */
	unsigned int i;

	vm_size_t size, size_needed;
	void *addr;

	if (pset == PROCESSOR_SET_NULL || pset != &pset0)
		return KERN_INVALID_ARGUMENT;

	size = 0;
	addr = NULL;

	for (;;) {
		lck_mtx_lock(&tasks_threads_lock);

		actual = threads_count;

		/* do we have the memory we need? */

		size_needed = actual * sizeof(thread_t);
		if (size_needed <= size)
			break;

		lck_mtx_unlock(&tasks_threads_lock);

		if (size != 0)
			kfree(addr, size);

		assert(size_needed > 0);
		size = size_needed;

		addr = kalloc(size);
		if (addr == 0)
			return KERN_RESOURCE_SHORTAGE;
	}

	/* OK, have memory and list is locked */
	thread_list = (thread_t *) addr;
	for (i = 0, thread = (thread_t)(void *) queue_first(&threads);
					!queue_end(&threads, (queue_entry_t) thread);
					thread = (thread_t)(void *) queue_next(&thread->threads)) {
		thread_reference_internal(thread);
		thread_list[i++] = thread;
	}
	assert(i <= actual);

	lck_mtx_unlock(&tasks_threads_lock);

	/* calculate maxusage and free thread references */

	total = 0;
	maxusage = 0;
	maxstack = 0;
	while (i > 0) {
		thread_t threadref = thread_list[--i];

		if (threadref->kernel_stack != 0)
			total++;

		thread_deallocate(threadref);
	}

	if (size != 0)
		kfree(addr, size);

	*totalp = total;
	*residentp = *spacep = total * round_page(kernel_stack_size);
	*maxusagep = maxusage;
	*maxstackp = maxstack;
	return KERN_SUCCESS;

#endif	/* MACH_DEBUG */
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
          int pset = 100;
          int _len_totalp0 = 1;
          unsigned int * totalp = (unsigned int *) malloc(_len_totalp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_totalp0; _i0++) {
            totalp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spacep0 = 1;
          int * spacep = (int *) malloc(_len_spacep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_spacep0; _i0++) {
            spacep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_residentp0 = 1;
          int * residentp = (int *) malloc(_len_residentp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_residentp0; _i0++) {
            residentp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxusagep0 = 1;
          int * maxusagep = (int *) malloc(_len_maxusagep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maxusagep0; _i0++) {
            maxusagep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxstackp0 = 1;
          int * maxstackp = (int *) malloc(_len_maxstackp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maxstackp0; _i0++) {
            maxstackp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = processor_set_stack_usage(pset,totalp,spacep,residentp,maxusagep,maxstackp);
          printf("%d\n", benchRet); 
          free(totalp);
          free(spacep);
          free(residentp);
          free(maxusagep);
          free(maxstackp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
