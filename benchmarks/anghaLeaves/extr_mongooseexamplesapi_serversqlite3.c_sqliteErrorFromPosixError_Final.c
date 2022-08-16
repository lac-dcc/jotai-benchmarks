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

/* Variables and functions */
#define  EACCES 142 
#define  EAGAIN 141 
#define  EBADF 140 
#define  EBUSY 139 
#define  EINTR 138 
#define  EINVAL 137 
#define  EIO 136 
#define  ENODEV 135 
#define  ENOENT 134 
#define  ENOLCK 133 
#define  ENOSYS 132 
#define  ENOTCONN 131 
#define  ENXIO 130 
#define  EPERM 129 
#define  ETIMEDOUT 128 
 int SQLITE_BUSY ; 
 int SQLITE_IOERR_CHECKRESERVEDLOCK ; 
 int SQLITE_IOERR_LOCK ; 
 int SQLITE_IOERR_RDLOCK ; 
 int SQLITE_IOERR_UNLOCK ; 
 int SQLITE_PERM ; 

__attribute__((used)) static int sqliteErrorFromPosixError(int posixError, int sqliteIOErr) {
  switch (posixError) {
#if 0
  /* At one point this code was not commented out. In theory, this branch
  ** should never be hit, as this function should only be called after
  ** a locking-related function (i.e. fcntl()) has returned non-zero with
  ** the value of errno as the first argument. Since a system call has failed,
  ** errno should be non-zero.
  **
  ** Despite this, if errno really is zero, we still don't want to return
  ** SQLITE_OK. The system call failed, and *some* SQLite error should be
  ** propagated back to the caller. Commenting this branch out means errno==0
  ** will be handled by the "default:" case below.
  */
  case 0: 
    return SQLITE_OK;
#endif

  case EAGAIN:
  case ETIMEDOUT:
  case EBUSY:
  case EINTR:
  case ENOLCK:  
    /* random NFS retry error, unless during file system support 
     * introspection, in which it actually means what it says */
    return SQLITE_BUSY;
    
  case EACCES: 
    /* EACCES is like EAGAIN during locking operations, but not any other time*/
    if( (sqliteIOErr == SQLITE_IOERR_LOCK) || 
        (sqliteIOErr == SQLITE_IOERR_UNLOCK) || 
        (sqliteIOErr == SQLITE_IOERR_RDLOCK) ||
        (sqliteIOErr == SQLITE_IOERR_CHECKRESERVEDLOCK) ){
      return SQLITE_BUSY;
    }
    /* else fall through */
  case EPERM: 
    return SQLITE_PERM;
    
  /* EDEADLK is only possible if a call to fcntl(F_SETLKW) is made. And
  ** this module never makes such a call. And the code in SQLite itself 
  ** asserts that SQLITE_IOERR_BLOCKED is never returned. For these reasons
  ** this case is also commented out. If the system does set errno to EDEADLK,
  ** the default SQLITE_IOERR_XXX code will be returned. */
#if 0
  case EDEADLK:
    return SQLITE_IOERR_BLOCKED;
#endif
    
#if EOPNOTSUPP!=ENOTSUP
  case EOPNOTSUPP: 
    /* something went terribly awry, unless during file system support 
     * introspection, in which it actually means what it says */
#endif
#ifdef ENOTSUP
  case ENOTSUP: 
    /* invalid fd, unless during file system support introspection, in which 
     * it actually means what it says */
#endif
  case EIO:
  case EBADF:
  case EINVAL:
  case ENOTCONN:
  case ENODEV:
  case ENXIO:
  case ENOENT:
#ifdef ESTALE                     /* ESTALE is not defined on Interix systems */
  case ESTALE:
#endif
  case ENOSYS:
    /* these should force the client to close the file and reconnect */
    
  default: 
    return sqliteIOErr;
  }
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
          int posixError = 100;
          int sqliteIOErr = 100;
          int benchRet = sqliteErrorFromPosixError(posixError,sqliteIOErr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int posixError = 255;
          int sqliteIOErr = 255;
          int benchRet = sqliteErrorFromPosixError(posixError,sqliteIOErr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int posixError = 10;
          int sqliteIOErr = 10;
          int benchRet = sqliteErrorFromPosixError(posixError,sqliteIOErr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
