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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  user_addr_t ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  int32_t ;

/* Variables and functions */
 int ENOTSUP ; 

int proc_listcoalitions(int flavor, int type, user_addr_t buffer,
			uint32_t buffersize, int32_t *retval)
{
#if CONFIG_COALITIONS
	int error = ENOTSUP;
	int coal_type;
	uint32_t elem_size;
	void *coalinfo = NULL;
	uint32_t k_buffersize = 0, copyout_sz = 0;
	int ncoals = 0, ncoals_ = 0;

	/* struct procinfo_coalinfo; */

	switch (flavor) {
	case LISTCOALITIONS_ALL_COALS:
		elem_size = LISTCOALITIONS_ALL_COALS_SIZE;
		coal_type = -1;
		break;
	case LISTCOALITIONS_SINGLE_TYPE:
		elem_size = LISTCOALITIONS_SINGLE_TYPE_SIZE;
		coal_type = type;
		break;
	default:
		return EINVAL;
	}

	/* find the total number of coalitions */
	ncoals = coalitions_get_list(coal_type, NULL, 0);

	if (ncoals == 0 || buffer == 0 || buffersize == 0) {
		/*
		 * user just wants buffer size
		 * or there are no coalitions
		 */
		error = 0;
		*retval = (int)(ncoals * elem_size);
		goto out;
	}

	k_buffersize = ncoals * elem_size;
	coalinfo = kalloc((vm_size_t)k_buffersize);
	if (!coalinfo) {
		error = ENOMEM;
		goto out;
	}
	bzero(coalinfo, k_buffersize);

	switch (flavor) {
	case LISTCOALITIONS_ALL_COALS:
	case LISTCOALITIONS_SINGLE_TYPE:
		ncoals_ = coalitions_get_list(coal_type, coalinfo, ncoals);
		break;
	default:
		panic("memory corruption?!");
	}

	if (ncoals_ == 0) {
		/* all the coalitions disappeared... weird but valid */
		error = 0;
		*retval = 0;
		goto out;
	}

	/*
	 * Some coalitions may have disappeared between our initial check,
	 * and the the actual list acquisition.
	 * Only copy out what we really need.
	 */
	copyout_sz = k_buffersize;
	if (ncoals_ < ncoals)
		copyout_sz = ncoals_ * elem_size;

	/*
	 * copy the list up to user space
	 * (we're guaranteed to have a non-null pointer/size here)
	 */
	error = copyout(coalinfo, buffer,
			copyout_sz < buffersize ? copyout_sz : buffersize);

	if (error == 0)
		*retval = (int)copyout_sz;

out:
	if (coalinfo)
		kfree(coalinfo, k_buffersize);

	return error;
#else
	/* no coalition support */
	(void)flavor;
	(void)type;
	(void)buffer;
	(void)buffersize;
	(void)retval;
	return ENOTSUP;
#endif
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
          int flavor = 100;
          int type = 100;
          int buffer = 100;
          int buffersize = 100;
          int _len_retval0 = 1;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = proc_listcoalitions(flavor,type,buffer,buffersize,retval);
          printf("%d\n", benchRet); 
          free(retval);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flavor = 10;
          int type = 10;
          int buffer = 10;
          int buffersize = 10;
          int _len_retval0 = 100;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = proc_listcoalitions(flavor,type,buffer,buffersize,retval);
          printf("%d\n", benchRet); 
          free(retval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
