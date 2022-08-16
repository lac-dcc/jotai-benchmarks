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
struct httprequest {scalar_t__ upgrade_request; scalar_t__ upgrade; scalar_t__ done_processing; scalar_t__ connect_port; scalar_t__ callcount; scalar_t__ prot_version; int /*<<< orphan*/  rcmd; scalar_t__ writedelay; scalar_t__ skip; void* ntlm; void* digest; scalar_t__ cl; void* auth; void* auth_req; int /*<<< orphan*/  open; void* connect_request; scalar_t__ partno; int /*<<< orphan*/  testno; scalar_t__ offset; scalar_t__ checkindex; } ;

/* Variables and functions */
 int /*<<< orphan*/  DOCNUMBER_NOTHING ; 
 void* FALSE ; 
 int /*<<< orphan*/  RCMD_NORMALREQ ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static void init_httprequest(struct httprequest *req)
{
  req->checkindex = 0;
  req->offset = 0;
  req->testno = DOCNUMBER_NOTHING;
  req->partno = 0;
  req->connect_request = FALSE;
  req->open = TRUE;
  req->auth_req = FALSE;
  req->auth = FALSE;
  req->cl = 0;
  req->digest = FALSE;
  req->ntlm = FALSE;
  req->skip = 0;
  req->writedelay = 0;
  req->rcmd = RCMD_NORMALREQ;
  req->prot_version = 0;
  req->callcount = 0;
  req->connect_port = 0;
  req->done_processing = 0;
  req->upgrade = 0;
  req->upgrade_request = 0;
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
          int _len_req0 = 1;
          struct httprequest * req = (struct httprequest *) malloc(_len_req0*sizeof(struct httprequest));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].upgrade_request = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].upgrade = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].done_processing = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].connect_port = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].callcount = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].prot_version = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rcmd = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].writedelay = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].skip = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].cl = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].open = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].partno = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].testno = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].checkindex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_httprequest(req);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
