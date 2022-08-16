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
typedef  enum hnae3_dev_type { ____Placeholder_hnae3_dev_type } hnae3_dev_type ;
typedef  enum hnae3_client_type { ____Placeholder_hnae3_client_type } hnae3_client_type ;

/* Variables and functions */
 int HNAE3_CLIENT_KNIC ; 
 int HNAE3_CLIENT_ROCE ; 
 int HNAE3_CLIENT_UNIC ; 
 int HNAE3_DEV_KNIC ; 
 int HNAE3_DEV_UNIC ; 

__attribute__((used)) static bool hnae3_client_match(enum hnae3_client_type client_type,
			       enum hnae3_dev_type dev_type)
{
	if ((dev_type == HNAE3_DEV_KNIC) && (client_type == HNAE3_CLIENT_KNIC ||
					     client_type == HNAE3_CLIENT_ROCE))
		return true;

	if (dev_type == HNAE3_DEV_UNIC && client_type == HNAE3_CLIENT_UNIC)
		return true;

	return false;
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
          enum hnae3_client_type client_type = 0;
          enum hnae3_dev_type dev_type = 0;
          int benchRet = hnae3_client_match(client_type,dev_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
