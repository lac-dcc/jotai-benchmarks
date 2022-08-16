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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_data; int m_flags; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;

/* Variables and functions */
 int M_PKTHDR ; 

void
m_adj(struct mbuf *mp, int req_len)
{
	int len = req_len;
	struct mbuf *m;
	int count;

	if ((m = mp) == NULL)
		return;
	if (len >= 0) {
		/*
		 * Trim from head.
		 */
		while (m != NULL && len > 0) {
			if (m->m_len <= len) {
				len -= m->m_len;
				m->m_len = 0;
				m = m->m_next;
			} else {
				m->m_len -= len;
				m->m_data += len;
				len = 0;
			}
		}
		m = mp;
		if (m->m_flags & M_PKTHDR)
			m->m_pkthdr.len -= (req_len - len);
	} else {
		/*
		 * Trim from tail.  Scan the mbuf chain,
		 * calculating its length and finding the last mbuf.
		 * If the adjustment only affects this mbuf, then just
		 * adjust and return.  Otherwise, rescan and truncate
		 * after the remaining size.
		 */
		len = -len;
		count = 0;
		for (;;) {
			count += m->m_len;
			if (m->m_next == (struct mbuf *)0)
				break;
			m = m->m_next;
		}
		if (m->m_len >= len) {
			m->m_len -= len;
			m = mp;
			if (m->m_flags & M_PKTHDR)
				m->m_pkthdr.len -= len;
			return;
		}
		count -= len;
		if (count < 0)
			count = 0;
		/*
		 * Correct length for chain is "count".
		 * Find the mbuf with last data, adjust its length,
		 * and toss data from remaining mbufs on chain.
		 */
		m = mp;
		if (m->m_flags & M_PKTHDR)
			m->m_pkthdr.len = count;
		for (; m; m = m->m_next) {
			if (m->m_len >= count) {
				m->m_len = count;
				break;
			}
			count -= m->m_len;
		}
		while ((m = m->m_next))
			m->m_len = 0;
	}
}


// ------------------------------------------------------------------------- //

struct mbuf *_allocate_mp(int length, struct mbuf *aux_mp[]) {
  struct mbuf *walker = (struct mbuf *)malloc(sizeof(struct mbuf));

  aux_mp[0] = walker;
walker->m_len = ((-2 * (next_i()%2)) + 1) * next_i();
walker->m_data = ((-2 * (next_i()%2)) + 1) * next_i();
walker->m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->m_next = NULL;
walker->m_pkthdr.len = ((-2 * (next_i()%2)) + 1) * next_i();

  struct mbuf *head = walker;
  for(int i = 1; i < length; i++) {
    walker->m_next = (struct mbuf *)malloc(sizeof(struct mbuf));
    walker = walker->m_next;
    aux_mp[i] = walker;
walker->m_len = ((-2 * (next_i()%2)) + 1) * next_i();
walker->m_data = ((-2 * (next_i()%2)) + 1) * next_i();
walker->m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->m_next = NULL;
walker->m_pkthdr.len = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_mp(struct mbuf *aux_mp[], int aux_mp_size) {
  for(int i = 0; i < aux_mp_size; i++) 
    if(aux_mp[i])
      free(aux_mp[i]);
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
          int req_len = 100;
          struct mbuf * aux_mp[1];
          struct mbuf * mp = _allocate_mp(1, aux_mp);
          m_adj(mp,req_len);
          _delete_mp(aux_mp, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
