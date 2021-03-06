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
       0            int-bounds\n\
       1            linked\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut8 ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef  TYPE_1__ OMF_record_handler ;
typedef  TYPE_2__ OMF_record ;

/* Variables and functions */

__attribute__((used)) static OMF_record_handler *get_next_omf_record_type(OMF_record_handler *tmp, ut8 type) {
	while (tmp) {
		if (((OMF_record *)tmp)->type == type) {
			return (tmp);
		}
		tmp = tmp->next;
	}
	return NULL;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_tmp(int length, struct TYPE_5__ *aux_tmp[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tmp[0] = walker;
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_tmp[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_tmp(struct TYPE_5__ *aux_tmp[], int aux_tmp_size) {
  for(int i = 0; i < aux_tmp_size; i++) 
    if(aux_tmp[i])
      free(aux_tmp[i]);
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
          long type = 100;
          struct TYPE_5__ * aux_tmp[1];
          struct TYPE_5__ * tmp = _allocate_tmp(1, aux_tmp);
          struct TYPE_5__ * benchRet = get_next_omf_record_type(tmp,type);
          _delete_tmp(aux_tmp, 1);
        
        break;
    }
    // linked
    case 1:
    {
          long type = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_5__ * aux_tmp[10000];
          struct TYPE_5__ * tmp = _allocate_tmp(10000, aux_tmp);
          struct TYPE_5__ * benchRet = get_next_omf_record_type(tmp,type);
          _delete_tmp(aux_tmp, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
