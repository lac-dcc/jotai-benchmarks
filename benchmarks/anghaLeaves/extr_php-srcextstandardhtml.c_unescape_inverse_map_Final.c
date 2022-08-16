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
typedef  int /*<<< orphan*/  entity_ht ;

/* Variables and functions */
#define  ENT_HTML_DOC_HTML401 130 
#define  ENT_HTML_DOC_HTML5 129 
 int ENT_HTML_DOC_TYPE_MASK ; 
#define  ENT_HTML_DOC_XHTML 128 
 int /*<<< orphan*/  const ent_ht_be_apos ; 
 int /*<<< orphan*/  const ent_ht_be_noapos ; 
 int /*<<< orphan*/  const ent_ht_html4 ; 
 int /*<<< orphan*/  const ent_ht_html5 ; 

__attribute__((used)) static const entity_ht *unescape_inverse_map(int all, int flags)
{
	int document_type = flags & ENT_HTML_DOC_TYPE_MASK;

	if (all) {
		switch (document_type) {
		case ENT_HTML_DOC_HTML401:
		case ENT_HTML_DOC_XHTML: /* but watch out for &apos;...*/
			return &ent_ht_html4;
		case ENT_HTML_DOC_HTML5:
			return &ent_ht_html5;
		default:
			return &ent_ht_be_apos;
		}
	} else {
		switch (document_type) {
		case ENT_HTML_DOC_HTML401:
			return &ent_ht_be_noapos;
		default:
			return &ent_ht_be_apos;
		}
	}
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
          int all = 100;
          int flags = 100;
          const int * benchRet = unescape_inverse_map(all,flags);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int all = 255;
          int flags = 255;
          const int * benchRet = unescape_inverse_map(all,flags);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int all = 10;
          int flags = 10;
          const int * benchRet = unescape_inverse_map(all,flags);
          printf("%d\n", (*benchRet)); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
