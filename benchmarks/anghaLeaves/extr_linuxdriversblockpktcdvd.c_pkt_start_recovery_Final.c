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
       1            big-arr-10x\n\
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
struct packet_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int pkt_start_recovery(struct packet_data *pkt)
{
	/*
	 * FIXME. We need help from the file system to implement
	 * recovery handling.
	 */
	return 0;
#if 0
	struct request *rq = pkt->rq;
	struct pktcdvd_device *pd = rq->rq_disk->private_data;
	struct block_device *pkt_bdev;
	struct super_block *sb = NULL;
	unsigned long old_block, new_block;
	sector_t new_sector;

	pkt_bdev = bdget(kdev_t_to_nr(pd->pkt_dev));
	if (pkt_bdev) {
		sb = get_super(pkt_bdev);
		bdput(pkt_bdev);
	}

	if (!sb)
		return 0;

	if (!sb->s_op->relocate_blocks)
		goto out;

	old_block = pkt->sector / (CD_FRAMESIZE >> 9);
	if (sb->s_op->relocate_blocks(sb, old_block, &new_block))
		goto out;

	new_sector = new_block * (CD_FRAMESIZE >> 9);
	pkt->sector = new_sector;

	bio_reset(pkt->bio);
	bio_set_dev(pkt->bio, pd->bdev);
	bio_set_op_attrs(pkt->bio, REQ_OP_WRITE, 0);
	pkt->bio->bi_iter.bi_sector = new_sector;
	pkt->bio->bi_iter.bi_size = pkt->frames * CD_FRAMESIZE;
	pkt->bio->bi_vcnt = pkt->frames;

	pkt->bio->bi_end_io = pkt_end_io_packet_write;
	pkt->bio->bi_private = pkt;

	drop_super(sb);
	return 1;

out:
	drop_super(sb);
	return 0;
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
          int _len_pkt0 = 1;
          struct packet_data * pkt = (struct packet_data *) malloc(_len_pkt0*sizeof(struct packet_data));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pkt_start_recovery(pkt);
          printf("%d\n", benchRet); 
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pkt0 = 100;
          struct packet_data * pkt = (struct packet_data *) malloc(_len_pkt0*sizeof(struct packet_data));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pkt_start_recovery(pkt);
          printf("%d\n", benchRet); 
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
