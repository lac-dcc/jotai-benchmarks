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
struct v4l2_device {int dummy; } ;
struct v4l2_async_notifier {struct v4l2_device* v4l2_dev; struct v4l2_async_notifier* parent; } ;

/* Variables and functions */

__attribute__((used)) static struct v4l2_device *v4l2_async_notifier_find_v4l2_dev(
	struct v4l2_async_notifier *notifier)
{
	while (notifier->parent)
		notifier = notifier->parent;

	return notifier->v4l2_dev;
}


// ------------------------------------------------------------------------- //

struct v4l2_async_notifier *_allocate_notifier(int length) {
  struct v4l2_async_notifier *head = (struct v4l2_async_notifier *)malloc(sizeof(struct v4l2_async_notifier));

  head->v4l2_dev = rand();
  head->parent = NULL;

  struct v4l2_async_notifier *walker = head;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct v4l2_async_notifier *)malloc(sizeof(struct v4l2_async_notifier));
    walker = walker->parent;
    walker->v4l2_dev = rand();
    walker->parent = NULL;
  }

  return head;
}

void _delete_notifier(struct v4l2_async_notifier * head) {
  if(head->parent != NULL) _delete_notifier(head->parent);
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
          struct v4l2_async_notifier * notifier = _allocate_notifier(1);
          struct v4l2_device * benchRet = v4l2_async_notifier_find_v4l2_dev(notifier);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_notifier(notifier);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
