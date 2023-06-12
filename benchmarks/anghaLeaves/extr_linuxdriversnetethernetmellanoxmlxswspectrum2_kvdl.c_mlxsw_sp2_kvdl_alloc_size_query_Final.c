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
struct mlxsw_sp {int dummy; } ;
typedef  enum mlxsw_sp_kvdl_entry_type { ____Placeholder_mlxsw_sp_kvdl_entry_type } mlxsw_sp_kvdl_entry_type ;

/* Variables and functions */

__attribute__((used)) static int mlxsw_sp2_kvdl_alloc_size_query(struct mlxsw_sp *mlxsw_sp,
					   void *priv,
					   enum mlxsw_sp_kvdl_entry_type type,
					   unsigned int entry_count,
					   unsigned int *p_alloc_count)
{
	*p_alloc_count = entry_count;
	return 0;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          enum mlxsw_sp_kvdl_entry_type type = 0;
        
          unsigned int entry_count = 100;
        
          int _len_mlxsw_sp0 = 1;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              mlxsw_sp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_p_alloc_count0 = 1;
          unsigned int * p_alloc_count = (unsigned int *) malloc(_len_p_alloc_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_alloc_count0; _i0++) {
            p_alloc_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mlxsw_sp2_kvdl_alloc_size_query(mlxsw_sp,priv,type,entry_count,p_alloc_count);
          printf("%d\n", benchRet); 
          free(mlxsw_sp);
          free(p_alloc_count);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          enum mlxsw_sp_kvdl_entry_type type = 0;
        
          unsigned int entry_count = 255;
        
          int _len_mlxsw_sp0 = 65025;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              mlxsw_sp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_p_alloc_count0 = 65025;
          unsigned int * p_alloc_count = (unsigned int *) malloc(_len_p_alloc_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_alloc_count0; _i0++) {
            p_alloc_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mlxsw_sp2_kvdl_alloc_size_query(mlxsw_sp,priv,type,entry_count,p_alloc_count);
          printf("%d\n", benchRet); 
          free(mlxsw_sp);
          free(p_alloc_count);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          enum mlxsw_sp_kvdl_entry_type type = 0;
        
          unsigned int entry_count = 10;
        
          int _len_mlxsw_sp0 = 100;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              mlxsw_sp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_p_alloc_count0 = 100;
          unsigned int * p_alloc_count = (unsigned int *) malloc(_len_p_alloc_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_alloc_count0; _i0++) {
            p_alloc_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mlxsw_sp2_kvdl_alloc_size_query(mlxsw_sp,priv,type,entry_count,p_alloc_count);
          printf("%d\n", benchRet); 
          free(mlxsw_sp);
          free(p_alloc_count);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          enum mlxsw_sp_kvdl_entry_type type = 0;
        
          unsigned int entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mlxsw_sp0 = 1;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              mlxsw_sp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_p_alloc_count0 = 1;
          unsigned int * p_alloc_count = (unsigned int *) malloc(_len_p_alloc_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p_alloc_count0; _i0++) {
            p_alloc_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mlxsw_sp2_kvdl_alloc_size_query(mlxsw_sp,priv,type,entry_count,p_alloc_count);
          printf("%d\n", benchRet); 
          free(mlxsw_sp);
          free(p_alloc_count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
