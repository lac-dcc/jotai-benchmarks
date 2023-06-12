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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  int64 ;
typedef  int /*<<< orphan*/  int32 ;
struct TYPE_3__ {scalar_t__ bucket_width; int /*<<< orphan*/  htpartcol_interval_len; void* htpartcoltype; int /*<<< orphan*/  htpartcolno; void* htoid; int /*<<< orphan*/  htid; } ;
typedef  void* Oid ;
typedef  TYPE_1__ CAggTimebucketInfo ;
typedef  int /*<<< orphan*/  AttrNumber ;

/* Variables and functions */

__attribute__((used)) static void
caggtimebucketinfo_init(CAggTimebucketInfo *src, int32 hypertable_id, Oid hypertable_oid,
						AttrNumber hypertable_partition_colno, Oid hypertable_partition_coltype,
						int64 hypertable_partition_col_interval)
{
	src->htid = hypertable_id;
	src->htoid = hypertable_oid;
	src->htpartcolno = hypertable_partition_colno;
	src->htpartcoltype = hypertable_partition_coltype;
	src->htpartcol_interval_len = hypertable_partition_col_interval;
	src->bucket_width = 0; /*invalid value */
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int hypertable_id = 100;
        
          int hypertable_partition_colno = 100;
        
          int hypertable_partition_col_interval = 100;
        
          int _len_src0 = 1;
          struct TYPE_3__ * src = (struct TYPE_3__ *) malloc(_len_src0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].bucket_width = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcol_interval_len = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * hypertable_oid;
        
          void * hypertable_partition_coltype;
        
          caggtimebucketinfo_init(src,hypertable_id,hypertable_oid,hypertable_partition_colno,hypertable_partition_coltype,hypertable_partition_col_interval);
          free(src);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int hypertable_id = 255;
        
          int hypertable_partition_colno = 255;
        
          int hypertable_partition_col_interval = 255;
        
          int _len_src0 = 65025;
          struct TYPE_3__ * src = (struct TYPE_3__ *) malloc(_len_src0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].bucket_width = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcol_interval_len = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * hypertable_oid;
        
          void * hypertable_partition_coltype;
        
          caggtimebucketinfo_init(src,hypertable_id,hypertable_oid,hypertable_partition_colno,hypertable_partition_coltype,hypertable_partition_col_interval);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int hypertable_id = 10;
        
          int hypertable_partition_colno = 10;
        
          int hypertable_partition_col_interval = 10;
        
          int _len_src0 = 100;
          struct TYPE_3__ * src = (struct TYPE_3__ *) malloc(_len_src0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].bucket_width = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcol_interval_len = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * hypertable_oid;
        
          void * hypertable_partition_coltype;
        
          caggtimebucketinfo_init(src,hypertable_id,hypertable_oid,hypertable_partition_colno,hypertable_partition_coltype,hypertable_partition_col_interval);
          free(src);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int hypertable_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int hypertable_partition_colno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int hypertable_partition_col_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_src0 = 1;
          struct TYPE_3__ * src = (struct TYPE_3__ *) malloc(_len_src0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].bucket_width = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcol_interval_len = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htpartcolno = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].htid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * hypertable_oid;
        
          void * hypertable_partition_coltype;
        
          caggtimebucketinfo_init(src,hypertable_id,hypertable_oid,hypertable_partition_colno,hypertable_partition_coltype,hypertable_partition_col_interval);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
