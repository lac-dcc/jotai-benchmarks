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
typedef  scalar_t__ u8 ;
struct hclge_mac {int speed; scalar_t__ duplex; } ;
struct TYPE_2__ {struct hclge_mac mac; } ;
struct hclge_dev {TYPE_1__ hw; } ;

/* Variables and functions */
 scalar_t__ HCLGE_MAC_FULL ; 
 int HCLGE_MAC_SPEED_100M ; 
 int HCLGE_MAC_SPEED_10M ; 

__attribute__((used)) static void hclge_check_speed_dup(struct hclge_dev *hdev, int duplex, int speed)
{
	struct hclge_mac *mac = &hdev->hw.mac;

	if ((speed == HCLGE_MAC_SPEED_10M) || (speed == HCLGE_MAC_SPEED_100M))
		mac->duplex = (u8)duplex;
	else
		mac->duplex = HCLGE_MAC_FULL;

	mac->speed = speed;
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
          int duplex = 100;
          int speed = 100;
          int _len_hdev0 = 1;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].hw.mac.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].hw.mac.duplex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_check_speed_dup(hdev,duplex,speed);
          free(hdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
