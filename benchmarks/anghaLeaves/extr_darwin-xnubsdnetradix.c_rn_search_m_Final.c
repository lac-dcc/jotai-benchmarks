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
       0            dlinked\n\
       1            bintree\n\
       2            empty\n\
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
struct radix_node {scalar_t__ rn_bit; int rn_bmask; size_t rn_offset; struct radix_node* rn_left; struct radix_node* rn_right; } ;
typedef  int* caddr_t ;

/* Variables and functions */

__attribute__((used)) static struct radix_node *
rn_search_m(void *v_arg, struct radix_node *head, void *m_arg)
{
	struct radix_node *x;
	caddr_t v = v_arg, m = m_arg;

	for (x = head; x->rn_bit >= 0;) {
		if ((x->rn_bmask & m[x->rn_offset]) &&
		    (x->rn_bmask & v[x->rn_offset]))
			x = x->rn_right;
		else
			x = x->rn_left;
	}
	return x;
}

// ------------------------------------------------------------------------- //

struct radix_node *_allocate_Dlinked_head(int length, struct radix_node *aux_dlinked_head[] ) {
  struct radix_node *walker = (struct radix_node *)malloc(sizeof(struct radix_node));

  aux_dlinked_head[0] = walker;
  walker->rn_bit = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_bmask = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_left = NULL;
  walker->rn_right = NULL;

  struct radix_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->rn_right = (struct radix_node *)malloc(sizeof(struct radix_node));
    walker->rn_right->rn_left = walker;
    walker = walker->rn_right;
    aux_dlinked_head[i] = walker;
    if (i == (length - 1)) 
      walker->rn_right = NULL;    walker->rn_bit = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->rn_bmask = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->rn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_Dlinked_head(struct radix_node *aux_dlinked_head[], int aux_dlinked_head_size) {
  for(int i = 0; i < aux_dlinked_head_size; i++) 
    if(aux_dlinked_head[i])
      free(aux_dlinked_head[i]);
}

struct radix_node *_allocateBinTree_head(int length, struct radix_node *aux_tree_head[], int *counter_head) {
  if(length == 0)
    return NULL;
  struct radix_node *walker = (struct radix_node *)malloc(sizeof(struct radix_node));

  aux_tree_head[*counter_head] = walker;
  (*counter_head)++;
  walker->rn_bit = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_bmask = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_left = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  walker->rn_right = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  return walker;
}

void _deleteBinTree_head(struct radix_node *aux_tree_head[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_head[i])
      free(aux_tree_head[i]);
}

struct radix_node *_allocate_head(int length, struct radix_node *aux_head[]) {
  struct radix_node *walker = (struct radix_node *)malloc(sizeof(struct radix_node));

  aux_head[0] = walker;
walker->rn_bit = ((-2 * (next_i()%2)) + 1) * next_i();
walker->rn_bmask = ((-2 * (next_i()%2)) + 1) * next_i();
walker->rn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->rn_left = NULL;
  walker->rn_right = NULL;

  struct radix_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->rn_left = (struct radix_node *)malloc(sizeof(struct radix_node));
    walker = walker->rn_left;
    aux_head[i] = walker;
    walker->rn_right = (struct radix_node *)malloc(sizeof(struct radix_node));
    walker = walker->rn_right;
    aux_head[i] = walker;
walker->rn_bit = ((-2 * (next_i()%2)) + 1) * next_i();
walker->rn_bmask = ((-2 * (next_i()%2)) + 1) * next_i();
walker->rn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->rn_left = NULL;
    walker->rn_right = NULL;
  }

  return head;
}

void _delete_head(struct radix_node *aux_head[], int aux_head_size) {
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


    // dlinked
    case 0:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          void * v_arg;
        
          struct radix_node * aux_dlinked_head[10000];
          struct radix_node * head = _allocate_Dlinked_head(10000, aux_dlinked_head);
        
          void * m_arg;
        
          struct radix_node * benchRet = rn_search_m(v_arg,head,m_arg);
          printf("%ld\n", (*benchRet).rn_bit);
          printf("%d\n", (*benchRet).rn_bmask);
          printf("%lu\n", (*benchRet).rn_offset);
          _delete_Dlinked_head(aux_dlinked_head, 10000);
        
        break;
    }


    // bintree
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          void * v_arg;
        
          int counter_head= 0;
          struct radix_node *  aux_tree_head[1023];
          struct radix_node * head = _allocateBinTree_head(10, aux_tree_head, &counter_head);
        
          void * m_arg;
        
          struct radix_node * benchRet = rn_search_m(v_arg,head,m_arg);
          printf("%ld\n", (*benchRet).rn_bit);
          printf("%d\n", (*benchRet).rn_bmask);
          printf("%lu\n", (*benchRet).rn_offset);
          _deleteBinTree_head(aux_tree_head);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          void * v_arg;
        
          struct radix_node * aux_head[1];
          struct radix_node * head = _allocate_head(1, aux_head);
        
          void * m_arg;
        
          struct radix_node * benchRet = rn_search_m(v_arg,head,m_arg);
          printf("%ld\n", (*benchRet).rn_bit);
          printf("%d\n", (*benchRet).rn_bmask);
          printf("%lu\n", (*benchRet).rn_offset);
          _delete_head(aux_head, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
