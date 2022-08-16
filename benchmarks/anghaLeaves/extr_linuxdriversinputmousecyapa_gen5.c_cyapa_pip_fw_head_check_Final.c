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
struct cyapa_tsg_bin_image_head {int head_size; int family_id; int silicon_id_hi; } ;
struct cyapa {int gen; int platform_ver; } ;

/* Variables and functions */
#define  CYAPA_GEN5 129 
#define  CYAPA_GEN6 128 
 int EINVAL ; 

__attribute__((used)) static int cyapa_pip_fw_head_check(struct cyapa *cyapa,
		struct cyapa_tsg_bin_image_head *image_head)
{
	if (image_head->head_size != 0x0C && image_head->head_size != 0x12)
		return -EINVAL;

	switch (cyapa->gen) {
	case CYAPA_GEN6:
		if (image_head->family_id != 0x9B ||
		    image_head->silicon_id_hi != 0x0B)
			return -EINVAL;
		break;
	case CYAPA_GEN5:
		/* Gen5 without proximity support. */
		if (cyapa->platform_ver < 2) {
			if (image_head->head_size == 0x0C)
				break;
			return -EINVAL;
		}

		if (image_head->family_id != 0x91 ||
		    image_head->silicon_id_hi != 0x02)
			return -EINVAL;
		break;
	default:
		return -EINVAL;
	}

	return 0;
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
          int _len_cyapa0 = 1;
          struct cyapa * cyapa = (struct cyapa *) malloc(_len_cyapa0*sizeof(struct cyapa));
          for(int _i0 = 0; _i0 < _len_cyapa0; _i0++) {
            cyapa[_i0].gen = ((-2 * (next_i()%2)) + 1) * next_i();
        cyapa[_i0].platform_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_image_head0 = 1;
          struct cyapa_tsg_bin_image_head * image_head = (struct cyapa_tsg_bin_image_head *) malloc(_len_image_head0*sizeof(struct cyapa_tsg_bin_image_head));
          for(int _i0 = 0; _i0 < _len_image_head0; _i0++) {
            image_head[_i0].head_size = ((-2 * (next_i()%2)) + 1) * next_i();
        image_head[_i0].family_id = ((-2 * (next_i()%2)) + 1) * next_i();
        image_head[_i0].silicon_id_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyapa_pip_fw_head_check(cyapa,image_head);
          printf("%d\n", benchRet); 
          free(cyapa);
          free(image_head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
