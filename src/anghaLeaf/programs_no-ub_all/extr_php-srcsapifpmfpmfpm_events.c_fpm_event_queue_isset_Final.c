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
struct fpm_event_s {int dummy; } ;
struct fpm_event_queue_s {struct fpm_event_queue_s* next; struct fpm_event_s* ev; } ;

/* Variables and functions */

__attribute__((used)) static struct fpm_event_s *fpm_event_queue_isset(struct fpm_event_queue_s *queue, struct fpm_event_s *ev) /* {{{ */
{
	if (!ev) {
		return NULL;
	}

	while (queue) {
		if (queue->ev == ev) {
			return ev;
		}
		queue = queue->next;
	}

	return NULL;
}


// ------------------------------------------------------------------------- //

struct fpm_event_queue_s *_allocate_queue(int length) {
  struct fpm_event_queue_s *head = (struct fpm_event_queue_s *)malloc(sizeof(struct fpm_event_queue_s));

  head->next = NULL;
  head->ev = rand();

  struct fpm_event_queue_s *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct fpm_event_queue_s *)malloc(sizeof(struct fpm_event_queue_s));
    walker = walker->next;
    walker->next = NULL;
    walker->ev = rand();
  }

  return head;
}

void _delete_queue(struct fpm_event_queue_s * head) {
  if(head->next != NULL) _delete_queue(head->next);
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
          struct fpm_event_queue_s * queue = _allocate_queue(1);
          int _len_ev0 = 1;
          struct fpm_event_s * ev = (struct fpm_event_s *) malloc(_len_ev0*sizeof(struct fpm_event_s));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
            ev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fpm_event_s * benchRet = fpm_event_queue_isset(queue,ev);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_queue(queue);
          free(ev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
