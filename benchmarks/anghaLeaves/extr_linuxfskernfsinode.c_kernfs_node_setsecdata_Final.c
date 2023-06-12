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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  size_t u32 ;
struct kernfs_iattrs {size_t ia_secdata_len; void* ia_secdata; } ;

/* Variables and functions */

__attribute__((used)) static int kernfs_node_setsecdata(struct kernfs_iattrs *attrs, void **secdata,
				  u32 *secdata_len)
{
	void *old_secdata;
	size_t old_secdata_len;

	old_secdata = attrs->ia_secdata;
	old_secdata_len = attrs->ia_secdata_len;

	attrs->ia_secdata = *secdata;
	attrs->ia_secdata_len = *secdata_len;

	*secdata = old_secdata;
	*secdata_len = old_secdata_len;
	return 0;
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
          int _len_attrs0 = 65025;
          struct kernfs_iattrs * attrs = (struct kernfs_iattrs *) malloc(_len_attrs0*sizeof(struct kernfs_iattrs));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
              attrs[_i0].ia_secdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_secdata0 = 65025;
          void ** secdata = (void **) malloc(_len_secdata0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_secdata0; _i0++) {
          }
        
          int _len_secdata_len0 = 65025;
          unsigned long * secdata_len = (unsigned long *) malloc(_len_secdata_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_secdata_len0; _i0++) {
            secdata_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kernfs_node_setsecdata(attrs,secdata,secdata_len);
          printf("%d\n", benchRet); 
          free(attrs);
          for(int i1 = 0; i1 < _len_secdata0; i1++) {
              }
          free(secdata);
          free(secdata_len);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_attrs0 = 100;
          struct kernfs_iattrs * attrs = (struct kernfs_iattrs *) malloc(_len_attrs0*sizeof(struct kernfs_iattrs));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
              attrs[_i0].ia_secdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_secdata0 = 100;
          void ** secdata = (void **) malloc(_len_secdata0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_secdata0; _i0++) {
          }
        
          int _len_secdata_len0 = 100;
          unsigned long * secdata_len = (unsigned long *) malloc(_len_secdata_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_secdata_len0; _i0++) {
            secdata_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kernfs_node_setsecdata(attrs,secdata,secdata_len);
          printf("%d\n", benchRet); 
          free(attrs);
          for(int i1 = 0; i1 < _len_secdata0; i1++) {
              }
          free(secdata);
          free(secdata_len);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_attrs0 = 1;
          struct kernfs_iattrs * attrs = (struct kernfs_iattrs *) malloc(_len_attrs0*sizeof(struct kernfs_iattrs));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
              attrs[_i0].ia_secdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_secdata0 = 1;
          void ** secdata = (void **) malloc(_len_secdata0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_secdata0; _i0++) {
          }
        
          int _len_secdata_len0 = 1;
          unsigned long * secdata_len = (unsigned long *) malloc(_len_secdata_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_secdata_len0; _i0++) {
            secdata_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kernfs_node_setsecdata(attrs,secdata,secdata_len);
          printf("%d\n", benchRet); 
          free(attrs);
          for(int i1 = 0; i1 < _len_secdata0; i1++) {
              }
          free(secdata);
          free(secdata_len);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
