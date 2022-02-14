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
typedef  int u32 ;
struct coh901318_lli {int control; struct coh901318_lli* virt_link_addr; } ;

/* Variables and functions */
 int COH901318_CX_CTRL_TC_VALUE_MASK ; 

__attribute__((used)) static inline u32 coh901318_get_bytes_in_lli(struct coh901318_lli *in_lli)
{
	struct coh901318_lli *lli = in_lli;
	u32 bytes = 0;

	while (lli) {
		bytes += lli->control & COH901318_CX_CTRL_TC_VALUE_MASK;
		lli = lli->virt_link_addr;
	}
	return bytes;
}


// ------------------------------------------------------------------------- //

struct coh901318_lli *_allocate_in_lli(int length) {
  struct coh901318_lli *head = (struct coh901318_lli *)malloc(sizeof(struct coh901318_lli));

  head->control = rand();
  head->virt_link_addr = NULL;

  struct coh901318_lli *walker = head;
  for(int i = 1; i < length; i++) {
    walker->virt_link_addr = (struct coh901318_lli *)malloc(sizeof(struct coh901318_lli));
    walker = walker->virt_link_addr;
    walker->control = rand();
    walker->virt_link_addr = NULL;
  }

  return head;
}

void _delete_in_lli(struct coh901318_lli * head) {
  if(head->virt_link_addr != NULL) _delete_in_lli(head->virt_link_addr);
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
          struct coh901318_lli * in_lli = _allocate_in_lli(1);
          int benchRet = coh901318_get_bytes_in_lli(in_lli);
          printf("%d\n", benchRet); 
          _delete_in_lli(in_lli);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
