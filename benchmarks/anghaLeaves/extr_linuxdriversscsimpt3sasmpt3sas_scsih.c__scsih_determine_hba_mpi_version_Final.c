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
typedef  int /*<<< orphan*/  u16 ;
struct pci_dev {int device; } ;

/* Variables and functions */
#define  MPI25_MFGPAGE_DEVID_SAS3004 168 
#define  MPI25_MFGPAGE_DEVID_SAS3008 167 
#define  MPI25_MFGPAGE_DEVID_SAS3108_1 166 
#define  MPI25_MFGPAGE_DEVID_SAS3108_2 165 
#define  MPI25_MFGPAGE_DEVID_SAS3108_5 164 
#define  MPI25_MFGPAGE_DEVID_SAS3108_6 163 
 int /*<<< orphan*/  MPI25_VERSION ; 
#define  MPI26_MFGPAGE_DEVID_SAS3216 162 
#define  MPI26_MFGPAGE_DEVID_SAS3224 161 
#define  MPI26_MFGPAGE_DEVID_SAS3316_1 160 
#define  MPI26_MFGPAGE_DEVID_SAS3316_2 159 
#define  MPI26_MFGPAGE_DEVID_SAS3316_3 158 
#define  MPI26_MFGPAGE_DEVID_SAS3316_4 157 
#define  MPI26_MFGPAGE_DEVID_SAS3324_1 156 
#define  MPI26_MFGPAGE_DEVID_SAS3324_2 155 
#define  MPI26_MFGPAGE_DEVID_SAS3324_3 154 
#define  MPI26_MFGPAGE_DEVID_SAS3324_4 153 
#define  MPI26_MFGPAGE_DEVID_SAS3408 152 
#define  MPI26_MFGPAGE_DEVID_SAS3416 151 
#define  MPI26_MFGPAGE_DEVID_SAS3508 150 
#define  MPI26_MFGPAGE_DEVID_SAS3508_1 149 
#define  MPI26_MFGPAGE_DEVID_SAS3516 148 
#define  MPI26_MFGPAGE_DEVID_SAS3516_1 147 
#define  MPI26_MFGPAGE_DEVID_SAS3616 146 
 int /*<<< orphan*/  MPI26_VERSION ; 
#define  MPI2_MFGPAGE_DEVID_SAS2004 145 
#define  MPI2_MFGPAGE_DEVID_SAS2008 144 
#define  MPI2_MFGPAGE_DEVID_SAS2108_1 143 
#define  MPI2_MFGPAGE_DEVID_SAS2108_2 142 
#define  MPI2_MFGPAGE_DEVID_SAS2108_3 141 
#define  MPI2_MFGPAGE_DEVID_SAS2116_1 140 
#define  MPI2_MFGPAGE_DEVID_SAS2116_2 139 
#define  MPI2_MFGPAGE_DEVID_SAS2208_1 138 
#define  MPI2_MFGPAGE_DEVID_SAS2208_2 137 
#define  MPI2_MFGPAGE_DEVID_SAS2208_3 136 
#define  MPI2_MFGPAGE_DEVID_SAS2208_4 135 
#define  MPI2_MFGPAGE_DEVID_SAS2208_5 134 
#define  MPI2_MFGPAGE_DEVID_SAS2208_6 133 
#define  MPI2_MFGPAGE_DEVID_SAS2308_1 132 
#define  MPI2_MFGPAGE_DEVID_SAS2308_2 131 
#define  MPI2_MFGPAGE_DEVID_SAS2308_3 130 
#define  MPI2_MFGPAGE_DEVID_SAS2308_MPI_EP 129 
#define  MPI2_MFGPAGE_DEVID_SSS6200 128 
 int /*<<< orphan*/  MPI2_VERSION ; 

__attribute__((used)) static u16
_scsih_determine_hba_mpi_version(struct pci_dev *pdev)
{

	switch (pdev->device) {
	case MPI2_MFGPAGE_DEVID_SSS6200:
	case MPI2_MFGPAGE_DEVID_SAS2004:
	case MPI2_MFGPAGE_DEVID_SAS2008:
	case MPI2_MFGPAGE_DEVID_SAS2108_1:
	case MPI2_MFGPAGE_DEVID_SAS2108_2:
	case MPI2_MFGPAGE_DEVID_SAS2108_3:
	case MPI2_MFGPAGE_DEVID_SAS2116_1:
	case MPI2_MFGPAGE_DEVID_SAS2116_2:
	case MPI2_MFGPAGE_DEVID_SAS2208_1:
	case MPI2_MFGPAGE_DEVID_SAS2208_2:
	case MPI2_MFGPAGE_DEVID_SAS2208_3:
	case MPI2_MFGPAGE_DEVID_SAS2208_4:
	case MPI2_MFGPAGE_DEVID_SAS2208_5:
	case MPI2_MFGPAGE_DEVID_SAS2208_6:
	case MPI2_MFGPAGE_DEVID_SAS2308_1:
	case MPI2_MFGPAGE_DEVID_SAS2308_2:
	case MPI2_MFGPAGE_DEVID_SAS2308_3:
	case MPI2_MFGPAGE_DEVID_SAS2308_MPI_EP:
		return MPI2_VERSION;
	case MPI25_MFGPAGE_DEVID_SAS3004:
	case MPI25_MFGPAGE_DEVID_SAS3008:
	case MPI25_MFGPAGE_DEVID_SAS3108_1:
	case MPI25_MFGPAGE_DEVID_SAS3108_2:
	case MPI25_MFGPAGE_DEVID_SAS3108_5:
	case MPI25_MFGPAGE_DEVID_SAS3108_6:
		return MPI25_VERSION;
	case MPI26_MFGPAGE_DEVID_SAS3216:
	case MPI26_MFGPAGE_DEVID_SAS3224:
	case MPI26_MFGPAGE_DEVID_SAS3316_1:
	case MPI26_MFGPAGE_DEVID_SAS3316_2:
	case MPI26_MFGPAGE_DEVID_SAS3316_3:
	case MPI26_MFGPAGE_DEVID_SAS3316_4:
	case MPI26_MFGPAGE_DEVID_SAS3324_1:
	case MPI26_MFGPAGE_DEVID_SAS3324_2:
	case MPI26_MFGPAGE_DEVID_SAS3324_3:
	case MPI26_MFGPAGE_DEVID_SAS3324_4:
	case MPI26_MFGPAGE_DEVID_SAS3508:
	case MPI26_MFGPAGE_DEVID_SAS3508_1:
	case MPI26_MFGPAGE_DEVID_SAS3408:
	case MPI26_MFGPAGE_DEVID_SAS3516:
	case MPI26_MFGPAGE_DEVID_SAS3516_1:
	case MPI26_MFGPAGE_DEVID_SAS3416:
	case MPI26_MFGPAGE_DEVID_SAS3616:
		return MPI26_VERSION;
	}
	return 0;
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
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _scsih_determine_hba_mpi_version(pdev);
          printf("%d\n", benchRet); 
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pdev0 = 100;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _scsih_determine_hba_mpi_version(pdev);
          printf("%d\n", benchRet); 
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
