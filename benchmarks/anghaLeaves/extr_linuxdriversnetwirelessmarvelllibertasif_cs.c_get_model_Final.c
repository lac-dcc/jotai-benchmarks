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
typedef  int /*<<< orphan*/  u32 ;
typedef  scalar_t__ u16 ;

/* Variables and functions */
 scalar_t__ CF8305_CARDID ; 
 scalar_t__ CF8305_MANFID ; 
 scalar_t__ CF8381_CARDID ; 
 scalar_t__ CF8381_MANFID ; 
 scalar_t__ CF8385_CARDID ; 
 scalar_t__ CF8385_MANFID ; 
 int /*<<< orphan*/  MODEL_8305 ; 
 int /*<<< orphan*/  MODEL_8381 ; 
 int /*<<< orphan*/  MODEL_8385 ; 
 int /*<<< orphan*/  MODEL_UNKNOWN ; 

__attribute__((used)) static inline u32 get_model(u16 manf_id, u16 card_id)
{
	/* NOTE: keep in sync with if_cs_ids */
	if (manf_id == CF8305_MANFID && card_id == CF8305_CARDID)
		return MODEL_8305;
	else if (manf_id == CF8381_MANFID && card_id == CF8381_CARDID)
		return MODEL_8381;
	else if (manf_id == CF8385_MANFID && card_id == CF8385_CARDID)
		return MODEL_8385;
	return MODEL_UNKNOWN;
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
          long manf_id = 100;
          long card_id = 100;
          int benchRet = get_model(manf_id,card_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long manf_id = 255;
          long card_id = 255;
          int benchRet = get_model(manf_id,card_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long manf_id = 10;
          long card_id = 10;
          int benchRet = get_model(manf_id,card_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
