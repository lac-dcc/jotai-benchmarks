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

/* Type definitions */
typedef  scalar_t__ u64 ;
struct map {struct dso* dso; } ;
struct dso {int dummy; } ;
typedef  enum match_result { ____Placeholder_match_result } match_result ;

/* Variables and functions */
 int MATCH_EQ ; 
 int MATCH_GT ; 
 int MATCH_LT ; 

__attribute__((used)) static enum match_result match_chain_dso_addresses(struct map *left_map, u64 left_ip,
						   struct map *right_map, u64 right_ip)
{
	struct dso *left_dso = left_map ? left_map->dso : NULL;
	struct dso *right_dso = right_map ? right_map->dso : NULL;

	if (left_dso != right_dso)
		return left_dso < right_dso ? MATCH_LT : MATCH_GT;

	if (left_ip != right_ip)
 		return left_ip < right_ip ? MATCH_LT : MATCH_GT;

	return MATCH_EQ;
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
          long left_ip = 100;
          long right_ip = 100;
          int _len_left_map0 = 1;
          struct map * left_map = (struct map *) malloc(_len_left_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_left_map0; _i0++) {
              int _len_left_map__i0__dso0 = 1;
          left_map[_i0].dso = (struct dso *) malloc(_len_left_map__i0__dso0*sizeof(struct dso));
          for(int _j0 = 0; _j0 < _len_left_map__i0__dso0; _j0++) {
            left_map[_i0].dso->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right_map0 = 1;
          struct map * right_map = (struct map *) malloc(_len_right_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_right_map0; _i0++) {
              int _len_right_map__i0__dso0 = 1;
          right_map[_i0].dso = (struct dso *) malloc(_len_right_map__i0__dso0*sizeof(struct dso));
          for(int _j0 = 0; _j0 < _len_right_map__i0__dso0; _j0++) {
            right_map[_i0].dso->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum match_result benchRet = match_chain_dso_addresses(left_map,left_ip,right_map,right_ip);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_left_map0; _aux++) {
          free(left_map[_aux].dso);
          }
          free(left_map);
          for(int _aux = 0; _aux < _len_right_map0; _aux++) {
          free(right_map[_aux].dso);
          }
          free(right_map);
        
        break;
    }
    // big-arr
    case 1:
    {
          long left_ip = 255;
          long right_ip = 255;
          int _len_left_map0 = 65025;
          struct map * left_map = (struct map *) malloc(_len_left_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_left_map0; _i0++) {
              int _len_left_map__i0__dso0 = 1;
          left_map[_i0].dso = (struct dso *) malloc(_len_left_map__i0__dso0*sizeof(struct dso));
          for(int _j0 = 0; _j0 < _len_left_map__i0__dso0; _j0++) {
            left_map[_i0].dso->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right_map0 = 65025;
          struct map * right_map = (struct map *) malloc(_len_right_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_right_map0; _i0++) {
              int _len_right_map__i0__dso0 = 1;
          right_map[_i0].dso = (struct dso *) malloc(_len_right_map__i0__dso0*sizeof(struct dso));
          for(int _j0 = 0; _j0 < _len_right_map__i0__dso0; _j0++) {
            right_map[_i0].dso->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum match_result benchRet = match_chain_dso_addresses(left_map,left_ip,right_map,right_ip);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_left_map0; _aux++) {
          free(left_map[_aux].dso);
          }
          free(left_map);
          for(int _aux = 0; _aux < _len_right_map0; _aux++) {
          free(right_map[_aux].dso);
          }
          free(right_map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long left_ip = 10;
          long right_ip = 10;
          int _len_left_map0 = 100;
          struct map * left_map = (struct map *) malloc(_len_left_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_left_map0; _i0++) {
              int _len_left_map__i0__dso0 = 1;
          left_map[_i0].dso = (struct dso *) malloc(_len_left_map__i0__dso0*sizeof(struct dso));
          for(int _j0 = 0; _j0 < _len_left_map__i0__dso0; _j0++) {
            left_map[_i0].dso->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right_map0 = 100;
          struct map * right_map = (struct map *) malloc(_len_right_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_right_map0; _i0++) {
              int _len_right_map__i0__dso0 = 1;
          right_map[_i0].dso = (struct dso *) malloc(_len_right_map__i0__dso0*sizeof(struct dso));
          for(int _j0 = 0; _j0 < _len_right_map__i0__dso0; _j0++) {
            right_map[_i0].dso->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum match_result benchRet = match_chain_dso_addresses(left_map,left_ip,right_map,right_ip);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_left_map0; _aux++) {
          free(left_map[_aux].dso);
          }
          free(left_map);
          for(int _aux = 0; _aux < _len_right_map0; _aux++) {
          free(right_map[_aux].dso);
          }
          free(right_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
