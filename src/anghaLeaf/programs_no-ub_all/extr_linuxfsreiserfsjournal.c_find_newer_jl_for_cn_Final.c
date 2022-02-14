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
struct super_block {int dummy; } ;
struct reiserfs_journal_list {int dummy; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* hprev; struct reiserfs_journal_list* jlist; struct super_block* sb; } ;
typedef  scalar_t__ b_blocknr_t ;

/* Variables and functions */

__attribute__((used)) static struct reiserfs_journal_list *find_newer_jl_for_cn(struct
							  reiserfs_journal_cnode
							  *cn)
{
	struct super_block *sb = cn->sb;
	b_blocknr_t blocknr = cn->blocknr;

	cn = cn->hprev;
	while (cn) {
		if (cn->sb == sb && cn->blocknr == blocknr && cn->jlist) {
			return cn->jlist;
		}
		cn = cn->hprev;
	}
	return NULL;
}


// ------------------------------------------------------------------------- //

struct reiserfs_journal_cnode *_allocate_cn(int length) {
  struct reiserfs_journal_cnode *head = (struct reiserfs_journal_cnode *)malloc(sizeof(struct reiserfs_journal_cnode));

  head->blocknr = rand();
  head->hprev = NULL;
  head->jlist = rand();
  head->sb = rand();

  struct reiserfs_journal_cnode *walker = head;
  for(int i = 1; i < length; i++) {
    walker->hprev = (struct reiserfs_journal_cnode *)malloc(sizeof(struct reiserfs_journal_cnode));
    walker = walker->hprev;
    walker->blocknr = rand();
    walker->hprev = NULL;
    walker->jlist = rand();
    walker->sb = rand();
  }

  return head;
}

void _delete_cn(struct reiserfs_journal_cnode * head) {
  if(head->hprev != NULL) _delete_cn(head->hprev);
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
          struct reiserfs_journal_cnode * cn = _allocate_cn(1);
          struct reiserfs_journal_list * benchRet = find_newer_jl_for_cn(cn);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_cn(cn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
