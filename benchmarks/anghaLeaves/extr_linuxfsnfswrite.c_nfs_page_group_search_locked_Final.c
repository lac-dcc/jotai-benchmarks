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
       0            linked\n\
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
struct nfs_page {unsigned int wb_pgbase; unsigned int wb_bytes; struct nfs_page* wb_this_page; } ;

/* Variables and functions */

__attribute__((used)) static struct nfs_page *
nfs_page_group_search_locked(struct nfs_page *head, unsigned int page_offset)
{
	struct nfs_page *req;

	req = head;
	do {
		if (page_offset >= req->wb_pgbase &&
		    page_offset < (req->wb_pgbase + req->wb_bytes))
			return req;

		req = req->wb_this_page;
	} while (req != head);

	return NULL;
}


// ------------------------------------------------------------------------- //

struct nfs_page *_allocate_head(int length, struct nfs_page *aux_head[]) {
  struct nfs_page *walker = (struct nfs_page *)malloc(sizeof(struct nfs_page));

  aux_head[0] = walker;
walker->wb_pgbase = ((-2 * (next_i()%2)) + 1) * next_i();
walker->wb_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->wb_this_page = NULL;

  struct nfs_page *head = walker;
  for(int i = 1; i < length; i++) {
    walker->wb_this_page = (struct nfs_page *)malloc(sizeof(struct nfs_page));
    walker = walker->wb_this_page;
    aux_head[i] = walker;
walker->wb_pgbase = ((-2 * (next_i()%2)) + 1) * next_i();
walker->wb_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->wb_this_page = NULL;
  }

  return head;
}

void _delete_head(struct nfs_page *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
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
          unsigned int page_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          struct nfs_page * aux_head[10000];
          struct nfs_page * head = _allocate_head(10000, aux_head);
          struct nfs_page * benchRet = nfs_page_group_search_locked(head,page_offset);
          printf("%u\n", (*benchRet).wb_pgbase);
          printf("%u\n", (*benchRet).wb_bytes);
          _delete_head(aux_head, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
