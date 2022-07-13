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

/* Type definitions */
struct uart_pmac_port {int flags; struct uart_pmac_port* mate; } ;

/* Variables and functions */
 int PMACZILOG_FLAG_IS_CHANNEL_A ; 

__attribute__((used)) static inline struct uart_pmac_port *pmz_get_port_A(struct uart_pmac_port *uap)
{
	if (uap->flags & PMACZILOG_FLAG_IS_CHANNEL_A)
		return uap;
	return uap->mate;
}


// ------------------------------------------------------------------------- //

struct uart_pmac_port *_allocate_uap(int length, struct uart_pmac_port *aux_uap[]) {
  struct uart_pmac_port *walker = (struct uart_pmac_port *)malloc(sizeof(struct uart_pmac_port));

  aux_uap[0] = walker;
walker->flags = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->mate = NULL;

  struct uart_pmac_port *head = walker;
  for(int i = 1; i < length; i++) {
    walker->mate = (struct uart_pmac_port *)malloc(sizeof(struct uart_pmac_port));
    walker = walker->mate;
    aux_uap[i] = walker;
walker->flags = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->mate = NULL;
  }

  return head;
}

void _delete_uap(struct uart_pmac_port *aux_uap[], int aux_uap_size) {
  for(int i = 0; i < aux_uap_size; i++) 
    if(aux_uap[i])
      free(aux_uap[i]);
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
          struct uart_pmac_port * aux_uap[10000];
          struct uart_pmac_port * uap = _allocate_uap(10000, aux_uap);
          struct uart_pmac_port * benchRet = pmz_get_port_A(uap);
          printf("%d\n", (*benchRet).flags);
          _delete_uap(aux_uap, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
