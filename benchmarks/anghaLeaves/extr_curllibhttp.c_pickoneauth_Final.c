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
       3            empty\n\
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
struct auth {unsigned long avail; unsigned long want; unsigned long picked; } ;

/* Variables and functions */
 unsigned long CURLAUTH_BASIC ; 
 unsigned long CURLAUTH_BEARER ; 
 unsigned long CURLAUTH_DIGEST ; 
 unsigned long CURLAUTH_NEGOTIATE ; 
 unsigned long CURLAUTH_NONE ; 
 unsigned long CURLAUTH_NTLM ; 
 unsigned long CURLAUTH_NTLM_WB ; 
 unsigned long CURLAUTH_PICKNONE ; 
 int FALSE ; 
 int TRUE ; 

__attribute__((used)) static bool pickoneauth(struct auth *pick, unsigned long mask)
{
  bool picked;
  /* only deal with authentication we want */
  unsigned long avail = pick->avail & pick->want & mask;
  picked = TRUE;

  /* The order of these checks is highly relevant, as this will be the order
     of preference in case of the existence of multiple accepted types. */
  if(avail & CURLAUTH_NEGOTIATE)
    pick->picked = CURLAUTH_NEGOTIATE;
  else if(avail & CURLAUTH_BEARER)
    pick->picked = CURLAUTH_BEARER;
  else if(avail & CURLAUTH_DIGEST)
    pick->picked = CURLAUTH_DIGEST;
  else if(avail & CURLAUTH_NTLM)
    pick->picked = CURLAUTH_NTLM;
  else if(avail & CURLAUTH_NTLM_WB)
    pick->picked = CURLAUTH_NTLM_WB;
  else if(avail & CURLAUTH_BASIC)
    pick->picked = CURLAUTH_BASIC;
  else {
    pick->picked = CURLAUTH_PICKNONE; /* we select to use nothing */
    picked = FALSE;
  }
  pick->avail = CURLAUTH_NONE; /* clear it here */

  return picked;
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
          unsigned long mask = 100;
        
          int _len_pick0 = 1;
          struct auth * pick = (struct auth *) malloc(_len_pick0*sizeof(struct auth));
          for(int _i0 = 0; _i0 < _len_pick0; _i0++) {
              pick[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].want = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].picked = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pickoneauth(pick,mask);
          printf("%d\n", benchRet); 
          free(pick);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long mask = 255;
        
          int _len_pick0 = 65025;
          struct auth * pick = (struct auth *) malloc(_len_pick0*sizeof(struct auth));
          for(int _i0 = 0; _i0 < _len_pick0; _i0++) {
              pick[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].want = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].picked = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pickoneauth(pick,mask);
          printf("%d\n", benchRet); 
          free(pick);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long mask = 10;
        
          int _len_pick0 = 100;
          struct auth * pick = (struct auth *) malloc(_len_pick0*sizeof(struct auth));
          for(int _i0 = 0; _i0 < _len_pick0; _i0++) {
              pick[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].want = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].picked = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pickoneauth(pick,mask);
          printf("%d\n", benchRet); 
          free(pick);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pick0 = 1;
          struct auth * pick = (struct auth *) malloc(_len_pick0*sizeof(struct auth));
          for(int _i0 = 0; _i0 < _len_pick0; _i0++) {
              pick[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].want = ((-2 * (next_i()%2)) + 1) * next_i();
          pick[_i0].picked = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pickoneauth(pick,mask);
          printf("%d\n", benchRet); 
          free(pick);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
