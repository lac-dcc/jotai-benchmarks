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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_11__ {int /*<<< orphan*/  s_addr; } ;
struct inpcb {int inp_vflag; int /*<<< orphan*/  in6p_faddr; int /*<<< orphan*/  inp_fport; int /*<<< orphan*/  in6p_laddr; int /*<<< orphan*/  inp_lport; TYPE_6__ inp_faddr; TYPE_3__ inp_laddr; } ;
struct TYPE_12__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_13__ {TYPE_4__ ia46_addr4; } ;
struct TYPE_16__ {int /*<<< orphan*/  addr6; TYPE_5__ addr46; } ;
struct TYPE_9__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_10__ {TYPE_1__ ia46_addr4; } ;
struct TYPE_15__ {int /*<<< orphan*/  addr6; TYPE_2__ addr46; } ;
struct cfil_hash_entry {int /*<<< orphan*/  cfentry_family; TYPE_8__ cfentry_faddr; int /*<<< orphan*/  cfentry_fport; TYPE_7__ cfentry_laddr; int /*<<< orphan*/  cfentry_lport; } ;

/* Variables and functions */
 int /*<<< orphan*/  AF_INET ; 
 int /*<<< orphan*/  AF_INET6 ; 
 int FALSE ; 
 int INP_IPV4 ; 
 int INP_IPV6 ; 
 int TRUE ; 

__attribute__((used)) static bool
fill_cfil_hash_entry_from_inp(struct cfil_hash_entry *entry, bool isLocal, struct inpcb *inp)
{
    if (entry == NULL || inp == NULL) {
        return FALSE;
    }
    
    if (inp->inp_vflag & INP_IPV4) {
        if (isLocal == TRUE) {
            entry->cfentry_lport = inp->inp_lport;
            entry->cfentry_laddr.addr46.ia46_addr4.s_addr = inp->inp_laddr.s_addr;
        } else {
            entry->cfentry_fport = inp->inp_fport;
            entry->cfentry_faddr.addr46.ia46_addr4.s_addr = inp->inp_faddr.s_addr;
        }
        entry->cfentry_family = AF_INET;
        return TRUE;
    } else if (inp->inp_vflag & INP_IPV6) {
        if (isLocal == TRUE) {
            entry->cfentry_lport = inp->inp_lport;
            entry->cfentry_laddr.addr6 = inp->in6p_laddr;
        } else {
            entry->cfentry_fport = inp->inp_fport;
            entry->cfentry_faddr.addr6 = inp->in6p_faddr;
        }
        entry->cfentry_family = AF_INET6;
        return TRUE;
    }
    return FALSE;
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
          int isLocal = 100;
          int _len_entry0 = 1;
          struct cfil_hash_entry * entry = (struct cfil_hash_entry *) malloc(_len_entry0*sizeof(struct cfil_hash_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].cfentry_family = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_faddr.addr6 = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_faddr.addr46.ia46_addr4.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_laddr.addr6 = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_laddr.addr46.ia46_addr4.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].cfentry_lport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inp0 = 1;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].inp_vflag = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_faddr = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_fport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].in6p_laddr = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_faddr.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_laddr.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fill_cfil_hash_entry_from_inp(entry,isLocal,inp);
          printf("%d\n", benchRet); 
          free(entry);
          free(inp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
