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

/* Type definitions */
struct rb_root {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;

/* Variables and functions */

bool f2fs_check_rb_tree_consistence(struct f2fs_sb_info *sbi,
						struct rb_root *root)
{
#ifdef CONFIG_F2FS_CHECK_FS
	struct rb_node *cur = rb_first(root), *next;
	struct rb_entry *cur_re, *next_re;

	if (!cur)
		return true;

	while (cur) {
		next = rb_next(cur);
		if (!next)
			return true;

		cur_re = rb_entry(cur, struct rb_entry, rb_node);
		next_re = rb_entry(next, struct rb_entry, rb_node);

		if (cur_re->ofs + cur_re->len > next_re->ofs) {
			f2fs_msg(sbi->sb, KERN_INFO, "inconsistent rbtree, "
				"cur(%u, %u) next(%u, %u)",
				cur_re->ofs, cur_re->len,
				next_re->ofs, next_re->len);
			return false;
		}

		cur = next;
	}
#endif
	return true;
}


// ------------------------------------------------------------------------- //




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
          int _len_sbi0 = 1;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_root0 = 1;
          struct rb_root * root = (struct rb_root *) malloc(_len_root0*sizeof(struct rb_root));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = f2fs_check_rb_tree_consistence(sbi,root);
          printf("%d\n", benchRet); 
          free(sbi);
          free(root);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
