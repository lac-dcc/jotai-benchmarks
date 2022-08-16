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
typedef  int /*<<< orphan*/  sqlite3_file ;
typedef  int /*<<< orphan*/  i64 ;

/* Variables and functions */
 int SQLITE_OK ; 

__attribute__((used)) static int unixFetch(sqlite3_file *fd, i64 iOff, int nAmt, void **pp){
#if SQLITE_MAX_MMAP_SIZE>0
  unixFile *pFd = (unixFile *)fd;   /* The underlying database file */
#endif
  *pp = 0;

#if SQLITE_MAX_MMAP_SIZE>0
  if( pFd->mmapSizeMax>0 ){
    if( pFd->pMapRegion==0 ){
      int rc = unixMapfile(pFd, -1);
      if( rc!=SQLITE_OK ) return rc;
    }
    if( pFd->mmapSize >= iOff+nAmt ){
      *pp = &((u8 *)pFd->pMapRegion)[iOff];
      pFd->nFetchOut++;
    }
  }
#endif
  return SQLITE_OK;
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
          int iOff = 100;
          int nAmt = 100;
          int _len_fd0 = 1;
          int * fd = (int *) malloc(_len_fd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            fd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pp0 = 1;
          void ** pp = (void **) malloc(_len_pp0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
          }
          int benchRet = unixFetch(fd,iOff,nAmt,pp);
          printf("%d\n", benchRet); 
          free(fd);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              }
          free(pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
