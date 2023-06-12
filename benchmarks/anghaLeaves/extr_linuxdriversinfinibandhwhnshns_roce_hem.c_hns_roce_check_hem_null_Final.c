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
typedef  int u64 ;
typedef  int u32 ;
struct hns_roce_hem {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool hns_roce_check_hem_null(struct hns_roce_hem **hem, u64 start_idx,
			    u32 bt_chunk_num)
{
	int i;

	for (i = 0; i < bt_chunk_num; i++)
		if (hem[start_idx + i])
			return false;

	return true;
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
          int start_idx = 255;
        
          int bt_chunk_num = 255;
        
          int _len_hem0 = 65025;
          struct hns_roce_hem ** hem = (struct hns_roce_hem **) malloc(_len_hem0*sizeof(struct hns_roce_hem *));
          for(int _i0 = 0; _i0 < _len_hem0; _i0++) {
            int _len_hem1 = 1;
            hem[_i0] = (struct hns_roce_hem *) malloc(_len_hem1*sizeof(struct hns_roce_hem));
            for(int _i1 = 0; _i1 < _len_hem1; _i1++) {
                hem[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = hns_roce_check_hem_null(hem,start_idx,bt_chunk_num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_hem0; i1++) {
              free(hem[i1]);
          }
          free(hem);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int start_idx = 10;
        
          int bt_chunk_num = 10;
        
          int _len_hem0 = 100;
          struct hns_roce_hem ** hem = (struct hns_roce_hem **) malloc(_len_hem0*sizeof(struct hns_roce_hem *));
          for(int _i0 = 0; _i0 < _len_hem0; _i0++) {
            int _len_hem1 = 1;
            hem[_i0] = (struct hns_roce_hem *) malloc(_len_hem1*sizeof(struct hns_roce_hem));
            for(int _i1 = 0; _i1 < _len_hem1; _i1++) {
                hem[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = hns_roce_check_hem_null(hem,start_idx,bt_chunk_num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_hem0; i1++) {
              free(hem[i1]);
          }
          free(hem);
        
        break;
    }
    // empty
    case 2:
    {
          int start_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int bt_chunk_num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hem0 = 1;
          struct hns_roce_hem ** hem = (struct hns_roce_hem **) malloc(_len_hem0*sizeof(struct hns_roce_hem *));
          for(int _i0 = 0; _i0 < _len_hem0; _i0++) {
            int _len_hem1 = 1;
            hem[_i0] = (struct hns_roce_hem *) malloc(_len_hem1*sizeof(struct hns_roce_hem));
            for(int _i1 = 0; _i1 < _len_hem1; _i1++) {
                hem[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = hns_roce_check_hem_null(hem,start_idx,bt_chunk_num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_hem0; i1++) {
              free(hem[i1]);
          }
          free(hem);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
