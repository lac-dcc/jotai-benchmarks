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
struct vmbus_channel {struct hv_device* device_obj; struct vmbus_channel* primary_channel; } ;
struct hv_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct hv_device *netvsc_channel_to_device(struct vmbus_channel *channel)
{
	struct vmbus_channel *primary = channel->primary_channel;

	return primary ? primary->device_obj : channel->device_obj;
}


// ------------------------------------------------------------------------- //

struct vmbus_channel *_allocate_channel(int length) {
  struct vmbus_channel *head = (struct vmbus_channel *)malloc(sizeof(struct vmbus_channel));

  head->device_obj = rand();
  head->primary_channel = NULL;

  struct vmbus_channel *walker = head;
  for(int i = 1; i < length; i++) {
    walker->primary_channel = (struct vmbus_channel *)malloc(sizeof(struct vmbus_channel));
    walker = walker->primary_channel;
    walker->device_obj = rand();
    walker->primary_channel = NULL;
  }

  return head;
}

void _delete_channel(struct vmbus_channel * head) {
  if(head->primary_channel != NULL) _delete_channel(head->primary_channel);
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
          struct vmbus_channel * channel = _allocate_channel(1);
          struct hv_device * benchRet = netvsc_channel_to_device(channel);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_channel(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
