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
struct ip6_sf_list {int /*<<< orphan*/  sf_crcount; int /*<<< orphan*/ * sf_count; int /*<<< orphan*/  sf_gsresp; } ;
struct ifmcaddr6 {int mca_flags; size_t mca_sfmode; int /*<<< orphan*/ * mca_sfcount; } ;

/* Variables and functions */
 int MAF_GSQUERY ; 
 size_t MCAST_EXCLUDE ; 
 size_t MCAST_INCLUDE ; 
#define  MLD2_ALLOW_NEW_SOURCES 133 
#define  MLD2_BLOCK_OLD_SOURCES 132 
#define  MLD2_CHANGE_TO_EXCLUDE 131 
#define  MLD2_CHANGE_TO_INCLUDE 130 
#define  MLD2_MODE_IS_EXCLUDE 129 
#define  MLD2_MODE_IS_INCLUDE 128 

__attribute__((used)) static bool is_in(struct ifmcaddr6 *pmc, struct ip6_sf_list *psf, int type,
		  int gdeleted, int sdeleted)
{
	switch (type) {
	case MLD2_MODE_IS_INCLUDE:
	case MLD2_MODE_IS_EXCLUDE:
		if (gdeleted || sdeleted)
			return false;
		if (!((pmc->mca_flags & MAF_GSQUERY) && !psf->sf_gsresp)) {
			if (pmc->mca_sfmode == MCAST_INCLUDE)
				return true;
			/* don't include if this source is excluded
			 * in all filters
			 */
			if (psf->sf_count[MCAST_INCLUDE])
				return type == MLD2_MODE_IS_INCLUDE;
			return pmc->mca_sfcount[MCAST_EXCLUDE] ==
				psf->sf_count[MCAST_EXCLUDE];
		}
		return false;
	case MLD2_CHANGE_TO_INCLUDE:
		if (gdeleted || sdeleted)
			return false;
		return psf->sf_count[MCAST_INCLUDE] != 0;
	case MLD2_CHANGE_TO_EXCLUDE:
		if (gdeleted || sdeleted)
			return false;
		if (pmc->mca_sfcount[MCAST_EXCLUDE] == 0 ||
		    psf->sf_count[MCAST_INCLUDE])
			return false;
		return pmc->mca_sfcount[MCAST_EXCLUDE] ==
			psf->sf_count[MCAST_EXCLUDE];
	case MLD2_ALLOW_NEW_SOURCES:
		if (gdeleted || !psf->sf_crcount)
			return false;
		return (pmc->mca_sfmode == MCAST_INCLUDE) ^ sdeleted;
	case MLD2_BLOCK_OLD_SOURCES:
		if (pmc->mca_sfmode == MCAST_INCLUDE)
			return gdeleted || (psf->sf_crcount && sdeleted);
		return psf->sf_crcount && !gdeleted && !sdeleted;
	}
	return false;
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
          int type = 100;
          int gdeleted = 100;
          int sdeleted = 100;
          int _len_pmc0 = 1;
          struct ifmcaddr6 * pmc = (struct ifmcaddr6 *) malloc(_len_pmc0*sizeof(struct ifmcaddr6));
          for(int _i0 = 0; _i0 < _len_pmc0; _i0++) {
            pmc[_i0].mca_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pmc[_i0].mca_sfmode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmc__i0__mca_sfcount0 = 1;
          pmc[_i0].mca_sfcount = (int *) malloc(_len_pmc__i0__mca_sfcount0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pmc__i0__mca_sfcount0; _j0++) {
            pmc[_i0].mca_sfcount[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psf0 = 1;
          struct ip6_sf_list * psf = (struct ip6_sf_list *) malloc(_len_psf0*sizeof(struct ip6_sf_list));
          for(int _i0 = 0; _i0 < _len_psf0; _i0++) {
            psf[_i0].sf_crcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_psf__i0__sf_count0 = 1;
          psf[_i0].sf_count = (int *) malloc(_len_psf__i0__sf_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_psf__i0__sf_count0; _j0++) {
            psf[_i0].sf_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psf[_i0].sf_gsresp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_in(pmc,psf,type,gdeleted,sdeleted);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pmc0; _aux++) {
          free(pmc[_aux].mca_sfcount);
          }
          free(pmc);
          for(int _aux = 0; _aux < _len_psf0; _aux++) {
          free(psf[_aux].sf_count);
          }
          free(psf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
