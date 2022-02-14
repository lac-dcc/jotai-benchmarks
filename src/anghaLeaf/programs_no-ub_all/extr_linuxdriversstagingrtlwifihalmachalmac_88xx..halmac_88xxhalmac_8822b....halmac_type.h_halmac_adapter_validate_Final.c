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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct halmac_adapter {struct halmac_adapter* hal_adapter_backup; } ;
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;

/* Variables and functions */
 int HALMAC_RET_ADAPTER_INVALID ; 
 int HALMAC_RET_SUCCESS ; 

__attribute__((used)) static inline enum halmac_ret_status
halmac_adapter_validate(struct halmac_adapter *halmac_adapter)
{
	if ((!halmac_adapter) ||
	    (halmac_adapter->hal_adapter_backup != halmac_adapter))
		return HALMAC_RET_ADAPTER_INVALID;

	return HALMAC_RET_SUCCESS;
}


// ------------------------------------------------------------------------- //

struct halmac_adapter *_allocate_halmac_adapter(int length) {
  struct halmac_adapter *head = (struct halmac_adapter *)malloc(sizeof(struct halmac_adapter));

  head->hal_adapter_backup = NULL;

  struct halmac_adapter *walker = head;
  for(int i = 1; i < length; i++) {
    walker->hal_adapter_backup = (struct halmac_adapter *)malloc(sizeof(struct halmac_adapter));
    walker = walker->hal_adapter_backup;
    walker->hal_adapter_backup = NULL;
  }

  return head;
}

void _delete_halmac_adapter(struct halmac_adapter * head) {
  if(head->hal_adapter_backup != NULL) _delete_halmac_adapter(head->hal_adapter_backup);
  free(head);
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
          struct halmac_adapter * halmac_adapter = _allocate_halmac_adapter(1);
          enum halmac_ret_status benchRet = halmac_adapter_validate(halmac_adapter);
          printf("{{other_type}} %p\n", &benchRet); 
          _delete_halmac_adapter(halmac_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
