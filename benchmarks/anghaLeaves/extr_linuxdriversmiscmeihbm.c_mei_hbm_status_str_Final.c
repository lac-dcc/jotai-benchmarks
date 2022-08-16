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
typedef  enum mei_hbm_status { ____Placeholder_mei_hbm_status } mei_hbm_status ;

/* Variables and functions */
#define  MEI_HBMS_ALREADY_EXISTS 135 
#define  MEI_HBMS_ALREADY_STARTED 134 
#define  MEI_HBMS_CLIENT_NOT_FOUND 133 
#define  MEI_HBMS_INVALID_PARAMETER 132 
#define  MEI_HBMS_NOT_ALLOWED 131 
#define  MEI_HBMS_NOT_STARTED 130 
#define  MEI_HBMS_REJECTED 129 
#define  MEI_HBMS_SUCCESS 128 

__attribute__((used)) static const char *mei_hbm_status_str(enum mei_hbm_status status)
{
#define MEI_HBM_STATUS(status) case MEI_HBMS_##status: return #status
	switch (status) {
	MEI_HBM_STATUS(SUCCESS);
	MEI_HBM_STATUS(CLIENT_NOT_FOUND);
	MEI_HBM_STATUS(ALREADY_EXISTS);
	MEI_HBM_STATUS(REJECTED);
	MEI_HBM_STATUS(INVALID_PARAMETER);
	MEI_HBM_STATUS(NOT_ALLOWED);
	MEI_HBM_STATUS(ALREADY_STARTED);
	MEI_HBM_STATUS(NOT_STARTED);
	default: return "unknown";
	}
#undef MEI_HBM_STATUS
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
          enum mei_hbm_status status = 0;
          const char * benchRet = mei_hbm_status_str(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
