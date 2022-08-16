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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ubi_volume_info {int /*<<< orphan*/  cdev; int /*<<< orphan*/  name; int /*<<< orphan*/  name_len; int /*<<< orphan*/  usable_leb_size; int /*<<< orphan*/  alignment; int /*<<< orphan*/  upd_marker; int /*<<< orphan*/  corrupted; int /*<<< orphan*/  vol_type; int /*<<< orphan*/  used_bytes; int /*<<< orphan*/  size; int /*<<< orphan*/  ubi_num; int /*<<< orphan*/  vol_id; } ;
struct TYPE_2__ {int /*<<< orphan*/  dev; } ;
struct ubi_volume {TYPE_1__ cdev; int /*<<< orphan*/  name; int /*<<< orphan*/  name_len; int /*<<< orphan*/  usable_leb_size; int /*<<< orphan*/  alignment; int /*<<< orphan*/  upd_marker; int /*<<< orphan*/  corrupted; int /*<<< orphan*/  vol_type; int /*<<< orphan*/  used_bytes; int /*<<< orphan*/  reserved_pebs; int /*<<< orphan*/  vol_id; } ;
struct ubi_device {int /*<<< orphan*/  ubi_num; } ;

/* Variables and functions */

void ubi_do_get_volume_info(struct ubi_device *ubi, struct ubi_volume *vol,
			    struct ubi_volume_info *vi)
{
	vi->vol_id = vol->vol_id;
	vi->ubi_num = ubi->ubi_num;
	vi->size = vol->reserved_pebs;
	vi->used_bytes = vol->used_bytes;
	vi->vol_type = vol->vol_type;
	vi->corrupted = vol->corrupted;
	vi->upd_marker = vol->upd_marker;
	vi->alignment = vol->alignment;
	vi->usable_leb_size = vol->usable_leb_size;
	vi->name_len = vol->name_len;
	vi->name = vol->name;
	vi->cdev = vol->cdev.dev;
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
          int _len_ubi0 = 1;
          struct ubi_device * ubi = (struct ubi_device *) malloc(_len_ubi0*sizeof(struct ubi_device));
          for(int _i0 = 0; _i0 < _len_ubi0; _i0++) {
            ubi[_i0].ubi_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vol0 = 1;
          struct ubi_volume * vol = (struct ubi_volume *) malloc(_len_vol0*sizeof(struct ubi_volume));
          for(int _i0 = 0; _i0 < _len_vol0; _i0++) {
            vol[_i0].cdev.dev = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].name = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].name_len = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].usable_leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].upd_marker = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].corrupted = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].vol_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].used_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].reserved_pebs = ((-2 * (next_i()%2)) + 1) * next_i();
        vol[_i0].vol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vi0 = 1;
          struct ubi_volume_info * vi = (struct ubi_volume_info *) malloc(_len_vi0*sizeof(struct ubi_volume_info));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
            vi[_i0].cdev = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].name = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].name_len = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].usable_leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].upd_marker = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].corrupted = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].vol_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].used_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].ubi_num = ((-2 * (next_i()%2)) + 1) * next_i();
        vi[_i0].vol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ubi_do_get_volume_info(ubi,vol,vi);
          free(ubi);
          free(vol);
          free(vi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
