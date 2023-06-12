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
struct jffs2_raw_node_ref {struct jffs2_raw_node_ref* next_in_ino; } ;
struct jffs2_inode_cache {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct jffs2_inode_cache *jffs2_raw_ref_to_ic(struct jffs2_raw_node_ref *raw)
{
	while(raw->next_in_ino)
		raw = raw->next_in_ino;

	/* NB. This can be a jffs2_xattr_datum or jffs2_xattr_ref and
	   not actually a jffs2_inode_cache. Check ->class */
	return ((struct jffs2_inode_cache *)raw);
}

// ------------------------------------------------------------------------- //

struct jffs2_raw_node_ref *_allocate_raw(int length, struct jffs2_raw_node_ref *aux_raw[]) {
  struct jffs2_raw_node_ref *walker = (struct jffs2_raw_node_ref *)malloc(sizeof(struct jffs2_raw_node_ref));

  aux_raw[0] = walker;
  walker->next_in_ino = NULL;

  struct jffs2_raw_node_ref *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_in_ino = (struct jffs2_raw_node_ref *)malloc(sizeof(struct jffs2_raw_node_ref));
    walker = walker->next_in_ino;
    aux_raw[i] = walker;
    walker->next_in_ino = NULL;
  }

  return head;
}

void _delete_raw(struct jffs2_raw_node_ref *aux_raw[], int aux_raw_size) {
  for(int i = 0; i < aux_raw_size; i++) 
    if(aux_raw[i])
      free(aux_raw[i]);
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 70002
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 40006
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 40006
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 40006
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 40006
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 40004
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 40004
          // ------------------------------- 

          struct jffs2_raw_node_ref * aux_raw[10000];
          struct jffs2_raw_node_ref * raw = _allocate_raw(10000, aux_raw);
        
          struct jffs2_inode_cache * benchRet = jffs2_raw_ref_to_ic(raw);
          printf("%d\n", (*benchRet).dummy);
          _delete_raw(aux_raw, 10000);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          struct jffs2_raw_node_ref * aux_raw[1];
          struct jffs2_raw_node_ref * raw = _allocate_raw(1, aux_raw);
        
          struct jffs2_inode_cache * benchRet = jffs2_raw_ref_to_ic(raw);
          printf("%d\n", (*benchRet).dummy);
          _delete_raw(aux_raw, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
