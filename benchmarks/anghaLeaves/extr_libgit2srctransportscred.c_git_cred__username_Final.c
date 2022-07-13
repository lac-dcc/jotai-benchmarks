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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {char const* username; } ;
typedef  TYPE_1__ git_cred_userpass_plaintext ;
struct TYPE_9__ {char const* username; } ;
typedef  TYPE_2__ git_cred_username ;
struct TYPE_10__ {char const* username; } ;
typedef  TYPE_3__ git_cred_ssh_key ;
struct TYPE_11__ {char const* username; } ;
typedef  TYPE_4__ git_cred_ssh_interactive ;
struct TYPE_12__ {char const* username; } ;
typedef  TYPE_5__ git_cred_ssh_custom ;
struct TYPE_13__ {int credtype; } ;
typedef  TYPE_6__ git_cred ;

/* Variables and functions */
#define  GIT_CREDTYPE_SSH_CUSTOM 133 
#define  GIT_CREDTYPE_SSH_INTERACTIVE 132 
#define  GIT_CREDTYPE_SSH_KEY 131 
#define  GIT_CREDTYPE_SSH_MEMORY 130 
#define  GIT_CREDTYPE_USERNAME 129 
#define  GIT_CREDTYPE_USERPASS_PLAINTEXT 128 

const char *git_cred__username(git_cred *cred)
{
	switch (cred->credtype) {
	case GIT_CREDTYPE_USERNAME:
	{
		git_cred_username *c = (git_cred_username *) cred;
		return c->username;
	}
	case GIT_CREDTYPE_USERPASS_PLAINTEXT:
	{
		git_cred_userpass_plaintext *c = (git_cred_userpass_plaintext *) cred;
		return c->username;
	}
	case GIT_CREDTYPE_SSH_KEY:
	case GIT_CREDTYPE_SSH_MEMORY:
	{
		git_cred_ssh_key *c = (git_cred_ssh_key *) cred;
		return c->username;
	}
	case GIT_CREDTYPE_SSH_CUSTOM:
	{
		git_cred_ssh_custom *c = (git_cred_ssh_custom *) cred;
		return c->username;
	}
	case GIT_CREDTYPE_SSH_INTERACTIVE:
	{
		git_cred_ssh_interactive *c = (git_cred_ssh_interactive *) cred;
		return c->username;
	}

	default:
		return NULL;
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
          int _len_cred0 = 1;
          struct TYPE_13__ * cred = (struct TYPE_13__ *) malloc(_len_cred0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
            cred[_i0].credtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = git_cred__username(cred);
          printf("{{other_type}} %p\n", &benchRet); 
          free(cred);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cred0 = 65025;
          struct TYPE_13__ * cred = (struct TYPE_13__ *) malloc(_len_cred0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
            cred[_i0].credtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = git_cred__username(cred);
          printf("{{other_type}} %p\n", &benchRet); 
          free(cred);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cred0 = 100;
          struct TYPE_13__ * cred = (struct TYPE_13__ *) malloc(_len_cred0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
            cred[_i0].credtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = git_cred__username(cred);
          printf("{{other_type}} %p\n", &benchRet); 
          free(cred);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
