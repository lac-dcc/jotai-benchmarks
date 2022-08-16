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
typedef  enum mei_cl_connect_status { ____Placeholder_mei_cl_connect_status } mei_cl_connect_status ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
 int ENOTTY ; 
#define  MEI_CL_CONN_ALREADY_STARTED 133 
#define  MEI_CL_CONN_MESSAGE_SMALL 132 
#define  MEI_CL_CONN_NOT_ALLOWED 131 
#define  MEI_CL_CONN_NOT_FOUND 130 
#define  MEI_CL_CONN_OUT_OF_RESOURCES 129 
#define  MEI_CL_CONN_SUCCESS 128 

__attribute__((used)) static int mei_cl_conn_status_to_errno(enum mei_cl_connect_status status)
{
	switch (status) {
	case MEI_CL_CONN_SUCCESS:          return 0;
	case MEI_CL_CONN_NOT_FOUND:        return -ENOTTY;
	case MEI_CL_CONN_ALREADY_STARTED:  return -EBUSY;
	case MEI_CL_CONN_OUT_OF_RESOURCES: return -EBUSY;
	case MEI_CL_CONN_MESSAGE_SMALL:    return -EINVAL;
	case MEI_CL_CONN_NOT_ALLOWED:      return -EBUSY;
	default:                           return -EINVAL;
	}
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
          enum mei_cl_connect_status status = 0;
          int benchRet = mei_cl_conn_status_to_errno(status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
