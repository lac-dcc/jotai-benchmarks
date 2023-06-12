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
       1            empty\n\
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
struct cache_uri {struct cache_uri* hnext; } ;

/* Variables and functions */

__attribute__((used)) static struct cache_uri *hlist_reverse (struct cache_uri *L) {
  struct cache_uri *U, *V, *A = NULL;
  for (U = L; U != NULL; U = V) {
    V = U->hnext;
    U->hnext = A;
    A = U;
  }
  return A;
}

// ------------------------------------------------------------------------- //

struct cache_uri *_allocate_L(int length, struct cache_uri *aux_L[]) {
  struct cache_uri *walker = (struct cache_uri *)malloc(sizeof(struct cache_uri));

  aux_L[0] = walker;
  walker->hnext = NULL;

  struct cache_uri *head = walker;
  for(int i = 1; i < length; i++) {
    walker->hnext = (struct cache_uri *)malloc(sizeof(struct cache_uri));
    walker = walker->hnext;
    aux_L[i] = walker;
    walker->hnext = NULL;
  }

  return head;
}

void _delete_L(struct cache_uri *aux_L[], int aux_L_size) {
  for(int i = 0; i < aux_L_size; i++) 
    if(aux_L[i])
      free(aux_L[i]);
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 130011
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 60008
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 60008
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 60008
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 60008
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 60008
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 70007
          // ------------------------------- 

          struct cache_uri * aux_L[10000];
          struct cache_uri * L = _allocate_L(10000, aux_L);
        
          struct cache_uri * benchRet = hlist_reverse(L);
          _delete_L(aux_L, 10000);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          struct cache_uri * aux_L[1];
          struct cache_uri * L = _allocate_L(1, aux_L);
        
          struct cache_uri * benchRet = hlist_reverse(L);
          _delete_L(aux_L, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
