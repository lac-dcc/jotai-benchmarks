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

/* Type definitions */

/* Variables and functions */
#define  PCIBIOS_BAD_REGISTER_NUMBER 132 
#define  PCIBIOS_DEVICE_NOT_FOUND 131 
#define  PCIBIOS_FUNC_NOT_SUPPORTED 130 
#define  PCIBIOS_SET_FAILED 129 
#define  PCIBIOS_SUCCESSFUL 128 
 int XEN_PCI_ERR_access_denied ; 
 int XEN_PCI_ERR_dev_not_found ; 
 int XEN_PCI_ERR_invalid_offset ; 
 int XEN_PCI_ERR_not_implemented ; 
 int XEN_PCI_ERR_success ; 

__attribute__((used)) static int xen_pcibios_err_to_errno(int err)
{
	switch (err) {
	case PCIBIOS_SUCCESSFUL:
		return XEN_PCI_ERR_success;
	case PCIBIOS_DEVICE_NOT_FOUND:
		return XEN_PCI_ERR_dev_not_found;
	case PCIBIOS_BAD_REGISTER_NUMBER:
		return XEN_PCI_ERR_invalid_offset;
	case PCIBIOS_FUNC_NOT_SUPPORTED:
		return XEN_PCI_ERR_not_implemented;
	case PCIBIOS_SET_FAILED:
		return XEN_PCI_ERR_access_denied;
	}
	return err;
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
          int err = 100;
          int benchRet = xen_pcibios_err_to_errno(err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int err = 255;
          int benchRet = xen_pcibios_err_to_errno(err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int err = 10;
          int benchRet = xen_pcibios_err_to_errno(err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
