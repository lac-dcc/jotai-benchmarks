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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  emit_config_values; int /*<<< orphan*/  set_config_value; int /*<<< orphan*/  allow_migrations; int /*<<< orphan*/  tick; int /*<<< orphan*/  residency; int /*<<< orphan*/  get_hint; int /*<<< orphan*/  invalidate_mapping; int /*<<< orphan*/  load_mapping; int /*<<< orphan*/  clear_dirty; int /*<<< orphan*/  set_dirty; int /*<<< orphan*/  complete_background_work; int /*<<< orphan*/  get_background_work; int /*<<< orphan*/  lookup_with_work; int /*<<< orphan*/  lookup; int /*<<< orphan*/  destroy; } ;
struct smq_policy {TYPE_1__ policy; } ;

/* Variables and functions */
 int /*<<< orphan*/  mq_emit_config_values ; 
 int /*<<< orphan*/  mq_set_config_value ; 
 int /*<<< orphan*/  smq_allow_migrations ; 
 int /*<<< orphan*/  smq_clear_dirty ; 
 int /*<<< orphan*/  smq_complete_background_work ; 
 int /*<<< orphan*/  smq_destroy ; 
 int /*<<< orphan*/  smq_get_background_work ; 
 int /*<<< orphan*/  smq_get_hint ; 
 int /*<<< orphan*/  smq_invalidate_mapping ; 
 int /*<<< orphan*/  smq_load_mapping ; 
 int /*<<< orphan*/  smq_lookup ; 
 int /*<<< orphan*/  smq_lookup_with_work ; 
 int /*<<< orphan*/  smq_residency ; 
 int /*<<< orphan*/  smq_set_dirty ; 
 int /*<<< orphan*/  smq_tick ; 

__attribute__((used)) static void init_policy_functions(struct smq_policy *mq, bool mimic_mq)
{
	mq->policy.destroy = smq_destroy;
	mq->policy.lookup = smq_lookup;
	mq->policy.lookup_with_work = smq_lookup_with_work;
	mq->policy.get_background_work = smq_get_background_work;
	mq->policy.complete_background_work = smq_complete_background_work;
	mq->policy.set_dirty = smq_set_dirty;
	mq->policy.clear_dirty = smq_clear_dirty;
	mq->policy.load_mapping = smq_load_mapping;
	mq->policy.invalidate_mapping = smq_invalidate_mapping;
	mq->policy.get_hint = smq_get_hint;
	mq->policy.residency = smq_residency;
	mq->policy.tick = smq_tick;
	mq->policy.allow_migrations = smq_allow_migrations;

	if (mimic_mq) {
		mq->policy.set_config_value = mq_set_config_value;
		mq->policy.emit_config_values = mq_emit_config_values;
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
          int mimic_mq = 100;
          int _len_mq0 = 1;
          struct smq_policy * mq = (struct smq_policy *) malloc(_len_mq0*sizeof(struct smq_policy));
          for(int _i0 = 0; _i0 < _len_mq0; _i0++) {
            mq[_i0].policy.emit_config_values = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.set_config_value = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.allow_migrations = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.tick = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.residency = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.get_hint = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.invalidate_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.load_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.clear_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.set_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.complete_background_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.get_background_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.lookup_with_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.lookup = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.destroy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_policy_functions(mq,mimic_mq);
          free(mq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mimic_mq = 255;
          int _len_mq0 = 65025;
          struct smq_policy * mq = (struct smq_policy *) malloc(_len_mq0*sizeof(struct smq_policy));
          for(int _i0 = 0; _i0 < _len_mq0; _i0++) {
            mq[_i0].policy.emit_config_values = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.set_config_value = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.allow_migrations = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.tick = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.residency = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.get_hint = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.invalidate_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.load_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.clear_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.set_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.complete_background_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.get_background_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.lookup_with_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.lookup = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.destroy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_policy_functions(mq,mimic_mq);
          free(mq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mimic_mq = 10;
          int _len_mq0 = 100;
          struct smq_policy * mq = (struct smq_policy *) malloc(_len_mq0*sizeof(struct smq_policy));
          for(int _i0 = 0; _i0 < _len_mq0; _i0++) {
            mq[_i0].policy.emit_config_values = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.set_config_value = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.allow_migrations = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.tick = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.residency = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.get_hint = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.invalidate_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.load_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.clear_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.set_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.complete_background_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.get_background_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.lookup_with_work = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.lookup = ((-2 * (next_i()%2)) + 1) * next_i();
        mq[_i0].policy.destroy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_policy_functions(mq,mimic_mq);
          free(mq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
