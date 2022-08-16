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
struct gcov_info {struct gcov_info* next; } ;

/* Variables and functions */
 struct gcov_info* gcov_info_head ; 

struct gcov_info *gcov_info_next(struct gcov_info *info)
{
	if (!info)
		return gcov_info_head;

	return info->next;
}


// ------------------------------------------------------------------------- //

struct gcov_info *_allocate_info(int length, struct gcov_info *aux_info[]) {
  struct gcov_info *walker = (struct gcov_info *)malloc(sizeof(struct gcov_info));

  aux_info[0] = walker;
  walker->next = NULL;

  struct gcov_info *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct gcov_info *)malloc(sizeof(struct gcov_info));
    walker = walker->next;
    aux_info[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_info(struct gcov_info *aux_info[], int aux_info_size) {
  for(int i = 0; i < aux_info_size; i++) 
    if(aux_info[i])
      free(aux_info[i]);
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
          struct gcov_info * aux_info[1];
          struct gcov_info * info = _allocate_info(1, aux_info);
          struct gcov_info * benchRet = gcov_info_next(info);
          _delete_info(aux_info, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
