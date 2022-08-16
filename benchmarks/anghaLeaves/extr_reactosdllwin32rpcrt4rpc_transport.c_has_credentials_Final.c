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
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_15__ {scalar_t__ AuthenticationTarget; TYPE_5__* TransportCredentials; int /*<<< orphan*/  NumberOfAuthnSchemes; } ;
struct TYPE_12__ {TYPE_3__* QOS; } ;
struct TYPE_14__ {TYPE_4__ common; } ;
struct TYPE_13__ {int /*<<< orphan*/  Password; int /*<<< orphan*/  User; } ;
struct TYPE_11__ {TYPE_2__* qos; } ;
struct TYPE_9__ {TYPE_7__* HttpCredentials; } ;
struct TYPE_10__ {scalar_t__ AdditionalSecurityInfoType; TYPE_1__ u; } ;
typedef  TYPE_5__ SEC_WINNT_AUTH_IDENTITY_W ;
typedef  TYPE_6__ RpcConnection_http ;
typedef  TYPE_7__ RPC_HTTP_TRANSPORT_CREDENTIALS_W ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 scalar_t__ RPC_C_AUTHN_INFO_TYPE_HTTP ; 
 scalar_t__ RPC_C_HTTP_AUTHN_TARGET_SERVER ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL has_credentials(RpcConnection_http *httpc)
{
    RPC_HTTP_TRANSPORT_CREDENTIALS_W *creds;
    SEC_WINNT_AUTH_IDENTITY_W *id;

    if (!httpc->common.QOS || httpc->common.QOS->qos->AdditionalSecurityInfoType != RPC_C_AUTHN_INFO_TYPE_HTTP)
        return FALSE;

    creds = httpc->common.QOS->qos->u.HttpCredentials;
    if (creds->AuthenticationTarget != RPC_C_HTTP_AUTHN_TARGET_SERVER || !creds->NumberOfAuthnSchemes)
        return FALSE;

    id = creds->TransportCredentials;
    if (!id || !id->User || !id->Password) return FALSE;

    return TRUE;
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
          int _len_httpc0 = 1;
          struct TYPE_14__ * httpc = (struct TYPE_14__ *) malloc(_len_httpc0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_httpc0; _i0++) {
              int _len_httpc__i0__common_QOS0 = 1;
          httpc[_i0].common.QOS = (struct TYPE_11__ *) malloc(_len_httpc__i0__common_QOS0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_httpc__i0__common_QOS0; _j0++) {
              int _len_httpc__i0__common_QOS_qos0 = 1;
          httpc[_i0].common.QOS->qos = (struct TYPE_10__ *) malloc(_len_httpc__i0__common_QOS_qos0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_httpc__i0__common_QOS_qos0; _j0++) {
            httpc[_i0].common.QOS->qos->AdditionalSecurityInfoType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_httpc__i0__common_QOS_qos_u_HttpCredentials0 = 1;
          httpc[_i0].common.QOS->qos->u.HttpCredentials = (struct TYPE_15__ *) malloc(_len_httpc__i0__common_QOS_qos_u_HttpCredentials0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_httpc__i0__common_QOS_qos_u_HttpCredentials0; _j0++) {
            httpc[_i0].common.QOS->qos->u.HttpCredentials->AuthenticationTarget = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_httpc__i0__common_QOS_qos_u_HttpCredentials_TransportCredentials0 = 1;
          httpc[_i0].common.QOS->qos->u.HttpCredentials->TransportCredentials = (struct TYPE_13__ *) malloc(_len_httpc__i0__common_QOS_qos_u_HttpCredentials_TransportCredentials0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_httpc__i0__common_QOS_qos_u_HttpCredentials_TransportCredentials0; _j0++) {
            httpc[_i0].common.QOS->qos->u.HttpCredentials->TransportCredentials->Password = ((-2 * (next_i()%2)) + 1) * next_i();
        httpc[_i0].common.QOS->qos->u.HttpCredentials->TransportCredentials->User = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        httpc[_i0].common.QOS->qos->u.HttpCredentials->NumberOfAuthnSchemes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = has_credentials(httpc);
          printf("%d\n", benchRet); 
          free(httpc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
