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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* module_warmup_disable; int /*<<< orphan*/  module_unstable_warning; int /*<<< orphan*/  module_tmp_size; int /*<<< orphan*/  module_st_pass; int /*<<< orphan*/  module_st_hash; void* module_separator; int /*<<< orphan*/  module_salt_type; void* module_salt_min; void* module_salt_max; void* module_pw_min; int /*<<< orphan*/  module_pw_max; void* module_pwdump_column; void* module_potfile_keep_all_hashes; void* module_potfile_disable; void* module_potfile_custom_check; void* module_outfile_check_nocomp; void* module_outfile_check_disable; int /*<<< orphan*/  module_opts_type; int /*<<< orphan*/  module_opti_type; void* module_kern_type_dynamic; int /*<<< orphan*/  module_kern_type; void* module_kernel_threads_min; void* module_kernel_threads_max; void* module_kernel_loops_min; void* module_kernel_loops_max; void* module_kernel_accel_min; void* module_kernel_accel_max; void* module_jit_cache_disable; int /*<<< orphan*/  module_jit_build_options; void* module_hook_size; void* module_hook_salt_size; void* module_hook23; void* module_hook12; void* module_hlfmt_disable; int /*<<< orphan*/  module_hash_name; int /*<<< orphan*/  module_hash_category; void* module_hash_mode; void* module_hash_init_selftest; int /*<<< orphan*/  module_hash_encode; void* module_hash_encode_potfile; void* module_hash_encode_status; int /*<<< orphan*/  module_hash_decode; void* module_hash_decode_zero_hash; void* module_hash_decode_potfile; void* module_hash_binary_save; void* module_hash_binary_parse; void* module_hash_binary_count; void* module_forced_outfile_format; void* module_extra_tmp_size; void* module_extra_buffer_size; int /*<<< orphan*/  module_esalt_size; void* module_dictstat_disable; int /*<<< orphan*/  module_dgst_size; int /*<<< orphan*/  module_dgst_pos3; int /*<<< orphan*/  module_dgst_pos2; int /*<<< orphan*/  module_dgst_pos1; int /*<<< orphan*/  module_dgst_pos0; void* module_deep_comp_kernel; void* module_build_plain_postprocess; void* module_benchmark_salt; void* module_benchmark_mask; void* module_benchmark_hook_salt; void* module_benchmark_esalt; int /*<<< orphan*/  module_attack_exec; int /*<<< orphan*/  module_interface_version; int /*<<< orphan*/  module_context_size; } ;
typedef  TYPE_1__ module_ctx_t ;

/* Variables and functions */
 int /*<<< orphan*/  MODULE_CONTEXT_SIZE_CURRENT ; 
 void* MODULE_DEFAULT ; 
 int /*<<< orphan*/  MODULE_INTERFACE_VERSION_CURRENT ; 
 int /*<<< orphan*/  module_attack_exec ; 
 int /*<<< orphan*/  module_dgst_pos0 ; 
 int /*<<< orphan*/  module_dgst_pos1 ; 
 int /*<<< orphan*/  module_dgst_pos2 ; 
 int /*<<< orphan*/  module_dgst_pos3 ; 
 int /*<<< orphan*/  module_dgst_size ; 
 int /*<<< orphan*/  module_esalt_size ; 
 int /*<<< orphan*/  module_hash_category ; 
 int /*<<< orphan*/  module_hash_decode ; 
 int /*<<< orphan*/  module_hash_encode ; 
 int /*<<< orphan*/  module_hash_name ; 
 int /*<<< orphan*/  module_jit_build_options ; 
 int /*<<< orphan*/  module_kern_type ; 
 int /*<<< orphan*/  module_opti_type ; 
 int /*<<< orphan*/  module_opts_type ; 
 int /*<<< orphan*/  module_pw_max ; 
 int /*<<< orphan*/  module_salt_type ; 
 int /*<<< orphan*/  module_st_hash ; 
 int /*<<< orphan*/  module_st_pass ; 
 int /*<<< orphan*/  module_tmp_size ; 
 int /*<<< orphan*/  module_unstable_warning ; 

