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
       0            big-arr\n\
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
struct ipmmu_vmsa_device {struct ipmmu_vmsa_device* root; } ;

/* Variables and functions */

__attribute__((used)) static bool ipmmu_is_root(struct ipmmu_vmsa_device *mmu)
{
	return mmu->root == mmu;
}


// ------------------------------------------------------------------------- //

struct ipmmu_vmsa_device *_allocate_mmu(int length) {
  struct ipmmu_vmsa_device *head = (struct ipmmu_vmsa_device *)malloc(sizeof(struct ipmmu_vmsa_device));

  head->root = NULL;

  struct ipmmu_vmsa_device *walker = head;
  for(int i = 1; i < length; i++) {
    walker->root = (struct ipmmu_vmsa_device *)malloc(sizeof(struct ipmmu_vmsa_device));
    walker = walker->root;
    walker->root = NULL;
  }

  return head;
}

void _delete_mmu(struct ipmmu_vmsa_device * head) {
  if(head->root != NULL) _delete_mmu(head->root);
  free(head);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          struct ipmmu_vmsa_device * mmu = _allocate_mmu(1);
          int benchRet = ipmmu_is_root(mmu);
          printf("%d\n", benchRet); 
          _delete_mmu(mmu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
