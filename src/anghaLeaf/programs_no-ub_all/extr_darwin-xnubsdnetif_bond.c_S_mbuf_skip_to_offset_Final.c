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
struct mbuf {int m_len; struct mbuf* m_next; } ;
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static struct mbuf *
S_mbuf_skip_to_offset(struct mbuf * m, int32_t * offset)
{
    int			len;

    len = m->m_len;
    while (*offset >= len) {
	*offset -= len;
	m = m->m_next;
	if (m == NULL) {
	    break;
	}
	len = m->m_len;
    }
    return (m);
}


// ------------------------------------------------------------------------- //

struct mbuf *_allocate_m(int length) {
  struct mbuf *head = (struct mbuf *)malloc(sizeof(struct mbuf));

  head->m_len = rand();
  head->m_next = NULL;

  struct mbuf *walker = head;
  for(int i = 1; i < length; i++) {
    walker->m_next = (struct mbuf *)malloc(sizeof(struct mbuf));
    walker = walker->m_next;
    walker->m_len = rand();
    walker->m_next = NULL;
  }

  return head;
}

void _delete_m(struct mbuf * head) {
  if(head->m_next != NULL) _delete_m(head->m_next);
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
          struct mbuf * m = _allocate_m(1);
          int _len_offset0 = 65025;
          int * offset = (int *) malloc(_len_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mbuf * benchRet = S_mbuf_skip_to_offset(m,offset);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_m(m);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