void module_init (module_ctx_t *module_ctx)
{
  module_ctx->module_context_size             = MODULE_CONTEXT_SIZE_CURRENT;
  module_ctx->module_interface_version        = MODULE_INTERFACE_VERSION_CURRENT;

  module_ctx->module_attack_exec              = module_attack_exec;
  module_ctx->module_benchmark_esalt          = MODULE_DEFAULT;
  module_ctx->module_benchmark_hook_salt      = MODULE_DEFAULT;
  module_ctx->module_benchmark_mask           = MODULE_DEFAULT;
  module_ctx->module_benchmark_salt           = MODULE_DEFAULT;
  module_ctx->module_build_plain_postprocess  = MODULE_DEFAULT;
  module_ctx->module_deep_comp_kernel         = MODULE_DEFAULT;
  module_ctx->module_dgst_pos0                = module_dgst_pos0;
  module_ctx->module_dgst_pos1                = module_dgst_pos1;
  module_ctx->module_dgst_pos2                = module_dgst_pos2;
  module_ctx->module_dgst_pos3                = module_dgst_pos3;
  module_ctx->module_dgst_size                = module_dgst_size;
  module_ctx->module_dictstat_disable         = MODULE_DEFAULT;
  module_ctx->module_esalt_size               = module_esalt_size;
  module_ctx->module_extra_buffer_size        = MODULE_DEFAULT;
  module_ctx->module_extra_tmp_size           = MODULE_DEFAULT;
  module_ctx->module_forced_outfile_format    = MODULE_DEFAULT;
  module_ctx->module_hash_binary_count        = MODULE_DEFAULT;
  module_ctx->module_hash_binary_parse        = MODULE_DEFAULT;
  module_ctx->module_hash_binary_save         = MODULE_DEFAULT;
  module_ctx->module_hash_decode_potfile      = MODULE_DEFAULT;
  module_ctx->module_hash_decode_zero_hash    = MODULE_DEFAULT;
  module_ctx->module_hash_decode              = module_hash_decode;
  module_ctx->module_hash_encode_status       = MODULE_DEFAULT;
  module_ctx->module_hash_encode_potfile      = MODULE_DEFAULT;
  module_ctx->module_hash_encode              = module_hash_encode;
  module_ctx->module_hash_init_selftest       = MODULE_DEFAULT;
  module_ctx->module_hash_mode                = MODULE_DEFAULT;
  module_ctx->module_hash_category            = module_hash_category;
  module_ctx->module_hash_name                = module_hash_name;
  module_ctx->module_hlfmt_disable            = MODULE_DEFAULT;
  module_ctx->module_hook12                   = MODULE_DEFAULT;
  module_ctx->module_hook23                   = MODULE_DEFAULT;
  module_ctx->module_hook_salt_size           = MODULE_DEFAULT;
  module_ctx->module_hook_size                = MODULE_DEFAULT;
  module_ctx->module_jit_build_options        = module_jit_build_options;
  module_ctx->module_jit_cache_disable        = MODULE_DEFAULT;
  module_ctx->module_kernel_accel_max         = MODULE_DEFAULT;
  module_ctx->module_kernel_accel_min         = MODULE_DEFAULT;
  module_ctx->module_kernel_loops_max         = MODULE_DEFAULT;
  module_ctx->module_kernel_loops_min         = MODULE_DEFAULT;
  module_ctx->module_kernel_threads_max       = MODULE_DEFAULT;
  module_ctx->module_kernel_threads_min       = MODULE_DEFAULT;
  module_ctx->module_kern_type                = module_kern_type;
  module_ctx->module_kern_type_dynamic        = MODULE_DEFAULT;
  module_ctx->module_opti_type                = module_opti_type;
  module_ctx->module_opts_type                = module_opts_type;
  module_ctx->module_outfile_check_disable    = MODULE_DEFAULT;
  module_ctx->module_outfile_check_nocomp     = MODULE_DEFAULT;
  module_ctx->module_potfile_custom_check     = MODULE_DEFAULT;
  module_ctx->module_potfile_disable          = MODULE_DEFAULT;
  module_ctx->module_potfile_keep_all_hashes  = MODULE_DEFAULT;
  module_ctx->module_pwdump_column            = MODULE_DEFAULT;
  module_ctx->module_pw_max                   = module_pw_max;
  module_ctx->module_pw_min                   = MODULE_DEFAULT;
  module_ctx->module_salt_max                 = MODULE_DEFAULT;
  module_ctx->module_salt_min                 = MODULE_DEFAULT;
  module_ctx->module_salt_type                = module_salt_type;
  module_ctx->module_separator                = MODULE_DEFAULT;
  module_ctx->module_st_hash                  = module_st_hash;
  module_ctx->module_st_pass                  = module_st_pass;
  module_ctx->module_tmp_size                 = module_tmp_size;
  module_ctx->module_unstable_warning         = module_unstable_warning;
  module_ctx->module_warmup_disable           = MODULE_DEFAULT;
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
          int _len_module_ctx0 = 1;
          struct TYPE_3__ * module_ctx = (struct TYPE_3__ *) malloc(_len_module_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_module_ctx0; _i0++) {
            module_ctx[_i0].module_unstable_warning = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_tmp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_st_pass = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_st_hash = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_salt_type = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_pw_max = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_opts_type = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_opti_type = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_kern_type = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_jit_build_options = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_hash_name = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_hash_category = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_hash_encode = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_hash_decode = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_esalt_size = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_dgst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_dgst_pos3 = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_dgst_pos2 = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_dgst_pos1 = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_dgst_pos0 = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_attack_exec = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_interface_version = ((-2 * (next_i()%2)) + 1) * next_i();
        module_ctx[_i0].module_context_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          module_init(module_ctx);
          free(module_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
