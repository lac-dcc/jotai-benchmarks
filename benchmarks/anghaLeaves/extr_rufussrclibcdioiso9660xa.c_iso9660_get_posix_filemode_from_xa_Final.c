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
typedef  int uint16_t ;
typedef  int /*<<< orphan*/  posix_mode_t ;

/* Variables and functions */
 int /*<<< orphan*/  S_IFDIR ; 
 int /*<<< orphan*/  S_IRUSR ; 
 int /*<<< orphan*/  S_IXUSR ; 
 int XA_ATTR_DIRECTORY ; 
 int XA_PERM_RUSR ; 
 int XA_PERM_XUSR ; 

posix_mode_t 
iso9660_get_posix_filemode_from_xa(uint16_t i_perms) 
{
  posix_mode_t mode = 0;
  
  if (i_perms & XA_PERM_RUSR)  mode |= S_IRUSR;
  if (i_perms & XA_PERM_XUSR)  mode |= S_IXUSR;
  
#ifdef S_IRGRP
  if (i_perms & XA_PERM_RGRP)  mode |= S_IRGRP;
#endif
#ifdef S_IXGRP
  if (i_perms & XA_PERM_XGRP)  mode |= S_IXGRP;
#endif
  
#ifdef S_IROTH
  if (i_perms & XA_PERM_ROTH)  mode |= S_IROTH;
#endif
#ifdef S_IXOTH
  if (i_perms & XA_PERM_XOTH)  mode |= S_IXOTH;
#endif
  
  if (i_perms & XA_ATTR_DIRECTORY)  mode |= S_IFDIR;
  
  return mode;
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
          int i_perms = 100;
          int benchRet = iso9660_get_posix_filemode_from_xa(i_perms);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int i_perms = 255;
          int benchRet = iso9660_get_posix_filemode_from_xa(i_perms);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i_perms = 10;
          int benchRet = iso9660_get_posix_filemode_from_xa(i_perms);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
