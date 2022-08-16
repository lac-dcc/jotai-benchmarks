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
struct scsi_cmnd {int* cmnd; } ;

/* Variables and functions */
#define  READ_10 147 
#define  READ_12 146 
#define  READ_16 145 
#define  READ_32 144 
#define  READ_6 143 
#define  SYNCHRONIZE_CACHE 142 
#define  UNMAP 141 
#define  VARIABLE_LENGTH_CMD 140 
#define  VERIFY 139 
#define  VERIFY_12 138 
#define  VERIFY_16 137 
#define  VERIFY_32 136 
#define  WRITE_10 135 
#define  WRITE_12 134 
#define  WRITE_16 133 
#define  WRITE_32 132 
#define  WRITE_6 131 
#define  WRITE_SAME 130 
#define  WRITE_SAME_16 129 
#define  WRITE_SAME_32 128 

__attribute__((used)) static inline int scsi_medium_access_command(struct scsi_cmnd *scmd)
{
	switch (scmd->cmnd[0]) {
	case READ_6:
	case READ_10:
	case READ_12:
	case READ_16:
	case SYNCHRONIZE_CACHE:
	case VERIFY:
	case VERIFY_12:
	case VERIFY_16:
	case WRITE_6:
	case WRITE_10:
	case WRITE_12:
	case WRITE_16:
	case WRITE_SAME:
	case WRITE_SAME_16:
	case UNMAP:
		return 1;
	case VARIABLE_LENGTH_CMD:
		switch (scmd->cmnd[9]) {
		case READ_32:
		case VERIFY_32:
		case WRITE_32:
		case WRITE_SAME_32:
			return 1;
		}
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
          int _len_scmd0 = 1;
          struct scsi_cmnd * scmd = (struct scsi_cmnd *) malloc(_len_scmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_scmd0; _i0++) {
              int _len_scmd__i0__cmnd0 = 1;
          scmd[_i0].cmnd = (int *) malloc(_len_scmd__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scmd__i0__cmnd0; _j0++) {
            scmd[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = scsi_medium_access_command(scmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scmd0; _aux++) {
          free(scmd[_aux].cmnd);
          }
          free(scmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
