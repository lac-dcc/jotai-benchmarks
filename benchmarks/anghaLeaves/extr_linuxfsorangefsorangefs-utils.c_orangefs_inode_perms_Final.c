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
       1            big-arr-10x\n\
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
struct ORANGEFS_sys_attr_s {int perms; } ;

/* Variables and functions */
 int ORANGEFS_G_EXECUTE ; 
 int ORANGEFS_G_READ ; 
 int ORANGEFS_G_SGID ; 
 int ORANGEFS_G_WRITE ; 
 int ORANGEFS_O_EXECUTE ; 
 int ORANGEFS_O_READ ; 
 int ORANGEFS_O_WRITE ; 
 int ORANGEFS_U_EXECUTE ; 
 int ORANGEFS_U_READ ; 
 int ORANGEFS_U_SUID ; 
 int ORANGEFS_U_WRITE ; 
 int S_IRGRP ; 
 int S_IROTH ; 
 int S_IRUSR ; 
 int S_ISGID ; 
 int S_ISUID ; 
 int S_IWGRP ; 
 int S_IWOTH ; 
 int S_IWUSR ; 
 int S_IXGRP ; 
 int S_IXOTH ; 
 int S_IXUSR ; 

__attribute__((used)) static int orangefs_inode_perms(struct ORANGEFS_sys_attr_s *attrs)
{
	int perm_mode = 0;

	if (attrs->perms & ORANGEFS_O_EXECUTE)
		perm_mode |= S_IXOTH;
	if (attrs->perms & ORANGEFS_O_WRITE)
		perm_mode |= S_IWOTH;
	if (attrs->perms & ORANGEFS_O_READ)
		perm_mode |= S_IROTH;

	if (attrs->perms & ORANGEFS_G_EXECUTE)
		perm_mode |= S_IXGRP;
	if (attrs->perms & ORANGEFS_G_WRITE)
		perm_mode |= S_IWGRP;
	if (attrs->perms & ORANGEFS_G_READ)
		perm_mode |= S_IRGRP;

	if (attrs->perms & ORANGEFS_U_EXECUTE)
		perm_mode |= S_IXUSR;
	if (attrs->perms & ORANGEFS_U_WRITE)
		perm_mode |= S_IWUSR;
	if (attrs->perms & ORANGEFS_U_READ)
		perm_mode |= S_IRUSR;

	if (attrs->perms & ORANGEFS_G_SGID)
		perm_mode |= S_ISGID;
	if (attrs->perms & ORANGEFS_U_SUID)
		perm_mode |= S_ISUID;

	return perm_mode;
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
          int _len_attrs0 = 1;
          struct ORANGEFS_sys_attr_s * attrs = (struct ORANGEFS_sys_attr_s *) malloc(_len_attrs0*sizeof(struct ORANGEFS_sys_attr_s));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            attrs[_i0].perms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = orangefs_inode_perms(attrs);
          printf("%d\n", benchRet); 
          free(attrs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_attrs0 = 100;
          struct ORANGEFS_sys_attr_s * attrs = (struct ORANGEFS_sys_attr_s *) malloc(_len_attrs0*sizeof(struct ORANGEFS_sys_attr_s));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            attrs[_i0].perms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = orangefs_inode_perms(attrs);
          printf("%d\n", benchRet); 
          free(attrs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
