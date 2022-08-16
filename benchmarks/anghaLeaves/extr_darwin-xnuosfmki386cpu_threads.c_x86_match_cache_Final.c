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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ maxcpus; scalar_t__ type; scalar_t__ level; scalar_t__ partitions; scalar_t__ line_size; scalar_t__ cache_size; struct TYPE_5__* next; } ;
typedef  TYPE_1__ x86_cpu_cache_t ;

/* Variables and functions */

__attribute__((used)) static x86_cpu_cache_t *
x86_match_cache(x86_cpu_cache_t *list, x86_cpu_cache_t *matcher)
{
    x86_cpu_cache_t	*cur_cache;
 
    cur_cache = list;
    while (cur_cache != NULL) {
	if (cur_cache->maxcpus  == matcher->maxcpus
	    && cur_cache->type  == matcher->type
	    && cur_cache->level == matcher->level
	    && cur_cache->partitions == matcher->partitions
	    && cur_cache->line_size  == matcher->line_size
	    && cur_cache->cache_size == matcher->cache_size)
	    break;

	cur_cache = cur_cache->next;
    }

    return(cur_cache);
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_list(int length, struct TYPE_5__ *aux_list[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_list[0] = walker;
walker->maxcpus = ((-2 * (next_i()%2)) + 1) * next_i();
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->partitions = ((-2 * (next_i()%2)) + 1) * next_i();
walker->line_size = ((-2 * (next_i()%2)) + 1) * next_i();
walker->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_list[i] = walker;
walker->maxcpus = ((-2 * (next_i()%2)) + 1) * next_i();
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->partitions = ((-2 * (next_i()%2)) + 1) * next_i();
walker->line_size = ((-2 * (next_i()%2)) + 1) * next_i();
walker->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct TYPE_5__ *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
}

struct TYPE_5__ *_allocate_matcher(int length, struct TYPE_5__ *aux_matcher[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_matcher[0] = walker;
walker->maxcpus = ((-2 * (next_i()%2)) + 1) * next_i();
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->partitions = ((-2 * (next_i()%2)) + 1) * next_i();
walker->line_size = ((-2 * (next_i()%2)) + 1) * next_i();
walker->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_matcher[i] = walker;
walker->maxcpus = ((-2 * (next_i()%2)) + 1) * next_i();
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->partitions = ((-2 * (next_i()%2)) + 1) * next_i();
walker->line_size = ((-2 * (next_i()%2)) + 1) * next_i();
walker->cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_matcher(struct TYPE_5__ *aux_matcher[], int aux_matcher_size) {
  for(int i = 0; i < aux_matcher_size; i++) 
    if(aux_matcher[i])
      free(aux_matcher[i]);
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
          struct TYPE_5__ * aux_list[1];
          struct TYPE_5__ * list = _allocate_list(1, aux_list);
          struct TYPE_5__ * aux_matcher[1];
          struct TYPE_5__ * matcher = _allocate_matcher(1, aux_matcher);
          struct TYPE_5__ * benchRet = x86_match_cache(list,matcher);
          printf("%ld\n", (*benchRet).maxcpus);
          printf("%ld\n", (*benchRet).type);
          printf("%ld\n", (*benchRet).level);
          printf("%ld\n", (*benchRet).partitions);
          printf("%ld\n", (*benchRet).line_size);
          printf("%ld\n", (*benchRet).cache_size);
          _delete_list(aux_list, 1);
          _delete_matcher(aux_matcher, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
