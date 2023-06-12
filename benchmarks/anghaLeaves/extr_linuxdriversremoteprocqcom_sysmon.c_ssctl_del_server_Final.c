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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct qmi_service {struct qcom_sysmon* priv; } ;
struct qmi_handle {int dummy; } ;
struct qcom_sysmon {scalar_t__ ssctl_version; } ;

/* Variables and functions */

__attribute__((used)) static void ssctl_del_server(struct qmi_handle *qmi, struct qmi_service *svc)
{
	struct qcom_sysmon *sysmon = svc->priv;

	sysmon->ssctl_version = 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_qmi0 = 65025;
          struct qmi_handle * qmi = (struct qmi_handle *) malloc(_len_qmi0*sizeof(struct qmi_handle));
          for(int _i0 = 0; _i0 < _len_qmi0; _i0++) {
              qmi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_svc0 = 65025;
          struct qmi_service * svc = (struct qmi_service *) malloc(_len_svc0*sizeof(struct qmi_service));
          for(int _i0 = 0; _i0 < _len_svc0; _i0++) {
              int _len_svc__i0__priv0 = 1;
          svc[_i0].priv = (struct qcom_sysmon *) malloc(_len_svc__i0__priv0*sizeof(struct qcom_sysmon));
          for(int _j0 = 0; _j0 < _len_svc__i0__priv0; _j0++) {
              svc[_i0].priv->ssctl_version = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ssctl_del_server(qmi,svc);
          free(qmi);
          for(int _aux = 0; _aux < _len_svc0; _aux++) {
          free(svc[_aux].priv);
          }
          free(svc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_qmi0 = 100;
          struct qmi_handle * qmi = (struct qmi_handle *) malloc(_len_qmi0*sizeof(struct qmi_handle));
          for(int _i0 = 0; _i0 < _len_qmi0; _i0++) {
              qmi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_svc0 = 100;
          struct qmi_service * svc = (struct qmi_service *) malloc(_len_svc0*sizeof(struct qmi_service));
          for(int _i0 = 0; _i0 < _len_svc0; _i0++) {
              int _len_svc__i0__priv0 = 1;
          svc[_i0].priv = (struct qcom_sysmon *) malloc(_len_svc__i0__priv0*sizeof(struct qcom_sysmon));
          for(int _j0 = 0; _j0 < _len_svc__i0__priv0; _j0++) {
              svc[_i0].priv->ssctl_version = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ssctl_del_server(qmi,svc);
          free(qmi);
          for(int _aux = 0; _aux < _len_svc0; _aux++) {
          free(svc[_aux].priv);
          }
          free(svc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_qmi0 = 1;
          struct qmi_handle * qmi = (struct qmi_handle *) malloc(_len_qmi0*sizeof(struct qmi_handle));
          for(int _i0 = 0; _i0 < _len_qmi0; _i0++) {
              qmi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_svc0 = 1;
          struct qmi_service * svc = (struct qmi_service *) malloc(_len_svc0*sizeof(struct qmi_service));
          for(int _i0 = 0; _i0 < _len_svc0; _i0++) {
              int _len_svc__i0__priv0 = 1;
          svc[_i0].priv = (struct qcom_sysmon *) malloc(_len_svc__i0__priv0*sizeof(struct qcom_sysmon));
          for(int _j0 = 0; _j0 < _len_svc__i0__priv0; _j0++) {
              svc[_i0].priv->ssctl_version = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ssctl_del_server(qmi,svc);
          free(qmi);
          for(int _aux = 0; _aux < _len_svc0; _aux++) {
          free(svc[_aux].priv);
          }
          free(svc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
