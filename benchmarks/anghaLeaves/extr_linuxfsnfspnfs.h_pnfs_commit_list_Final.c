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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct nfs_commit_info {int dummy; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;

/* Variables and functions */
 int PNFS_NOT_ATTEMPTED ; 

__attribute__((used)) static inline int
pnfs_commit_list(struct inode *inode, struct list_head *mds_pages, int how,
		 struct nfs_commit_info *cinfo)
{
	return PNFS_NOT_ATTEMPTED;
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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int how = 100;
        
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mds_pages0 = 1;
          struct list_head * mds_pages = (struct list_head *) malloc(_len_mds_pages0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_mds_pages0; _i0++) {
              mds_pages[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cinfo0 = 1;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              cinfo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pnfs_commit_list(inode,mds_pages,how,cinfo);
          printf("%d\n", benchRet); 
          free(inode);
          free(mds_pages);
          free(cinfo);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int how = 255;
        
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mds_pages0 = 65025;
          struct list_head * mds_pages = (struct list_head *) malloc(_len_mds_pages0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_mds_pages0; _i0++) {
              mds_pages[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cinfo0 = 65025;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              cinfo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pnfs_commit_list(inode,mds_pages,how,cinfo);
          printf("%d\n", benchRet); 
          free(inode);
          free(mds_pages);
          free(cinfo);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int how = 10;
        
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mds_pages0 = 100;
          struct list_head * mds_pages = (struct list_head *) malloc(_len_mds_pages0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_mds_pages0; _i0++) {
              mds_pages[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cinfo0 = 100;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              cinfo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pnfs_commit_list(inode,mds_pages,how,cinfo);
          printf("%d\n", benchRet); 
          free(inode);
          free(mds_pages);
          free(cinfo);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int how = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mds_pages0 = 1;
          struct list_head * mds_pages = (struct list_head *) malloc(_len_mds_pages0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_mds_pages0; _i0++) {
              mds_pages[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cinfo0 = 1;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              cinfo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pnfs_commit_list(inode,mds_pages,how,cinfo);
          printf("%d\n", benchRet); 
          free(inode);
          free(mds_pages);
          free(cinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
