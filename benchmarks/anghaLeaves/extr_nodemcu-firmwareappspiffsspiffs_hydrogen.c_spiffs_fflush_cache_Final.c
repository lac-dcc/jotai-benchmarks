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
typedef  int /*<<< orphan*/  spiffs_file ;
typedef  int /*<<< orphan*/  spiffs ;
typedef  int /*<<< orphan*/  s32_t ;

/* Variables and functions */
 int /*<<< orphan*/  SPIFFS_OK ; 

__attribute__((used)) static s32_t spiffs_fflush_cache(spiffs *fs, spiffs_file fh) {
  (void)fs;
  (void)fh;
  s32_t res = SPIFFS_OK;
#if !SPIFFS_READ_ONLY && SPIFFS_CACHE_WR

  spiffs_fd *fd;
  res = spiffs_fd_get(fs, fh, &fd);
  SPIFFS_API_CHECK_RES(fs, res);

  if ((fd->flags & SPIFFS_O_DIRECT) == 0) {
    if (fd->cache_page == 0) {
      // see if object id is associated with cache already
      fd->cache_page = spiffs_cache_page_get_by_fd(fs, fd);
    }
    if (fd->cache_page) {
      SPIFFS_CACHE_DBG("CACHE_WR_DUMP: dumping cache page "_SPIPRIi" for fd "_SPIPRIfd":"_SPIPRIid", flush, offs:"_SPIPRIi" size:"_SPIPRIi"\n",
          fd->cache_page->ix, fd->file_nbr,  fd->obj_id, fd->cache_page->offset, fd->cache_page->size);
      res = spiffs_hydro_write(fs, fd,
          spiffs_get_cache_page(fs, spiffs_get_cache(fs), fd->cache_page->ix),
          fd->cache_page->offset, fd->cache_page->size);
      if (res < SPIFFS_OK) {
        fs->err_code = res;
      }
      spiffs_cache_fd_release(fs, fd->cache_page);
    }
  }
#endif

  return res;
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
          int fh = 100;
          int _len_fs0 = 1;
          int * fs = (int *) malloc(_len_fs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spiffs_fflush_cache(fs,fh);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int fh = 10;
          int _len_fs0 = 100;
          int * fs = (int *) malloc(_len_fs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spiffs_fflush_cache(fs,fh);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
