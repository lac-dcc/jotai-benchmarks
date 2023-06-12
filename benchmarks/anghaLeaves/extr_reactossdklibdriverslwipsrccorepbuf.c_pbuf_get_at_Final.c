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
       0            empty\n\
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
typedef  int /*<<< orphan*/  u8_t ;
typedef  size_t u16_t ;
struct pbuf {size_t len; scalar_t__ payload; struct pbuf* next; } ;

/* Variables and functions */

u8_t
pbuf_get_at(struct pbuf* p, u16_t offset)
{
  u16_t copy_from = offset;
  struct pbuf* q = p;

  /* get the correct pbuf */
  while ((q != NULL) && (q->len <= copy_from)) {
    copy_from -= q->len;
    q = q->next;
  }
  /* return requested data if pbuf is OK */
  if ((q != NULL) && (q->len > copy_from)) {
    return ((u8_t*)q->payload)[copy_from];
  }
  return 0;
}

// ------------------------------------------------------------------------- //

struct pbuf *_allocate_p(int length, struct pbuf *aux_p[]) {
  struct pbuf *walker = (struct pbuf *)malloc(sizeof(struct pbuf));

  aux_p[0] = walker;
walker->len = ((-2 * (next_i()%2)) + 1) * next_i();
walker->payload = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct pbuf *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct pbuf *)malloc(sizeof(struct pbuf));
    walker = walker->next;
    aux_p[i] = walker;
walker->len = ((-2 * (next_i()%2)) + 1) * next_i();
walker->payload = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_p(struct pbuf *aux_p[], int aux_p_size) {
  for(int i = 0; i < aux_p_size; i++) 
    if(aux_p[i])
      free(aux_p[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          unsigned long offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct pbuf * aux_p[1];
          struct pbuf * p = _allocate_p(1, aux_p);
        
          int benchRet = pbuf_get_at(p,offset);
          printf("%d\n", benchRet); 
          _delete_p(aux_p, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
