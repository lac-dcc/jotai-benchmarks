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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  src_addr; int /*<<< orphan*/  dst_addr; } ;
struct rdma_route {TYPE_2__ addr; } ;
struct rdma_cm_id {struct rdma_route route; } ;
struct isert_conn {struct rdma_cm_id* cm_id; } ;
struct TYPE_3__ {int /*<<< orphan*/  ss_family; } ;
struct iscsi_np {TYPE_1__ np_sockaddr; } ;
struct iscsi_conn {int /*<<< orphan*/  local_sockaddr; int /*<<< orphan*/  login_sockaddr; int /*<<< orphan*/  login_family; } ;

/* Variables and functions */

__attribute__((used)) static void
isert_set_conn_info(struct iscsi_np *np, struct iscsi_conn *conn,
		    struct isert_conn *isert_conn)
{
	struct rdma_cm_id *cm_id = isert_conn->cm_id;
	struct rdma_route *cm_route = &cm_id->route;

	conn->login_family = np->np_sockaddr.ss_family;

	conn->login_sockaddr = cm_route->addr.dst_addr;
	conn->local_sockaddr = cm_route->addr.src_addr;
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
          int _len_np0 = 1;
          struct iscsi_np * np = (struct iscsi_np *) malloc(_len_np0*sizeof(struct iscsi_np));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].np_sockaddr.ss_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn0 = 1;
          struct iscsi_conn * conn = (struct iscsi_conn *) malloc(_len_conn0*sizeof(struct iscsi_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0].local_sockaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].login_sockaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].login_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isert_conn0 = 1;
          struct isert_conn * isert_conn = (struct isert_conn *) malloc(_len_isert_conn0*sizeof(struct isert_conn));
          for(int _i0 = 0; _i0 < _len_isert_conn0; _i0++) {
              int _len_isert_conn__i0__cm_id0 = 1;
          isert_conn[_i0].cm_id = (struct rdma_cm_id *) malloc(_len_isert_conn__i0__cm_id0*sizeof(struct rdma_cm_id));
          for(int _j0 = 0; _j0 < _len_isert_conn__i0__cm_id0; _j0++) {
            isert_conn[_i0].cm_id->route.addr.src_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        isert_conn[_i0].cm_id->route.addr.dst_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isert_set_conn_info(np,conn,isert_conn);
          free(np);
          free(conn);
          for(int _aux = 0; _aux < _len_isert_conn0; _aux++) {
          free(isert_conn[_aux].cm_id);
          }
          free(isert_conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
