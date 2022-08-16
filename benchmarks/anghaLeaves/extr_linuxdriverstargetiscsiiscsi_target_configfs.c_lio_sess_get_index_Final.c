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
typedef  int /*<<< orphan*/  u32 ;
struct se_session {struct iscsi_session* fabric_sess_ptr; } ;
struct iscsi_session {int /*<<< orphan*/  session_index; } ;

/* Variables and functions */

__attribute__((used)) static u32 lio_sess_get_index(struct se_session *se_sess)
{
	struct iscsi_session *sess = se_sess->fabric_sess_ptr;

	return sess->session_index;
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
          int _len_se_sess0 = 1;
          struct se_session * se_sess = (struct se_session *) malloc(_len_se_sess0*sizeof(struct se_session));
          for(int _i0 = 0; _i0 < _len_se_sess0; _i0++) {
              int _len_se_sess__i0__fabric_sess_ptr0 = 1;
          se_sess[_i0].fabric_sess_ptr = (struct iscsi_session *) malloc(_len_se_sess__i0__fabric_sess_ptr0*sizeof(struct iscsi_session));
          for(int _j0 = 0; _j0 < _len_se_sess__i0__fabric_sess_ptr0; _j0++) {
            se_sess[_i0].fabric_sess_ptr->session_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lio_sess_get_index(se_sess);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_se_sess0; _aux++) {
          free(se_sess[_aux].fabric_sess_ptr);
          }
          free(se_sess);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
