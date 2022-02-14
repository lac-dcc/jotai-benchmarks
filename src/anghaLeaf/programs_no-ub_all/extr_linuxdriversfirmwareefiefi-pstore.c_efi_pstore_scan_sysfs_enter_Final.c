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
struct list_head {int dummy; } ;
struct efivar_entry {int scanning; struct list_head list; } ;

/* Variables and functions */

__attribute__((used)) static void efi_pstore_scan_sysfs_enter(struct efivar_entry *pos,
					struct efivar_entry *next,
					struct list_head *head)
{
	pos->scanning = true;
	if (&next->list != head)
		next->scanning = true;
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

    // big-arr
    case 0:
    {
          int _len_pos0 = 1;
          struct efivar_entry * pos = (struct efivar_entry *) malloc(_len_pos0*sizeof(struct efivar_entry));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos->scanning = ((-2 * (next_i()%2)) + 1) * next_i();
        pos->list.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next0 = 1;
          struct efivar_entry * next = (struct efivar_entry *) malloc(_len_next0*sizeof(struct efivar_entry));
          for(int _i0 = 0; _i0 < _len_next0; _i0++) {
            next->scanning = ((-2 * (next_i()%2)) + 1) * next_i();
        next->list.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_head0 = 1;
          struct list_head * head = (struct list_head *) malloc(_len_head0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          efi_pstore_scan_sysfs_enter(pos,next,head);
          free(pos);
          free(next);
          free(head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
