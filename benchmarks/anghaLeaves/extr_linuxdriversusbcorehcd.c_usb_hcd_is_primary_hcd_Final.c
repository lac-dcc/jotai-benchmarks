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
struct usb_hcd {struct usb_hcd* primary_hcd; } ;

/* Variables and functions */

int usb_hcd_is_primary_hcd(struct usb_hcd *hcd)
{
	if (!hcd->primary_hcd)
		return 1;
	return hcd == hcd->primary_hcd;
}


// ------------------------------------------------------------------------- //

struct usb_hcd *_allocate_hcd(int length, struct usb_hcd *aux_hcd[]) {
  struct usb_hcd *walker = (struct usb_hcd *)malloc(sizeof(struct usb_hcd));

  aux_hcd[0] = walker;
  walker->primary_hcd = NULL;

  struct usb_hcd *head = walker;
  for(int i = 1; i < length; i++) {
    walker->primary_hcd = (struct usb_hcd *)malloc(sizeof(struct usb_hcd));
    walker = walker->primary_hcd;
    aux_hcd[i] = walker;
    walker->primary_hcd = NULL;
  }

  return head;
}

void _delete_hcd(struct usb_hcd *aux_hcd[], int aux_hcd_size) {
  for(int i = 0; i < aux_hcd_size; i++) 
    if(aux_hcd[i])
      free(aux_hcd[i]);
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
          struct usb_hcd * aux_hcd[1];
          struct usb_hcd * hcd = _allocate_hcd(1, aux_hcd);
          int benchRet = usb_hcd_is_primary_hcd(hcd);
          printf("%d\n", benchRet); 
          _delete_hcd(aux_hcd, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
