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
typedef  int /*<<< orphan*/  PROGGROUP ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

BOOL GRPFILE_WriteGroupFile(PROGGROUP* hGroup)
{
#if 0
  CHAR szPath[MAX_PATHNAME_LEN];
  PROGGROUP *group = LocalLock(hGroup);
  OFSTRUCT dummy;
  HFILE file;
  BOOL ret;

  GRPFILE_ModifyFileName(szPath, LocalLock(group->hGrpFile),
			 MAX_PATHNAME_LEN,
			 group->bFileNameModified);

  /* Try not to overwrite original files */

  /* group->bOverwriteFileOk == TRUE only if a file has the modified format */
  if (!group->bOverwriteFileOk &&
      OpenFile(szPath, &dummy, OF_EXIST) != HFILE_ERROR)
    {
      /* Original file exists, try `.gr' extension */
      GRPFILE_ModifyFileName(szPath, LocalLock(group->hGrpFile),
			     MAX_PATHNAME_LEN, TRUE);
      if (OpenFile(szPath, &dummy, OF_EXIST) != HFILE_ERROR)
	{
	  /* File exists. Do not overwrite */
	  MAIN_MessageBoxIDS_s(IDS_FILE_NOT_OVERWRITTEN_s, szPath,
			       IDS_INFO, MB_OK);
	  return FALSE;
	}
      /* Inform about the modified file name */
      if (IDCANCEL ==
	  MAIN_MessageBoxIDS_s(IDS_SAVE_GROUP_AS_s, szPath, IDS_INFO,
			       MB_OKCANCEL | MB_ICONINFORMATION))
	return FALSE;
    }

  {
    /* Warn about the (possible) incompatibility */
    CHAR msg[MAX_PATHNAME_LEN + 200];
    wsprintfA(msg,
	     "Group files written by this DRAFT Program Manager "
	     "possibly cannot be read by the Microsoft Program Manager!!\n"
	     "Are you sure to write %s?", szPath);
    if (IDOK != MessageBoxA(Globals.hMainWnd, msg, "WARNING",
                            MB_OKCANCEL | MB_DEFBUTTON2)) return FALSE;
  }

  /* Open file */
  file = _lcreat(szPath, 0);
  if (file != HFILE_ERROR)
    {
      ret = GRPFILE_DoWriteGroupFile(file, group);
      _lclose(file);
    }
  else ret = FALSE;

  if (!ret)
    MAIN_MessageBoxIDS_s(IDS_FILE_WRITE_ERROR_s, szPath, IDS_ERROR, MB_OK);

  return(ret);

#else
    return TRUE;
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
          int _len_hGroup0 = 1;
          int * hGroup = (int *) malloc(_len_hGroup0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hGroup0; _i0++) {
            hGroup[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GRPFILE_WriteGroupFile(hGroup);
          printf("%d\n", benchRet); 
          free(hGroup);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hGroup0 = 100;
          int * hGroup = (int *) malloc(_len_hGroup0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hGroup0; _i0++) {
            hGroup[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GRPFILE_WriteGroupFile(hGroup);
          printf("%d\n", benchRet); 
          free(hGroup);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
