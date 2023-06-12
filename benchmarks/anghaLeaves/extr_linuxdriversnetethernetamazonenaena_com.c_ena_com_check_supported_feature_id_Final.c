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
typedef  int u32 ;
struct ena_com_dev {int supported_features; } ;
typedef  enum ena_admin_aq_feature_id { ____Placeholder_ena_admin_aq_feature_id } ena_admin_aq_feature_id ;

/* Variables and functions */
 int ENA_ADMIN_DEVICE_ATTRIBUTES ; 

__attribute__((used)) static bool ena_com_check_supported_feature_id(struct ena_com_dev *ena_dev,
					       enum ena_admin_aq_feature_id feature_id)
{
	u32 feature_mask = 1 << feature_id;

	/* Device attributes is always supported */
	if ((feature_id != ENA_ADMIN_DEVICE_ATTRIBUTES) &&
	    !(ena_dev->supported_features & feature_mask))
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
          enum ena_admin_aq_feature_id feature_id = 0;
        
          int _len_ena_dev0 = 65025;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              ena_dev[_i0].supported_features = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ena_com_check_supported_feature_id(ena_dev,feature_id);
          printf("%d\n", benchRet); 
          free(ena_dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum ena_admin_aq_feature_id feature_id = 0;
        
          int _len_ena_dev0 = 100;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              ena_dev[_i0].supported_features = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ena_com_check_supported_feature_id(ena_dev,feature_id);
          printf("%d\n", benchRet); 
          free(ena_dev);
        
        break;
    }
    // empty
    case 2:
    {
          enum ena_admin_aq_feature_id feature_id = 0;
        
          int _len_ena_dev0 = 1;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              ena_dev[_i0].supported_features = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ena_com_check_supported_feature_id(ena_dev,feature_id);
          printf("%d\n", benchRet); 
          free(ena_dev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
