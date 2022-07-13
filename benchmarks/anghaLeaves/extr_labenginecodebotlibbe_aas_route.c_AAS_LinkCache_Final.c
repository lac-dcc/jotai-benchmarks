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
       0            int-bounds\n\
       1            dlinked\n\
       2            bintree\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* time_next; struct TYPE_4__* time_prev; } ;
typedef  TYPE_1__ aas_routingcache_t ;
struct TYPE_5__ {TYPE_1__* newestcache; TYPE_1__* oldestcache; } ;

/* Variables and functions */
 TYPE_2__ aasworld ; 

void AAS_LinkCache(aas_routingcache_t *cache)
{
	if (aasworld.newestcache)
	{
		aasworld.newestcache->time_next = cache;
		cache->time_prev = aasworld.newestcache;
	} //end if
	else
	{
		aasworld.oldestcache = cache;
		cache->time_prev = NULL;
	} //end else
	cache->time_next = NULL;
	aasworld.newestcache = cache;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_cache(int length, struct TYPE_4__ *aux_cache[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_cache[0] = walker;
  walker->time_next = NULL;
  walker->time_prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->time_next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->time_next;
    aux_cache[i] = walker;
    walker->time_prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->time_prev;
    aux_cache[i] = walker;
    walker->time_next = NULL;
    walker->time_prev = NULL;
  }

  return head;
}

void _delete_cache(struct TYPE_4__ *aux_cache[], int aux_cache_size) {
  for(int i = 0; i < aux_cache_size; i++) 
    if(aux_cache[i])
      free(aux_cache[i]);
}

struct TYPE_4__ *_allocate_Dlinked_cache(int length, struct TYPE_4__ *aux_dlinked_cache[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_cache[0] = walker;
  walker->time_next = NULL;
  walker->time_prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->time_prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->time_prev->time_next = walker;
    walker = walker->time_prev;
    aux_dlinked_cache[i] = walker;
    if (i == (length - 1)) 
      walker->time_prev = NULL;  }

  return head;
}

void _delete_Dlinked_cache(struct TYPE_4__ *aux_dlinked_cache[], int aux_dlinked_cache_size) {
  for(int i = 0; i < aux_dlinked_cache_size; i++) 
    if(aux_dlinked_cache[i])
      free(aux_dlinked_cache[i]);
}

struct TYPE_4__ *_allocateBinTree_cache(int length, struct TYPE_4__ *aux_tree_cache[], int *counter_cache) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_cache[*counter_cache] = walker;
  (*counter_cache)++;
  walker->time_next = _allocateBinTree_cache(length - 1, aux_tree_cache, counter_cache);
  walker->time_prev = _allocateBinTree_cache(length - 1, aux_tree_cache, counter_cache);
  return walker;
}

void _deleteBinTree_cache(struct TYPE_4__ *aux_tree_cache[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_cache[i])
      free(aux_tree_cache[i]);
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
          struct TYPE_4__ * aux_cache[1];
          struct TYPE_4__ * cache = _allocate_cache(1, aux_cache);
          AAS_LinkCache(cache);
          _delete_cache(aux_cache, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct TYPE_4__ * aux_dlinked_cache[10000];
          struct TYPE_4__ * cache = _allocate_Dlinked_cache(10000, aux_dlinked_cache);
          AAS_LinkCache(cache);
          _delete_Dlinked_cache(aux_dlinked_cache, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_cache= 0;
          struct TYPE_4__ *  aux_tree_cache[1023];
          struct TYPE_4__ * cache = _allocateBinTree_cache(10, aux_tree_cache, &counter_cache);
          AAS_LinkCache(cache);
          _deleteBinTree_cache(aux_tree_cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
