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
typedef  int u32 ;

/* Variables and functions */
 unsigned int CAAM_DESC_BYTES_MAX ; 
 unsigned int CAAM_PTR_SZ ; 

__attribute__((used)) static inline int desc_inline_query(unsigned int sd_base_len,
				    unsigned int jd_len, unsigned int *data_len,
				    u32 *inl_mask, unsigned int count)
{
	int rem_bytes = (int)(CAAM_DESC_BYTES_MAX - sd_base_len - jd_len);
	unsigned int i;

	*inl_mask = 0;
	for (i = 0; (i < count) && (rem_bytes > 0); i++) {
		if (rem_bytes - (int)(data_len[i] +
			(count - i - 1) * CAAM_PTR_SZ) >= 0) {
			rem_bytes -= data_len[i];
			*inl_mask |= (1 << i);
		} else {
			rem_bytes -= CAAM_PTR_SZ;
		}
	}

	return (rem_bytes >= 0) ? 0 : -1;
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
          unsigned int sd_base_len = 100;
          unsigned int jd_len = 100;
          unsigned int count = 100;
          int _len_data_len0 = 1;
          unsigned int * data_len = (unsigned int *) malloc(_len_data_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data_len0; _i0++) {
            data_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inl_mask0 = 1;
          int * inl_mask = (int *) malloc(_len_inl_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inl_mask0; _i0++) {
            inl_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = desc_inline_query(sd_base_len,jd_len,data_len,inl_mask,count);
          printf("%d\n", benchRet); 
          free(data_len);
          free(inl_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
