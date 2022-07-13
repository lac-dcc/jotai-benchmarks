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
       0            linked\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int breaks; struct TYPE_3__* next; } ;
typedef  TYPE_1__ PullupField ;

/* Variables and functions */
 int BREAK_LEFT ; 
 int BREAK_RIGHT ; 

__attribute__((used)) static int find_first_break(PullupField *f, int max)
{
    int i;

    for (i = 0; i < max; i++) {
        if (f->breaks & BREAK_RIGHT || f->next->breaks & BREAK_LEFT)
            return i + 1;
        f = f->next;
    }

    return 0;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_f(int length, struct TYPE_3__ *aux_f[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_f[0] = walker;
walker->breaks = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_f[i] = walker;
walker->breaks = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_f(struct TYPE_3__ *aux_f[], int aux_f_size) {
  for(int i = 0; i < aux_f_size; i++) 
    if(aux_f[i])
      free(aux_f[i]);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // linked
    case 0:
    {
          int max = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_3__ * aux_f[10000];
          struct TYPE_3__ * f = _allocate_f(10000, aux_f);
          int benchRet = find_first_break(f,max);
          printf("%d\n", benchRet); 
          _delete_f(aux_f, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
