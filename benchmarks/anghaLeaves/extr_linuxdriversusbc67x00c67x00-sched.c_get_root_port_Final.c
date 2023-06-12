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
       0            linked\n\
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
struct usb_device {int portnum; struct usb_device* parent; } ;

/* Variables and functions */

__attribute__((used)) static inline int get_root_port(struct usb_device *dev)
{
	while (dev->parent->parent)
		dev = dev->parent;
	return dev->portnum;
}

// ------------------------------------------------------------------------- //

struct usb_device *_allocate_dev(int length, struct usb_device *aux_dev[]) {
  struct usb_device *walker = (struct usb_device *)malloc(sizeof(struct usb_device));

  aux_dev[0] = walker;
walker->portnum = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;

  struct usb_device *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct usb_device *)malloc(sizeof(struct usb_device));
    walker = walker->parent;
    aux_dev[i] = walker;
walker->portnum = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
  }

  return head;
}

void _delete_dev(struct usb_device *aux_dev[], int aux_dev_size) {
  for(int i = 0; i < aux_dev_size; i++) 
    if(aux_dev[i])
      free(aux_dev[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // linked
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 79995
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 40003
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 50002
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 50002
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 50002
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 50001
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 50001
          // ------------------------------- 

          struct usb_device * aux_dev[10000];
          struct usb_device * dev = _allocate_dev(10000, aux_dev);
        
          int benchRet = get_root_port(dev);
          printf("%d\n", benchRet); 
          _delete_dev(aux_dev, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
