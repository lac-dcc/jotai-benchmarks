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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* mbuf_t ;
struct TYPE_4__ {struct TYPE_4__* m_nextpkt; } ;

/* Variables and functions */

void
mbuf_setnextpkt(mbuf_t mbuf, mbuf_t nextpkt)
{
	mbuf->m_nextpkt = nextpkt;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_mbuf(int length, struct TYPE_4__ *aux_mbuf[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_mbuf[0] = walker;
  walker->m_nextpkt = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->m_nextpkt = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->m_nextpkt;
    aux_mbuf[i] = walker;
    walker->m_nextpkt = NULL;
  }

  return head;
}

void _delete_mbuf(struct TYPE_4__ *aux_mbuf[], int aux_mbuf_size) {
  for(int i = 0; i < aux_mbuf_size; i++) 
    if(aux_mbuf[i])
      free(aux_mbuf[i]);
}

struct TYPE_4__ *_allocate_nextpkt(int length, struct TYPE_4__ *aux_nextpkt[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_nextpkt[0] = walker;
  walker->m_nextpkt = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->m_nextpkt = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->m_nextpkt;
    aux_nextpkt[i] = walker;
    walker->m_nextpkt = NULL;
  }

  return head;
}

void _delete_nextpkt(struct TYPE_4__ *aux_nextpkt[], int aux_nextpkt_size) {
  for(int i = 0; i < aux_nextpkt_size; i++) 
    if(aux_nextpkt[i])
      free(aux_nextpkt[i]);
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
          struct TYPE_4__ * aux_mbuf[1];
          struct TYPE_4__ * mbuf = _allocate_mbuf(1, aux_mbuf);
          struct TYPE_4__ * aux_nextpkt[1];
          struct TYPE_4__ * nextpkt = _allocate_nextpkt(1, aux_nextpkt);
          mbuf_setnextpkt(mbuf,nextpkt);
          _delete_mbuf(aux_mbuf, 1);
          _delete_nextpkt(aux_nextpkt, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
