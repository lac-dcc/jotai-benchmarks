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
struct dm_target {int dummy; } ;
struct bio {int /*<<< orphan*/  bi_status; } ;
typedef  int /*<<< orphan*/  sector_t ;

/* Variables and functions */
 int /*<<< orphan*/  BLK_STS_NOTSUPP ; 

void dm_remap_zone_report(struct dm_target *ti, struct bio *bio, sector_t start)
{
#ifdef CONFIG_BLK_DEV_ZONED
	struct dm_target_io *tio = container_of(bio, struct dm_target_io, clone);
	struct bio *report_bio = tio->io->orig_bio;
	struct blk_zone_report_hdr *hdr = NULL;
	struct blk_zone *zone;
	unsigned int nr_rep = 0;
	unsigned int ofst;
	sector_t part_offset;
	struct bio_vec bvec;
	struct bvec_iter iter;
	void *addr;

	if (bio->bi_status)
		return;

	/*
	 * bio sector was incremented by the request size on completion. Taking
	 * into account the original request sector, the target start offset on
	 * the backing device and the target mapping offset (ti->begin), the
	 * start sector of the backing device. The partition offset is always 0
	 * if the target uses a whole device.
	 */
	part_offset = bio->bi_iter.bi_sector + ti->begin - (start + bio_end_sector(report_bio));

	/*
	 * Remap the start sector of the reported zones. For sequential zones,
	 * also remap the write pointer position.
	 */
	bio_for_each_segment(bvec, report_bio, iter) {
		addr = kmap_atomic(bvec.bv_page);

		/* Remember the report header in the first page */
		if (!hdr) {
			hdr = addr;
			ofst = sizeof(struct blk_zone_report_hdr);
		} else
			ofst = 0;

		/* Set zones start sector */
		while (hdr->nr_zones && ofst < bvec.bv_len) {
			zone = addr + ofst;
			zone->start -= part_offset;
			if (zone->start >= start + ti->len) {
				hdr->nr_zones = 0;
				break;
			}
			zone->start = zone->start + ti->begin - start;
			if (zone->type != BLK_ZONE_TYPE_CONVENTIONAL) {
				if (zone->cond == BLK_ZONE_COND_FULL)
					zone->wp = zone->start + zone->len;
				else if (zone->cond == BLK_ZONE_COND_EMPTY)
					zone->wp = zone->start;
				else
					zone->wp = zone->wp + ti->begin - start - part_offset;
			}
			ofst += sizeof(struct blk_zone);
			hdr->nr_zones--;
			nr_rep++;
		}

		if (addr != hdr)
			kunmap_atomic(addr);

		if (!hdr->nr_zones)
			break;
	}

	if (hdr) {
		hdr->nr_zones = nr_rep;
		kunmap_atomic(hdr);
	}

	bio_advance(report_bio, report_bio->bi_iter.bi_size);

#else /* !CONFIG_BLK_DEV_ZONED */
	bio->bi_status = BLK_STS_NOTSUPP;
#endif
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
          int start = 100;
          int _len_ti0 = 1;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
            ti[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dm_remap_zone_report(ti,bio,start);
          free(ti);
          free(bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
