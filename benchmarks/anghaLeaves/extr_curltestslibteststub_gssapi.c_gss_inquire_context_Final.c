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
typedef  int /*<<< orphan*/  gss_name_t ;
typedef  int /*<<< orphan*/  gss_const_ctx_id_t ;
typedef  int /*<<< orphan*/  gss_OID ;
typedef  int /*<<< orphan*/  OM_uint32 ;

/* Variables and functions */
 int /*<<< orphan*/  GSS_S_FAILURE ; 

OM_uint32 gss_inquire_context(OM_uint32 *min,
                              gss_const_ctx_id_t context_handle,
                              gss_name_t *src_name,
                              gss_name_t *targ_name,
                              OM_uint32 *lifetime_rec,
                              gss_OID *mech_type,
                              OM_uint32 *ctx_flags,
                              int *locally_initiated,
                              int *open_context)
{
  (void)min;
  (void)context_handle;
  (void)src_name;
  (void)targ_name;
  (void)lifetime_rec;
  (void)mech_type;
  (void)ctx_flags;
  (void)locally_initiated;
  (void)open_context;
  return GSS_S_FAILURE;
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
          int context_handle = 100;
          int _len_min0 = 1;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_name0 = 1;
          int * src_name = (int *) malloc(_len_src_name0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_name0; _i0++) {
            src_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_targ_name0 = 1;
          int * targ_name = (int *) malloc(_len_targ_name0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_targ_name0; _i0++) {
            targ_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lifetime_rec0 = 1;
          int * lifetime_rec = (int *) malloc(_len_lifetime_rec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lifetime_rec0; _i0++) {
            lifetime_rec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mech_type0 = 1;
          int * mech_type = (int *) malloc(_len_mech_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mech_type0; _i0++) {
            mech_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx_flags0 = 1;
          int * ctx_flags = (int *) malloc(_len_ctx_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx_flags0; _i0++) {
            ctx_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_locally_initiated0 = 1;
          int * locally_initiated = (int *) malloc(_len_locally_initiated0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_locally_initiated0; _i0++) {
            locally_initiated[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_open_context0 = 1;
          int * open_context = (int *) malloc(_len_open_context0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_open_context0; _i0++) {
            open_context[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gss_inquire_context(min,context_handle,src_name,targ_name,lifetime_rec,mech_type,ctx_flags,locally_initiated,open_context);
          printf("%d\n", benchRet); 
          free(min);
          free(src_name);
          free(targ_name);
          free(lifetime_rec);
          free(mech_type);
          free(ctx_flags);
          free(locally_initiated);
          free(open_context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
