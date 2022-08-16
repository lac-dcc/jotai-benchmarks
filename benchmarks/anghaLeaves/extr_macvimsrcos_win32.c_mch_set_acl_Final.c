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
typedef  int /*<<< orphan*/  vim_acl_T ;
typedef  int /*<<< orphan*/  char_u ;

/* Variables and functions */

void
mch_set_acl(char_u *fname, vim_acl_T acl)
{
#ifdef HAVE_ACL
    struct my_acl   *p = (struct my_acl *)acl;
    SECURITY_INFORMATION    sec_info = 0;

    if (p != NULL && advapi_lib != NULL)
    {
# ifdef FEAT_MBYTE
	WCHAR	*wn = NULL;
# endif

	/* Set security flags */
	if (p->pSidOwner)
	    sec_info |= OWNER_SECURITY_INFORMATION;
	if (p->pSidGroup)
	    sec_info |= GROUP_SECURITY_INFORMATION;
	if (p->pDacl)
	{
	    sec_info |= DACL_SECURITY_INFORMATION;
	    /* Do not inherit its parent's DACL.
	     * If the DACL is inherited, Cygwin permissions would be changed.
	     */
	    if (!is_acl_inherited(p->pDacl))
		sec_info |= PROTECTED_DACL_SECURITY_INFORMATION;
	}
	if (p->pSacl)
	    sec_info |= SACL_SECURITY_INFORMATION;

# ifdef FEAT_MBYTE
	if (enc_codepage >= 0 && (int)GetACP() != enc_codepage)
	    wn = enc_to_utf16(fname, NULL);
	if (wn != NULL)
	{
	    (void)pSetNamedSecurityInfoW(
			wn,			// Abstract filename
			SE_FILE_OBJECT,		// File Object
			sec_info,
			p->pSidOwner,		// Ownership information.
			p->pSidGroup,		// Group membership.
			p->pDacl,		// Discretionary information.
			p->pSacl		// For auditing purposes.
			);
	    vim_free(wn);
	}
	else
# endif
	{
	    (void)pSetNamedSecurityInfo(
			(LPSTR)fname,		// Abstract filename
			SE_FILE_OBJECT,		// File Object
			sec_info,
			p->pSidOwner,		// Ownership information.
			p->pSidGroup,		// Group membership.
			p->pDacl,		// Discretionary information.
			p->pSacl		// For auditing purposes.
			);
	}
    }
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
          int acl = 100;
          int _len_fname0 = 1;
          int * fname = (int *) malloc(_len_fname0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fname0; _i0++) {
            fname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mch_set_acl(fname,acl);
          free(fname);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int acl = 10;
          int _len_fname0 = 100;
          int * fname = (int *) malloc(_len_fname0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fname0; _i0++) {
            fname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mch_set_acl(fname,acl);
          free(fname);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
